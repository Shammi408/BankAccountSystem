#include <iostream>
using namespace std;

class BankAccount {
    private:
        int account;
        float balance;
    public:
        static int accountCount;
        BankAccount(){
           accountCount++; 
           balance=0;
           cout<<"New Account Created"<<endl;
        }
        BankAccount(float x){
           accountCount++; 
           balance=x;
           cout<<"New Account Created"<<endl;
        }
        void deposit(float x){
            balance += x;
            cout<<"Balance Updated"<<endl;
        }
        void withdraw(float x){
            if(balance<x){
                cout<<"Not Enough Money"<<endl;
                return;
            }
            balance -= x;
            cout<<"Balance Updated"<<endl;
        }
        void checkBal() const{
            cout<<"Amount left: "<<balance<<endl;;
        }
        ~BankAccount(){
           cout<<"Account Closed"<<endl;
        }
};
int BankAccount::accountCount=0;

int main()
{
    BankAccount obj;
    obj.checkBal();
    obj.deposit(400);
    obj.checkBal();
    obj.withdraw(200.5);
    obj.checkBal();
    obj.withdraw(200);
    obj.checkBal();
    
    BankAccount obj2(100);
    obj2.checkBal();
    obj2.deposit(400);
    obj2.checkBal();
    obj2.withdraw(200.5);
    obj2.checkBal();
    obj2.withdraw(200);
    obj2.checkBal();

    cout<<"Total Accounts: "<<BankAccount::accountCount<<endl;
    return 0;
}
