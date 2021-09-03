#include "Karen.hpp"

int main() {
    Karen* karen = new Karen();
    karen->complain("debug");
    karen->complain("info");
    karen->complain("warning");
    karen->complain("error");
    delete karen;
    return 0;
}
