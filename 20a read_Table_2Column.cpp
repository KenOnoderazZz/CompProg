#include <fstream>
#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
 
int main () {
    //string stringline, Dt_stringline[100];
    char filenameIN[20],filenameOUT[20];
    int data2, Dt_list2[100],N,i=0;
    string data1[5], Dt_list1[100];
    int eof();
    
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
           cout << " Enter filename to be opened ";
	       cin >> filenameOUT;
	}
	
    cout << endl << ">= Open and read file " << endl << "\n";
    //if the file exist then
    if (infile.is_open())
    {
        //reapeating reading string data from file
        while ( !infile.eof())
        {
            infile >> data1 ;//>> data2;
			//print data to the screen and save it in an Array Dt_stringline
            cout << data1 << data2 << '\n';
            Dt_list1[i]=data1;
            Dt_list2[i]=data2;
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
 
	// loop writing all data string fro an Array to file
	i=0;
    while(i<N-1){
        //outfile << string line << i <<" = " <<Dt_stringline[i] <<'\n';
        outfile << "original data after been added, it becomes = " << Dt_list1[i] << Dt_list2[i] <<"\n";
        i++;
    }
    //finish to write all data from an Array and close the file
    outfile.close();
    getch();
    return 0;
}
