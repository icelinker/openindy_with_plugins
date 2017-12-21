#ifndef OIVEC_H
#define OIVEC_H

#include <QDebug>
#include <QtCore/QtMath>
#include <vector>
#include <stdexcept>

#include "global.h"

namespace oi{
namespace math{

class LinearAlgebra;
class OiMat;

using namespace std;

/*!
 * \brief The OiVec class
 */
class OI_MATH_EXPORT OiVec
{
public:
    OiVec();
    OiVec(const int &size);
    ~OiVec();

    static LinearAlgebra *myLinearAlgebra;

private:
    vector<double> values;

public:
    double getAt(int pos) const;
    int getSize() const;

    void set(vector<double> v);
    void setAt(const int &pos, const double &value);

    void add(const double &value);
    void removeLast();

    void replace(const OiVec&);

    OiVec& operator=(const OiVec&);
    OiVec operator+(const OiVec&) const;
    OiVec operator-(const OiVec&) const;
    OiVec& operator+=(const OiVec&);
    OiVec& operator-=(const OiVec&);
    friend OiVec operator*(const OiVec &v, const double value){
        return OiVec::mult(value, v);
    }
    friend OiVec operator*(const double value, const OiVec &v){
        return OiVec::mult(value, v);
    }
    friend OiVec operator/(const OiVec &v, const double value){
        return OiVec::mult((1.0 / value), v);
    }

    void normalize();

    OiMat t() const;

    static void cross(OiVec &result, const OiVec &a, const OiVec &b);
    static void dot(double &result, const OiVec &a, const OiVec &b);

    static void concatenateRotations(OiVec &q, const OiVec &q1, const OiVec &q2);

private:
    static OiVec mult(const double &value, const OiVec &v);

};

}
}

#endif // OIVEC_H
