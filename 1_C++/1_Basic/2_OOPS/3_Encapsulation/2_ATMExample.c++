//Real-life Example: ATM machine.

// Private data(hidden) :- Account balance, PIN number.

// Public function :-  
//                    1.Deposite(amount) -> paise dalna
//                    2.Withdrow(amount) -> paise nikalna
//                    3.CheckBlance() -> balance dekhna


#include<iostream>
using namespace std;

class ATM{
    private:
        int balance;  //hidden
        int pin;

    public:
          void setAccount(int b, int p){
            balance = b;
            pin = p;
          }  

    void deposit(int amount){
        balance += amount;
        cout<< "Deposited: "<<amount<<endl;
    }


    void withdraw(int amount){
        if(amount <= balance){
            balance -= amount;
            cout<< "Withdrawn :" << amount<<endl;
        }else{
            cout<< "Insufficient balance!"<<endl;
        }
    }
    void checkBalance(){
        cout<<"Balance:"<<balance<< endl;
    }
};

int main(){
    ATM myATM;
    myATM.setAccount(5000, 1234);
    myATM.deposit(2000);
    myATM.withdraw(1000);
    myATM.checkBalance();
    
return 0;
}