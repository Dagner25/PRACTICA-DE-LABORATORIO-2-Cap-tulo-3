#include <iostream>
#include <string>
int main(){ 
    
class Account{
public:
Account (std::string accountName, int initialBalance)
: name{accountName}{
    if (initialBalance > 0){
        balance=initialBalance;
    }
}
void deposit(int depositAmount){
    if (depositAmount>0) {
        balance = balance + depositAmount;
    }
}
int getBalance() const{
        return balance;
}

void setName(std::string accountName){
    name=accountName;
}
std::string getName() const {
    return name;
}
private:
std::string name;
int balance{0};

withdraw:
void  extraer(st::string balance, int sacar  ){
    cout <<"Ingrese la cantidad a extraer"<< endl;
    cin >> sacar;
    if (sacar > 0 ){
        balance = balance - sacar;
    }
}


};
};