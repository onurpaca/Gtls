#ifndef GTLS_LINE_H
#define GTLS_LINE_H

#include "geo_base.h"
#include <cstddef>
#include <array>
#include <ostream>
#include <algorithm>

namespace Gtls::geo {

    class [[maybe_unused]] Line : Geo_Entity {
    public:
        Line();
        Line(std::size_t p0, std::size_t p1);

        [[maybe_unused]] void set_p0(std::size_t p0_id);
        [[maybe_unused]] void set_p1(std::size_t p1_id);

        [[maybe_unused]] void change_orientation() {
            std::swap(p0_, p1_);
        }

        ~Line() override = default;

    protected:
        std::size_t p0_{0}, p1_{0};
    };


/*
 *
 *  template <>
    class [[maybe_unused]] Geo_Entity_Traits<Curve> {
        [[maybe_unused]] static constexpr bool is_specialized = true;
*   };
*
*/

}

#endif