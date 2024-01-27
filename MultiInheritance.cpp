# include<bits/stdc++.h>
using namespace std;
class college{
    protected:
    char name[20];
    char city[20];
    public:
    void get(){
        cout<<"enter the college name and city: "<<"\n";
        cin>>name>>city;
    }
    void display(){
        cout<<"college name :"<<name<<"\t"<<"city name :"<<city<<"\n";
    }
};

class dept:public college{
    protected:
    char dname[20];
    public:
    void get(){
        college::get();
        cout<<"enter the Dept name: "<<"\n";
        cin>>dname;
    }
    void display(){
        college::display();
        cout<<"Department name is :"<<dname<<"\n";
    }
};

class teacher:public dept{
    private:
    char tname[20];
    char qualification[10];
    public:
    void get(){
        dept::get();
        cout<<"Enter the tname and qualification: "<<"\n";
        cin>>tname>>qualification;
    }
    void display(){
        college::display();
        cout<<"Teacher name is :"<<tname<<"\t"<<"Qualification is :"<<qualification<<endl;
    }
};

int main(){
    teacher t;
    t.get();
    t.display();
}





























