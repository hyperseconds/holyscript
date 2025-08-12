#include <iostream>
#include <fstream>
#include <iostream>
#include <optional>
#include <sstream>
#include <vector>
class Tokenizer {

    public:
        Tokenizer() = default;
        ~Tokenizer() = default;

        // Function to tokenize a string based on whitespace
        std::vector<std::string> tokenize(const std::string& input) {
            std::vector<std::string> tokens;
            std::istringstream stream(input);
            std::string token;

            while (stream >> token) {
                tokens.push_back(token);
            }

            return tokens;
        };

}