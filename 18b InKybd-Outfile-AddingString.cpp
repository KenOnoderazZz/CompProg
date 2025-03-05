#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
 
int main () {
    string stringline;
 
    // Open a file in writing mode.
    ofstream ofile;
    // create/open a file to be written
    ofile.open("addins.txt");
 
    cout << ">= please type, \'f\' to exit" << endl;
 
    //unlimited loop during writing data to file
    while(true){
        cout << "- ";
        //catch each character to be written in the file
        getline(cin, stringline);
        //loop entry line data will end when the character q is typed
        if(stringline == "f") break;
        // write the typed dat line to file
        ofile << stringline << endl;
    }
    //finish entry data and finish writing to file, the file will be closed 
    
 
    //Open the existing file to be read
    ifstream infile;
    //open the specified existing file
    infile.open("addins.txt");
 
    cout << endl << ">= Open and read a file " << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        //repeat read each line
        while ( getline (infile,stringline) )
        {
            // print the data here
            cout << stringline << '\n';
        }
        
        cout<<endl<<endl<<"Please type your added data here, to end it, type 'f' "<<endl;
        //Adding data, unlimited loop during writing data to file
		while(true){
           cout << "- ";
           //catch each character to be written in the file
           getline(cin, stringline);
           //loop entry line data will end when the character q is typed
           if(stringline == "f") break;
           // write the typed dat line to file
           ofile << stringline << endl;
        }
        
        //go to the first line of data in file
        infile.clear();
        infile.seekg(0);
		//repeat read data each line
		cout<<endl<<endl<<"This is all of your data "<<endl;
        while ( getline (infile,stringline) )
        {
            // print the data here
            cout << stringline << '\n';
        }
        //unlimited loop during writing data to file
        //close file after finished for reading
        infile.close();
    }
    //if there is no file to be read, then it will print this comment
    else cout << "Unable to open file";
    getch();
    //finish entry data and finish writing to file, the file will be closed 
    ofile.close();
    return 0;
}
