#include <iostream>
#include <fstream>
#include <iostream>
#include <optional>
#include <sstream>
#include <vector>

#include "tokenizer.hpp"


using namespace std;
int main(int argc , char* argv[]) {
    cout<<argc<<endl;
    std::cout << "Hello, World!" << std::endl;

    string contents;
    {
        std::stringstream contents_stream;
        std::fstream input(argv[1], std::ios::in);
        contents_stream << input.rdbuf();
        contents = contents_stream.str();
    }

    cout << "File contents: " << contents << std::endl;


    return 0;
}