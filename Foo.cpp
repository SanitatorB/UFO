#include "Foo.h"

#include<iostream>
using std::cin;
using std::cout;

Foo::Foo(){};

Foo::get_input()
{
    int a, b; cin >> a >> b;
    first_ = a, second_ = b;
}

Foo::show_data()
{
    cout << first_ << ' ' << second_;
}
