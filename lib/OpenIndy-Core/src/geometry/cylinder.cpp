#include "cylinder.h"

#include "featurewrapper.h"

using namespace oi;
using namespace oi::math;

/*!
 * \brief Cylinder::Cylinder
 * \param isNominal
 * \param parent
 */
Cylinder::Cylinder(const bool &isNominal, QObject *parent) : Geometry(isNominal, parent){

    //set up feature wrapper
    if(!this->selfFeature.isNull()){
        this->selfFeature->setCylinder(this);
    }

}

/*!
 * \brief Cylinder::Cylinder
 * \param isNominal
 * \param axisPoint
 * \param axis
 * \param radius
 * \param parent
 */
Cylinder::Cylinder(const bool &isNominal, const Position &axisPoint, const Direction &axis, const Radius &radius, QObject *parent) : Geometry(isNominal, parent){

    //set up feature wrapper
    if(!this->selfFeature.isNull()){
        this->selfFeature->setCylinder(this);
    }

    this->setCylinder(axisPoint, axis, radius);

}

/*!
 * \brief Cylinder::Cylinder
 * \param copy
 * \param parent
 */
Cylinder::Cylinder(const Cylinder &copy, QObject *parent) : Geometry(copy, parent){

    //set up feature wrapper
    if(!this->selfFeature.isNull()){
        this->selfFeature->setCylinder(this);
    }

    this->axisPoint = copy.axisPoint;
    this->axis = copy.axis;
    this->radius = copy.radius;

}

/*!
 * \brief Cylinder::operator =
 * \param copy
 * \return
 */
Cylinder &Cylinder::operator=(const Cylinder &copy){

    //set up feature wrapper
    if(!this->selfFeature.isNull()){
        this->selfFeature->setCylinder(this);
    }

    this->axisPoint = copy.axisPoint;
    this->axis = copy.axis;
    this->radius = copy.radius;

    return *this;

}

/*!
 * \brief Cylinder::~Cylinder
 */
Cylinder::~Cylinder(){

}

/*!
 * \brief Cylinder::hasDirection
 * \return
 */
bool Cylinder::hasDirection() const{
    return true;
}

/*!
 * \brief Cylinder::hasPosition
 * \return
 */
bool Cylinder::hasPosition() const{
    return true;
}

/*!
 * \brief Cylinder::hasRadius
 * \return
 */
bool Cylinder::hasRadius() const{
    return true;
}

/*!
 * \brief Cylinder::getRadius
 * Returns the radius of the cylinder
 * \return
 */
const Radius &Cylinder::getRadius() const{
    return this->radius;
}

/*!
 * \brief Cylinder::getDirection
 * Returns the axis of the cylinder
 * \return
 */
const Direction &Cylinder::getDirection() const{
    return this->axis;
}

/*!
 * \brief Cylinder::getPosition
 * Returns an arbitrary point on the cylinder axis
 * \return
 */
const Position &Cylinder::getPosition() const{
    return this->axisPoint;
}

/*!
 * \brief Cylinder::setCylinder
 * \param axisPoint
 * \param axis
 * \param radius
 */
void Cylinder::setCylinder(const Position &axisPoint, const Direction &axis, const Radius &radius){

    //set the given parameters
    this->axisPoint = axisPoint;
    this->axis = axis;
    this->radius = radius;

    emit this->geomParametersChanged(this->id);

}

/*!
 * \brief Cylinder::getUnknownParameters
 * \param displayUnits
 * \param displayDigits
 * \return
 */
QMap<GeometryParameters, QString> Cylinder::getUnknownParameters(const QMap<DimensionType, UnitType> &displayUnits, const QMap<DimensionType, int> &displayDigits) const{

    QMap<GeometryParameters, QString> parameters;

    parameters.insert(eUnknownX, this->getDisplayX(displayUnits.value(eMetric, eUnitMeter), displayDigits.value(eMetric, 0)));
    parameters.insert(eUnknownY, this->getDisplayY(displayUnits.value(eMetric, eUnitMeter), displayDigits.value(eMetric, 0)));
    parameters.insert(eUnknownZ, this->getDisplayZ(displayUnits.value(eMetric, eUnitMeter), displayDigits.value(eMetric, 0)));
    parameters.insert(eUnknownPrimaryI, this->getDisplayPrimaryI(displayDigits.value(eDimensionless, 0)));
    parameters.insert(eUnknownPrimaryJ, this->getDisplayPrimaryJ(displayDigits.value(eDimensionless, 0)));
    parameters.insert(eUnknownPrimaryK, this->getDisplayPrimaryK(displayDigits.value(eDimensionless, 0)));
    parameters.insert(eUnknownRadiusA, this->getDisplayRadiusA(displayUnits.value(eMetric, eUnitMeter), displayDigits.value(eMetric, 0)));

    return parameters;

}

/*!
 * \brief Cylinder::setUnknownParameters
 * \param parameters
 */
