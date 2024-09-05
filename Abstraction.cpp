#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
        string accNumber;
        double balance;
    
    public:
    BankAccount(string accNumber, double initialBalance){
        this->accNumber = accNumber;
        this->balance = initialBalance;
    }

    void deposit(double amount){
        this->balance += amount;
    }

    bool withdraw(double amount){
        if(balance < amount){
            return false;
        }
        this->balance -= amount;
        return true;
    }

    double getBalance() const {
        return balance;
    }

    void displayAccInfo(){
        cout<<"BALANCE "<<this->balance<<endl;
        cout<<"ACC NO. "<<this->accNumber<<endl;
    }

};

int main(){
    BankAccount amrit("12345",1000);

    amrit.displayAccInfo();
    amrit.deposit(500);
    amrit.displayAccInfo();
    amrit.withdraw(1000);
    amrit.displayAccInfo();
}