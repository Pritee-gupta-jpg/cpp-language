# include<bits/stdc++.h>
using namespace std;
class Account{
    private:
    int accno;
    char name[20];
    float balance;
    static float credit;
    static float debit;
    public:
    void get();
    void display();
    // void credit(Account&)
    // void debit(Account&);
   static void Creditbalance(float credit);

};
float Account::credit;
float Account::debit;

void Account::get(){
    cin>>accno>>name>>balance;
}
void Account::display(){
    balance=balance+credit;
    cout<<" Account no.: "<<accno<<endl;
    cout<<"Account holder : "<<name<<endl;
    cout<<"Bank balance :"<<balance<<endl;
}
// void Account::credit(Account & a){
//     balance+=a.balance;
//     cout<<"balance added .Now the total balance is :"<<balance<<endl;
// }
// void Account::debit(Account & a){
//     balance-=a.balance;
//     cout<<"Amount deduced.Now the total balance is :"<<balance<<endl;
// }
void Account::Creditbalance(float p){
    credit=p;
}

int main(){
    Account s;
    cout<<"enter account number,name and balance"<<endl;
    s.get();
    cout<<"the account number ,name and balance is :"<<endl;
    s.display();
    float p;
    cout<<"Enter the credit you want to deposit to your account :"<<endl;
    cin>>p;
    Creditbalance(p);
    s.display();
    // cout<<"enter the amount you want to withdraw from your account: "<<endl;
    // s.debit(s1);
}
























