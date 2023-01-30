//
// Created by solteszistvan on 2023.01.18..
//

#ifndef CPPLANGUAGE_SOURCE_INCLUSION_H
#define CPPLANGUAGE_SOURCE_INCLUSION_H
#  include <utility>

template<class V>
class optional_t
{
    V v_{}; bool has_{false};
public:
    optional_t() = default;
    optional_t(V&& v) : v_(v), has_{true} {}
    V value_or(V&& alt) const& { return has_ ? v_ : alt;
    }
};

void inclusion();

#endif //CPPLANGUAGE_SOURCE_INCLUSION_H
