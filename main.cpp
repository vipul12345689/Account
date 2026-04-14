#include "account.h"

int main(){
    account* acc=new savingAcc("123","sandeep",20000,10);
    acc->deposit(10000);
    cout<<"10,000 deposited\n";
    acc->display();
    acc->withdrow(15000);
    acc->withdrow(30000);

    cout<<"--current account--\n";
    account* acc2=new current("123","sandeep",20000,20000,1000);
    acc->deposit(10000);
    cout<<"10,000 deposited\n";
    acc->display();
    acc->withdrow(15000);
    acc->withdrow(30000);
    acc->display();
}