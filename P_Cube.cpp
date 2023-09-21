#include <iostream>
using namespace std;
 
class Bank {
    string name,surname, address;       //string for account holders name and address
    float balance;
    long long contact_number;
 
public:
    void open_account();                 //four functions are created to for different purposes
    void deposit_money();
    void withdraw_money();
    void display_account();
    void bank_offers();
};
 
// Function to open the account
void Bank::open_account()               //using scope resolution operator
{
    cout <<"\n\nEnter first name of account holder : "<<endl;
    cin>>name;
    cout <<"\nEnter last name of account holder : "<<endl;
    cin>>surname;
    
    cout <<"\nEnter address of account holder : "<<endl;
    cin>>address;
    
    cout <<"\nEnter mobile number of account holder : "<<endl;
    cin>>contact_number;
    
    cout << "\nEnter the initial deposit to open account (minimum 500 rs): "<<endl;
    cin>>balance;
    cout << "\n\n\t\t\t\t\t\tAccount Created Successfully :) ";
}
 
// Function to deposit the account
void Bank::deposit_money()
{
    int Amount;
    
    cout << "\nEnter the amount of deposit : ";
    cin>>Amount;
    balance= balance+Amount;
    cout << "\nAvailable Balance: "<<balance;
}
 // Function to withdraw the account
void Bank::withdraw_money()
{
    float amount;
    cout << "\nEnter the amount of withdrawl: ";
    cin>>amount;
    
    balance=balance-amount;
    
    cout << "\nAvailable balance: "<< balance;
}
 
// Function to display the account
void Bank::display_account()
{
    cout<<"\nDisplaying Account details : ";
    cout << "\nName : " << name <<" "<<surname<< endl;
    cout << "\nAddress : " << address << endl;
    cout << "\nContact Number : " <<contact_number <<endl;
    cout << "\nBalance : " << balance << endl;
}
void Bank::bank_offers()
{
    cout<<"\n1]   PREFERENTIAL PRICING:upto 50% off on \nprocessing fees for loans for banking customers....."<<endl;
    cout<<"\n2]   CARD PRIVILES:such as accelerated reward points,\nmultiple payment channels,fuel surcharge waivers and more....."<<endl;
}
 

// main program
int main()
{
    int choice;
    Bank customer;          // Creating Customer Object of Bank Class
    cout<<"---------------------------------------------WELCOME TO BANKING APPLICATION------------------------------------------\n";
    menu:
        cout<<"\n\n\t\t\t\t\t\t1]   Create Account\n\n\t\t\t\t\t\t2]   Deposit Ammount\n\n\t\t\t\t\t\t3]   Withdrawal Ammount\n\n\t\t\t\t\t\t4]   Display Account Details\n\n\t\t\t\t\t\t5]   Bank Offers\n\n\t\t\t\t\t\tPlease select option to continue : ";
        cin>>choice;
    switch(choice)
    {
        case 1:
        customer.open_account(); 
        // Calling open_account() function through customer object.
        cout << "\n--------------------------------------------------------------------------------------------------------------\n";
        break;
         
        case 2:
        customer.deposit_money();  
        // Calling deposit_money() function through customer object.
        cout << "\n-------------------------------------------------------------------------------------------------------\n";
        break;
        
        case 3: 
        customer.withdraw_money();
        // Calling withdraw_money() function through customer object.
        cout << "\n------------------------------------------------------------------------------------------------------------\n";
        break;
        
        case 4 :
        customer.display_account();    
        // Calling display_account() function through customer object.
        cout << "\n---------------------------------------------------------------------------------------------------------\n";
        break;
        
        case 5 :
        customer.bank_offers();    
        // Calling display_account() function through customer object.
        cout << "\n-------------------------------------------------------------------------------------------------------\n";
        break;
        
        default:
        cout<<"\nINVALID OPTION";
        cout << "\n-----------------------------------------------------------------------------------------------------------------\n";
    }
    goto menu;
}