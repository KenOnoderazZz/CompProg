#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream iFile("numerik.txt");    // input.txt has integers, one per line

    while (!iFile.eof())
    {
        int x;
        iFile >> x;
        cerr << x << endl;
    }

    return 0;
}
