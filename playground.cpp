module;

#include <iostream>

export module playground;

auto hidden() -> int
{
    return 42;
}

export auto foo() -> void
{
    std::cout << "Hello from foo!: " << hidden();
}
