# include<bits/stdc++.h>
 using namespace std;
 class Integer{
    private:
    int len;
    char *str;
    public:
     Integer(){
        len=0;
        str=new char[len+1];
        strcpy(str," ");
     }
     Integer(char *cp){
        len=strlen(cp);
        str=new char[len+1];
        strcpy(str,cp);
     }
     void display(){
        cout<<str<<"\n";
     }
 };

int main(){
    Integer s1,s2("Welcome");
    s1.display();
    s2.display();
}








