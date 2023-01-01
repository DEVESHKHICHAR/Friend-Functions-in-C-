#include <iostream>
using namespace std;
class  complex{
    int a,b;
    friend complex sum(complex o1, complex o2);
    public:
      void setdata(int c1, int c2){
         a=c1;
         b=c2;
      }
      void getdata(){
        cout<<"the complex number is "<<a<<" + i"<<b<<endl;
      }
      void print(int d, int e){
        cout<<"the sum of complex number is "<<d<<" + i"<<e<<endl;
      }
};
complex sum(complex o1, complex o2){
     complex o3;
      o3.print(o1.a+o2.a, o1.b+o2.b);
      return o3;
}
int main() {
    complex h1,h2,h3;
    h1.setdata(3,6);
    h1.getdata();
    h2.setdata(4,7);
    h2.getdata();
    h3=sum(h1,h2);
    return 0;
}