#include <iostream>
#include <fstream>
#include <sstream>
#include "lexer.h"

enum class TokenType {
    _return,
    int_lit,
    semi_colon
};

struct Token {
    TokenType type;
    std::optional<std::string> value;
};

std::vector<Token> tokenize(const std::string &str){

}


int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "alang compile error : provide an input file .." << std::endl;
        std::cerr << "alang  <input.al> " << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream input(argv[1]);
    std::stringstream buff;
    buff << input.rdbuf();
    std::string buffer = buff.str();
    std::string token_buffer;

    tokenize(buffer);


    return EXIT_SUCCESS;
}
