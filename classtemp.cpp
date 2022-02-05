#include<iostream>
#include<string>
using namespace std;

template < class T1, class T2 > class tem
{
public:
  T1 var1;
  T2 var2;
  T1 total;
  tem (T1 v1, T2 v2)
  {
    var1 = v1;
    var2 = v2;
  total = var1 + var2;
}
  void p ()
  {
    cout << "1st number:" << var1 << endl;
    cout << "2nd number:" << var2 << endl;
cout << "2nd number:"<<total <<endl;
  }
};

int
main ()
{
  tem < float, int >t1 (2.5, 6);
  t1.p ();
  return 0;
}


// template<class T1, class T2, class T3>  
// class A   
// {  
//     public:
//     T1 x;
//     T2 y;
//     T3 z;
//     A(T1 a, T2 b, T3 c)
//     {
//         x=a;
//         y=b;
//         z=c;
//     }
//     void print()
//     {
//         cout<<x<<"\t"<<y<<"\t"<<z<<endl;

//     }
// };  

// int main()  
// {  
//     A <string,float,int> obj("Hello String",1.10,1001);
//     obj.print();
// }  
