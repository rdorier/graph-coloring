#include <iostream>

#include "parser.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Lecture du fichier :" << endl;
    parser("exemple.txt");
    
    return 0;
}
