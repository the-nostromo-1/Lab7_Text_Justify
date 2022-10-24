//
// David Jacob Tinley
// 10/21/22.
//

#include "functions.h"

void add_space_after_punctuation(string &input, const string &punctuation) {
    int pos = input.find_first_of(punctuation);
    int npos = static_cast<int>(string::npos);
    while (input.size() < line_limit && pos != npos) {
        if (input.size() >= line_limit - 1 || pos >= input.size() - 1) { // prevents function from adding space if at end of line
            break;
        }
        input.insert(pos + 1, 2, ' '); // insert 2 spaces after a punctuation mark
        pos = input.find_first_of(punctuation, pos + 1);
    }
}

void random_line_space(string &input_2) {
    srand(time(nullptr));
    int pos = input_2.find_first_of(' ');
    while (input_2.size() < line_limit) {
        if (pos <= -1) { // prevents function from trying to go out of string range
            break;
        }
        input_2.insert(pos, 1, ' ');
        pos = input_2.find(' ', rand() % pos + 1);
    }
}
