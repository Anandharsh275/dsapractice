#include<iostream>
#include<string>
#include<cmath>
using namespace std;
using namespace std;
struct{
    int a=3;
    int b=1;
    int c=34;
}mystructure,structure2,structure3;
struct create{
    int car;
    int cloth;
};
class myname{
    public:
    int bro;
    string khokuch;
};
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    myname harsh;
    harsh.bro=34;
    harsh.khokuch="bro kaho kuch";

    string food="pizza";
    string &meal=food;
    string *ptr=&food;
    string* food;

    cout<<ptr;//output the memory address of food;
    cout<<*ptr;//output the value of food with the pointer

    cout<<food;
    cout<<meal;
    create first;
    first.car=23;
    first.cloth=23;
    create second;
    second.car=43;
    second.cloth=98;
    cout<<"hello world";
    mystructure.a=34;
    cout<<mystructure.a;
    cout<<mystructure.b;
    cout<<"hello this is harsh\n";
    cout<<"my name is khan\t";
    cout<<"is your name is harsh\\";
    int a;
    bool check;
    double c;
    string m="hello";
    bool ne=true;
    cout<<m[2];
    cout<<max(3,6);
    int d=min(3,6);
    int arr[3];
    int ll=sizeof(arr);
    int mm=sizeof(arr)/sizeof(int);
    sizeof(arr);
    int ar[3][1];
   
    for(int i=0; i<sizeof(ar)/sizeof(int);i++){
        for(int j=0;j<sizeof(ar[i])/sizeof(int); j++){
            cin>>ar[i][j];
        }
    }
    cout<<"my name is khan";
    int dd;
    cin>>dd;
    for(int i=0; i<ll; i++){
        cin>>arr[i];
    }
    int k=sqrt(4);
    for(int i=0; i<k;i++){
        cout<<i<<"\n";
        if(i==4){
            break;
        }
    }
    if(d==3){
        cout<<"yes bro find the value";
        string result=(k<23)?"bro it is present here":"no bro nothing here";
    }else cout<<"no bro can't find";
    int i=0;
    while(i<d){
        cout<<i<<"\n";
        i++;
    }
    int l=log(2);
    cout<<(d>k);//return boolean value
    int m=round(1);//ceil use for rounded up to nearest integer
    string name;//floor use for rounded down to its nearest integer
    //pow is use for find out the power
    getline(cin,name);//to take input of text
    cout<<"i am"<<m<<"bro and you";
    const int mynam=32;//like static in java
 int x;
 int k=m.length();//both this and below will give same value it is upon me what i want to use
 int d=m.size();
 cin>>x;
 x=3;
 swap(x,d);
 int a,b,c,d;
 cin>>a;
 cin>>b;
 cin>>c; 
 cin>>d;
 int e,f,g,h;
 cin>>e;
 cin>>f;
 cin>>g;
 cin>>h;
 //float and double difference is that precision in float is up to 5 only n
 //while in double it is up to 15;
 bool fun=true;
 cout<<fun;
 string greeting ="my mane is bald";
    return 0;
}