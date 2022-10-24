//
// David Jacob Tinley
// 10/21/22.
//

#ifndef LAB7_TEXT_JUSTIFY_FUNCTIONS_H
#define LAB7_TEXT_JUSTIFY_FUNCTIONS_H

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

const short line_limit {80};

void add_space_after_punctuation(string &input, const string &punctuation);
void random_line_space(string &input_2);

#endif //LAB7_TEXT_JUSTIFY_FUNCTIONS_H
