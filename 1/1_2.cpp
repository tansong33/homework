#include<iostream>
#include<cmath> 
#include<iomanip>
using namespace std; 

int main() 
{ 
    double a,b,c,d,R,I; 
    double x1,x2; 
    //cout<<"请输入a,b,c: "; 
    cin>>a>>b>>c; 
    d= b*b - 4*a*c;
    if(d>=0) 
    { 
        R=-b/(2*a); 
        I=sqrt(fabs(d))/(2*a);   //此次fabs函数非必须
        //cout<<"方程的两个实数根是: \n"; 
        x1=R+I;
        x2=R-I; 
        cout<<fixed<<setprecision(6)<<"x1 = "<<x1<<endl; //此处请自行添加代码控制小数位数
        cout<<fixed<<setprecision(6)<<"x2 = "<<x2<<endl; 
    } 
    else cout<<"NO"<<endl; 
    return 0; 
}
