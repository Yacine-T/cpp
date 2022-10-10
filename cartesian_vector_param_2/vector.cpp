#include "vector.hh"
// constructors

Vector::Vector()
{}

Vector::Vector(std::initializer_list<value> l) {
    for (int i = 0; i < l.size(); ++i) {
        m_data[i] = l.begin()[i];
    }
}
