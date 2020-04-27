#ifndef GTLS_POINT_H
#define GTLS_POINT_H


#include "geo_base.h"

namespace Gtls::geo {

    class Point : Geo_Entity {
    public:
        Point(double x, double y, double z)
        : x_(x), y_(y), z_(z)
        {};


        double x_{0.0}, y_{0.0}, z_{0.0};
    };

}


#endif