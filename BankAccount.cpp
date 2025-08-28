#include <iostream>
using namespace std;
class bankAccount{
    private: 
        string accountholder_name;
        double balance;
    public:
        bankAccount(string accountholder_name,double balance){
            this->accountholder_name=accountholder_name;
            this->balance=balance;
        }   
        void deposit(double amount){
            
            if(amount<0){
                cout<<"You don't have enough money for deposition"<<endl;
            }else{
                balance+=amount;
                cout<<"Your new balance is: "<<balance<<endl;
            
            }
        }
        void withdraw(double amount){

            if(balance<amount){
                cout<<"You don't have enough money for withdrawal"<<endl;
            }else{

                balance-=amount;
                cout<<"Your new balance is: "<<balance<<endl;
            }
        }
        void displayBalance(){
            cout<<"Your account name is : "<<accountholder_name<<endl;
            cout<<"Your current balance is:"<<balance<<"$"<<endl;
                      
        }

};
int main() {
    bankAccount user1=bankAccount("John Doe",1000.0);
    user1.displayBalance();
    user1.deposit(500.0);
    user1.withdraw(1600.0);
    user1.displayBalance();





    return 0;
}
