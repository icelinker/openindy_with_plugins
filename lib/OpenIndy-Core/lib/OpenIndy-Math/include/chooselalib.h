#ifndef CHOOSELALIB_H
#define CHOOSELALIB_H

#include "global.h"
#include "oivec.h"
#include "oimat.h"

namespace oi{
namespace math{

/*!
 * \brief The ChooseLALib class
 */
class OI_MATH_EXPORT ChooseLALib
{
public:

    enum LinearAlgebraLibrary{
        Armadillo
    };

    static void setLinearAlgebra(LinearAlgebraLibrary lib);

};

}
}

#endif // CHOOSELALIB_H
