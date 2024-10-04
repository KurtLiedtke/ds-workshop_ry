#include <string>
#include <iostream>
#include <list>

int main(int argc, char* argv[]) {
    std::list<std::string> list;
    for (int i = 1; i < argc; i++) {
        list.push_back(argv[i]);
    }

    for (std::list<std::string>::iterator itr = list.begin(); itr != list.end(); itr++) {
        std::cout << *itr << '\n'<<"what is upp";
    }

    return 0;
}
