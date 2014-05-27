#include <iostream>

#include "parser.hpp"

using namespace std;

int** parser(string filepath)
{
    int** matrix;
    file_iterator<char> fileStart(filepath);
    file_iterator<char> fileEnd;
    parse_info<file_iterator<char>> pInfo;

    if (!fileStart)
    {
        cout << "Impossible d'ouvrir " << filepath << " !" << endl;
        return 0;
    }

    fileEnd = fileStart.make_end();
    pInfo = parse(fileStart, fileEnd, *(real_p >> *space_p));

    return matrix;
}
