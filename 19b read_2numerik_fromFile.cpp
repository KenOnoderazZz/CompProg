#include <fstream>
#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
 
int main () {
    //string stringline, Dt_stringline[100];
    char filenameIN[20],filenameOUT[20];
    int data1, data2, Dt_list[100][2],N,i=0;
    int eof();
    
    // input filename to be opened
    cout << " Enter input data filename to be opened ";
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
           cout << " Enter output data filename to be written ";
	       cin >> filenameOUT;
	}
	
    cout << endl << ">= Open and read file " << endl << "\n";
    //if the file exist then
    if (infile.is_open())
    {
        //reapeating reading string data from file
        while ( !infile.eof())
        {
            infile >> data1 >> data2;
			//print data to the screen and save it in an Array Dt_stringline
            cout << data1 <<"  "<< data2 << '\n';
            Dt_list[i][1]=data1;
            Dt_list[i][2]=data2;
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
        outfile << "original data ("<<Dt_list[i][1]<<" and "<<Dt_list[i][2]<<") after been added, it becomes = " << Dt_list[i][1]+Dt_list[i][2] <<"\n";
        i++;
    }
    //finish to write all data from an Array and close the file
    cout<<endl<<endl<<"Please see your SUM data in your "<<"'"<<filenameOUT<<"'";
    outfile.close();
    getch();
    return 0;
}
