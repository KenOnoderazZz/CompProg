#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 50;

struct Records {
    string firstname;
    string secondname;
    float test1mark;
    float midtestmark;
    float annualmark;
};

int main() {
    ifstream in("Data.txt");
    
    if (!in) {
        cerr << "File can't be opened!" << endl;
        system("PAUSE");
        exit(1);
    }

    int i = 0;
    struct Records record[SIZE];

    // Read data into the array
    while (i < SIZE && in >> record[i].firstname >> record[i].secondname
                         >> record[i].test1mark >> record[i].midtestmark >> record[i].annualmark) {
        i++;
    }

    // Display the data
    for (int j = 0; j < i; j++) {
        cout << record[j].firstname << "  ";
        cout << record[j].secondname << " ";
        cout << record[j].test1mark << "  ";
        cout << record[j].midtestmark << "  ";
        cout << record[j].annualmark << "   \n";
    }

    return 0;
}

