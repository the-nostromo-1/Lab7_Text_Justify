//
// David Jacob Tinley
// 10/21/22.
//

#include "functions.h"

int main() {
    ifstream my_file;
    ofstream new_file;

    string filename = "unjustified.txt";
    my_file.open(filename);
    if (my_file.fail()) {
        cout << "Input file failed to open" << endl;
        exit(1);
    }

    string output_file_name = "justified.txt";
    new_file.open(output_file_name);
    if (new_file.fail()) {
        cout << "Output file failed to open" << endl;
        exit(1);
    }


    string line;
    while(getline(my_file,line)) {
        string punctuation_marks {".,!?:"}; // punctuation marks to be checked for
        add_space_after_punctuation(line, punctuation_marks);
        random_line_space(line);
        new_file << line;
        new_file << "\n";
    }

    my_file.close(); // closing old file
    new_file.close(); // closing new file
    return 0;
}
