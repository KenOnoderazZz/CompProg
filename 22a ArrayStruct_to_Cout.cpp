#include <cstring>
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw
 
using namespace std;

       struct Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;
       };

int main()
{
              int i;
              Employee Emp[ 3 ];         //Statement   1

              for(i=0;i<3;i++)
              {

              cout << "\nEnter details of " << i+1 << " Employee : \n";

                    cout << "\tEnter Employee Id : ";
                    cin >> Emp[i].Id;

                    cout << "\tEnter Employee Name : ";
                    cin >> Emp[i].Name;

                    cout << "\tEnter Employee Age : ";
                    cin >> Emp[i].Age;

                    cout << "\tEnter Employee Salary : ";
                    cin >> Emp[i].Salary;
              }

              cout << "\nDetails of Employees\n";
              cout << "ID    Name     Age    Salary\n";
              cout <<"------------------------------------\n";
              for(i=0;i<3;i++)
              cout << "\n"<< Emp[i].Id <<"\t"<< Emp[i].Name <<"\t"
                       << Emp[i].Age <<"\t"<< Emp[i].Salary;


}