void Cylinder::setUnknownParameters(const QMap<GeometryParameters, double> &parameters){

    //get current parameters
    OiVec position = this->axisPoint.getVector();
    OiVec direction = this->axis.getVector();
    double radius = this->radius.getRadius();

    //update parameters
    QList<GeometryParameters> keys = parameters.keys();
    foreach(const GeometryParameters &key, keys){
        switch(key){
        case eUnknownX:
            position.setAt(0, parameters.value(eUnknownX));
            break;
        case eUnknownY:
            position.setAt(1, parameters.value(eUnknownY));
            break;
        case eUnknownZ:
            position.setAt(2, parameters.value(eUnknownZ));
            break;
        case eUnknownPrimaryI:
            direction.setAt(0, parameters.value(eUnknownPrimaryI));
            break;
        case eUnknownPrimaryJ:
            direction.setAt(1, parameters.value(eUnknownPrimaryJ));
            break;
        case eUnknownPrimaryK:
            direction.setAt(2, parameters.value(eUnknownPrimaryK));
            break;
        case eUnknownRadiusA:
            radius = parameters.value(eUnknownRadiusA);
            break;
        }
    }

    //update cylinder definition
    direction.normalize();
    Position cylinderPosition(position);
    Direction cylinderDirection(direction);
    Radius cylinderRadius(radius);
    this->setCylinder(cylinderPosition, cylinderDirection, cylinderRadius);

}

/*!
 * \brief Cylinder::recalc
 */
void Cylinder::recalc(){

    Geometry::recalc();

    //reset cylinder definition if not solved and no nominal
    if(!this->isSolved && !this->isNominal){
        this->axisPoint.setVector(0.0, 0.0, 0.0);
        this->axis.setVector(0.0, 0.0, 0.0);
        this->radius.setRadius(0.0);
    }

}

/*!
 * \brief Cylinder::toOpenIndyXML
 * \param xmlDoc
 * \return
 */
QDomElement Cylinder::toOpenIndyXML(QDomDocument &xmlDoc) const{

    QDomElement cylinder = Geometry::toOpenIndyXML(xmlDoc);

    if(cylinder.isNull()){
        return cylinder;
    }

    cylinder.setAttribute("type", getGeometryTypeName(eCylinderGeometry));

    return cylinder;

}

/*!
 * \brief Cylinder::fromOpenIndyXML
 * \param xmlElem
 * \return
 */
bool Cylinder::fromOpenIndyXML(QDomElement &xmlElem){

    bool result = Geometry::fromOpenIndyXML(xmlElem);

    if(result){

        //set cylinder attributes
        QDomElement radius = xmlElem.firstChildElement("radius");
        QDomElement axis = xmlElem.firstChildElement("spatialDirection");
        QDomElement axisPoint = xmlElem.firstChildElement("coordinates");

        if(radius.isNull() || axis.isNull() || axisPoint.isNull() || !radius.hasAttribute("value")
                || !axis.hasAttribute("i") || !axis.hasAttribute("j") || !axis.hasAttribute("k")
                || !axisPoint.hasAttribute("x") || !axisPoint.hasAttribute("y") || !axisPoint.hasAttribute("z")){
            return false;
        }

        this->radius.setRadius(radius.attribute("value").toDouble());
        this->axis.setVector(axis.attribute("i").toDouble(),
                             axis.attribute("j").toDouble(),
                             axis.attribute("k").toDouble());
        this->axisPoint.setVector(axisPoint.attribute("x").toDouble(),
                                  axisPoint.attribute("y").toDouble(),
                                  axisPoint.attribute("z").toDouble());

    }

    return result;

}

/*!
 * \brief Cylinder::getDisplayX
 * \param type
 * \param digits
 * \param showDiff
 * \return
 */
QString Cylinder::getDisplayX(const UnitType &type, const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(convertFromDefault(this->axisPoint.getVector().getAt(0), type), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Cylinder::getDisplayY
 * \param type
 * \param digits
 * \param showDiff
 * \return
 */
QString Cylinder::getDisplayY(const UnitType &type, const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(convertFromDefault(this->axisPoint.getVector().getAt(1), type), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Cylinder::getDisplayZ
 * \param type
 * \param digits
 * \param showDiff
 * \return
 */
QString Cylinder::getDisplayZ(const UnitType &type, const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(convertFromDefault(this->axisPoint.getVector().getAt(2), type), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Cylinder::getDisplayPrimaryI
 * \param digits
 * \param showDiff
 * \return
 */
QString Cylinder::getDisplayPrimaryI(const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(this->axis.getVector().getAt(0), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Cylinder::getDisplayPrimaryJ
 * \param digits
 * \param showDiff
 * \return
 */
QString Cylinder::getDisplayPrimaryJ(const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(this->axis.getVector().getAt(1), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Cylinder::getDisplayPrimaryK
 * \param digits
 * \param showDiff
 * \return
 */
QString Cylinder::getDisplayPrimaryK(const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(this->axis.getVector().getAt(2), 'f', digits);
    }
    return QString("");
}

/*!
 * \brief Cylinder::getDisplayRadiusA
 * \param type
 * \param digits
 * \param showDiff
 * \return
 */
QString Cylinder::getDisplayRadiusA(const UnitType &type, const int &digits, const bool &showDiff) const{
    if(this->isSolved){
        return QString::number(convertFromDefault(this->radius.getRadius(), type), 'f', digits);
    }
    return QString("");
}
