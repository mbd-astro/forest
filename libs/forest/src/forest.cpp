#include <forest/details/platform.hpp>

#include <boost/math/special_functions/sign.hpp>

/// @brief Return the sign of the input
int Sign(double x_val)
{
    return boost::math::sign(x_val);
}
