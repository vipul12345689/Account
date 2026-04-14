#include "account.h"

void account::deposit(double bal){
    balance+=bal;
}

void account::withdrow(double bal){
    balance-=bal;
}

account::account(string name,string an,double bal){
    name=name;
    acc_num=an;
    balance=bal;
}

void account::display() const{
    cout<<"balance-> "<<balance<<endl;
}

savingAcc::savingAcc(string name,string an,double bal,double rate){
    name=name;
    acc_num=an;
    balance=bal;
    intrest_rate=rate;
}

void savingAcc::monthlyUpdate() {
    balance+=((balance*intrest_rate)/100);
}

void savingAcc::withdrow(double ammount){
    if(balance<ammount){
        cout<<"--insufficient balance--\n";
        return;
    }
    balance-=ammount;
    cout<<"--successfully withrowled--\n";
}

current::current(string name,string an,double bal,double minBal,double penulty){
    name=name;
    acc_num=an;
    balance=bal;
    minBal=minBal;
    penulty=penulty;
}

void current::monthlyUpdate() {
    if(balance<minBal){
        balance-=penulty;
    }
}

void current::withdrow(double ammount){
    if(balance<ammount){
        cout<<"--insufficient balance--\n";
        return;
    }
    balance-=ammount;
    cout<<"--successfully withrowled--\n";
}