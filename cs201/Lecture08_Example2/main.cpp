#include <iostream>
/*This program gets salary input from user and calculates and displays the net payable 
 * amount after deduction according the conditions*/
using namespace std;
int main(int argc, char **argv)
{
    int salary;
    float deduction, netPayable;
    
    cout<<"Please enter the salary: ";
    cin>>salary;
    
    // here begins the switch statement
    switch(salary / 1000){
        case 0:          // this means the salary is less than 10,000
        deduction = 0;   // as deduction is zero in this case
        netPayable = salary;
        cout<<"Net Payable(salary-deduction) = ";
        cout<< salary << " - " << deduction << " = " << netPayable;
        break;           // necessary to exit switch
        
        case 1:          // this means salary is in the range of 10,000 - 19,000
        deduction = 1000;
        netPayable = salary - deduction;
        cout<<"Net Payable(salary-deduction) = ";
        cout<< salary << " - " << deduction << " = " << netPayable;
        break;           // necessary to exit switch
        
        default:         // this mens salary is 20, 000 or more
        deduction = salary * 7/100;
        netPayable = salary - deduction;
        cout<<"Net Payable(salary-deduction) = ";
        cout<< salary << " - " << deduction << " = " << netPayable;
    }
}
