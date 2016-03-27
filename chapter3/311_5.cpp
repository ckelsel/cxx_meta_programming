/* Copyright 2016 kunming.xie
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <boost/mpl/vector_c.hpp>

typedef boost::mpl::vector_c<int, 1, 0, 0, 0, 0, 0, 0> mass;
typedef boost::mpl::vector_c<int, 0, 1, 0, 0, 0, 0, 0> length;

template <class T, class Dimensions>
class quantity
{
public:
    explicit quantity(T x)
        : m_value (x)
    {}

    T value() const { return m_value; }

private:
    T m_value;
};

void test()
{
    quantity<float, mass> m(2.0);
}
