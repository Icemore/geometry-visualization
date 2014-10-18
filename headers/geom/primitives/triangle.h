#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <stdexcept>
#include <boost/lexical_cast.hpp>

#include "geom/primitives/point.h"

namespace geom {
namespace structures{

    struct triangle_type
    {
        point_type pts[3];

        triangle_type(point_type const & a, point_type const & b, point_type const & c)
        {
            pts[0] = a;
            pts[1] = b;
            pts[2] = c;
        }

        point_type const & operator[] (size_t i) const 
        {
            if(i >= 3)
            {
                throw std::logic_error("invalid index: " + boost::lexical_cast<std::string>(i));
            }

            return pts[i];
        }

        point_type & operator[] (size_t i)
        {
            if(i >= 3)
            {
                throw std::logic_error("invalid index: " + boost::lexical_cast<std::string>(i));
            }

            return pts[i];
        }
    };

}
}


#endif // _TRIANGLE_H_
