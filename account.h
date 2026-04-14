#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class account{
    protected:
        string name;
        string acc_num;
        double balance;
    public:
        account(){
            balance=0;
        };
        account(string name,string an,double bal);

        virtual void deposit(double bal);
        virtual void withdrow(double bal);
        virtual void monthlyUpdate()=0;
        void display() const;
};

class savingAcc: public account {
    private:
        double intrest_rate;
    public:
        savingAcc(string name,string an,double bal,double rate);

        void monthlyUpdate() override;
        void withdrow(double bal) override;
};

class current: public account{
    private:
        double minBal;
        double penulty;
    public:
        current(string name,string an,double bal,double minBal,double penulty);
        void monthlyUpdate() override;
        void withdrow(double ammount) override;
};

#endif