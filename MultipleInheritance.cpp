# include<bits/stdc++.h>
using namespace std;
class publisher{
    protected:
    char name[40];
    char place[20];
    public:
    void get();
    void display();
};
void publisher::get(){
    cout<<"enter publisher name and place\n";
    cin>>name>>place;
};

void publisher::display(){
    cout<<"Publisher's name ="<<name<<"and place ="<<place<<"\n";
}

class author{
    protected:
    char aname[40];
    public:
    void get();
    void display();
};
void author::get(){
    cout<<"enter the author's name:"<<"\n";
    cin>>aname;
}

void author:: display(){
    cout<<"Author's name ="<<aname<<"\n";
}

class book:public publisher,public author{
    private:
    char title[50];
    float prices;
    int pages;
    public:
    void get();
    void display();
};
void book::get(){
    publisher::get();
    author::get();
    cout<<"Enter title ,pages and prices of the book :"<<"\n";
    cin>>title>>prices>>pages;
};

void book::display(){
    publisher::display();
    author::display();
    cout<<"title is :"<<title<<" prices is: "<<prices<<"and pages is :"<<pages<<"\n";
}

int main(){
    book b;
    b.get();
    b.display();
}




















