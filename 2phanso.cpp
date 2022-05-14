#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"mời bạn nhập 2 phân số:\n";
    do{
        cout<<"không được nhập mẫu số = 0\n";
    cin>>a>>b>>c>>d;
    }while(b==0 || d==0);
    int mau = b*d;
    int tu1 = a*d;
    int tu2 = c*b;
    if(tu1 == tu2)
        cout<<"2 phan so bang nhau\n";
    else
        cout<<"2 phan so khong bang nhau\n";
        {
            if(tu1>tu2)
                cout<<"phan so lon hon la:"<<a<<"/"<<b<<endl;
            else
                cout<<"phan so lon hon la:"<<c<<"/"<<d<<endl;
        }
    cout<<"tong 2 phan so la:"<<tu1+tu2<<"/"<<mau<<endl;
    return 0;
}
