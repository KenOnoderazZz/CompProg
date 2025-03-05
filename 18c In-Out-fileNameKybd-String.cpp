#include <fstream>
#include <iostream>
#include<conio.h>
using namespace std;
 
int main () {
    string stringline, Dt_stringline[100];
    char filenameIN[20],filenameOUT[20];
    int N,i=0;
    
    // input filename to be opened
    cout << " Enter filename to be opened ";
	cin >> filenameIN;
	//Open a file in read mode
    ifstream infile;
    //specified a file name to be open
    infile.open(filenameIN);
	if (!infile.is_open()){
    	cout << "\n\n\n File " << filenameIN <<" does not exist" <<endl;
		cout <<"Unable to be opened.\n\n\n\n";
		return(0);
	} else {
	       // input filename to be opened
           //cout << " Enter filename to be opened ";
	       //cin >> filenameOUT;
	       cout << " your file is ready to be opened " <<endl;
	       getch();
	}
	
    cout << endl << "This is your file " << endl << "\n";
    //if the file exist then
    if (infile.is_open())
    {
        //reapeating reading string data from file
        while ( getline (infile,stringline) )
        {
            //print data to the screen and save it in an Array Dt_stringline
            cout << stringline << '\n';
            Dt_stringline[i]=stringline;
            i++;
        }
        //close the file after all of line data have been read
        infile.close();
    }
    //fi the file does not exist then show this comment
    else {
    	cout << "File " << filenameIN <<" does not exist" <<endl;
		cout <<"Unable to be opened.";
	}
    N=i;
    
    //================================================================================
    //writing data array to a file
	//================================================================================  
    // Open a file in a write mode.
    ofstream outfile;
    // specified name of file to be written
    outfile.open(filenameOUT);
 
	// loop writing all data string from an Array to file
	i=0;
    while(i<N){
        //outfile << string line << i <<" = " <<Dt_stringline[i] <<'\n';
        outfile << Dt_stringline[i] <<'\n'; 
        i++;
    }
    //finish to write all data from an Array and close the file
    outfile.close();
    getch();
    return 0;
}
