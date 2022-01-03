export module Foo;

import <iostream>;
import Bar;

export void foo()
{
    std::cout << "I'm foo." << std::endl;
}

export void foo_bar()
{
    foo();
    bar();
}
