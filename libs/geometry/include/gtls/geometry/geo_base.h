#ifndef GTLS_GEO_ENTITY_BASE_H
#define GTLS_GEO_ENTITY_BASE_H

#include <string_view>
#include <ostream>

namespace Gtls::geo {

    struct Geo_Entity {
        virtual std::ostream &operator<<(std::ostream &os) = 0;
        virtual ~Geo_Entity() = default;
    };


    struct Curve_Entity : Geo_Entity {
        ~Curve_Entity() override = default;
    };

    //template <typename Geo_Entity>
    //struct [[maybe_unused]] Geo_Entity_Traits {
        //[[maybe_unused]] static constexpr bool is_specialized = false;
    //};

}


#endif