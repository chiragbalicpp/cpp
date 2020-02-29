#include<iostream>
using namespace std;

class complexnum{
private:

    int realpart;
    int imgpart;

public:

    void acceptrealpart(int a){
        realpart=a;
        }

    void acceptimgpart(int a){
        imgpart=a;
    }

    void Printcomplexnum(){
        cout<<realpart;
        if (imgpart>=0) cout<<"+"<<imgpart<<"i"<<endl;
        else cout<<imgpart<<"i"<<endl;
    }

    void Add(complexnum cn){                ///calling : cn1.Add(cn2) , cn1 is getting updated and argument is cn2 referred as cn
        realpart=realpart+cn.realpart;      ///cn2 is as it is , cn1 is changed
        imgpart=imgpart+cn.imgpart;         ///cn1 is not mentioned as the function is being called on LHS and arg. is RHS
    }

    complexnum operator+(complexnum cn){
        complexnum cn3;
        cn3.realpart=realpart+cn.realpart;
        cn3.imgpart=imgpart+cn.imgpart;
        return cn3;
    }
};

int main()
{
    complexnum cn1,cn2,cn3;
    cn1.acceptrealpart(10);
    cn1.acceptimgpart(20);
    cn2.acceptrealpart(5);
    cn2.acceptimgpart(15);
    cn1.Printcomplexnum();
    cn2.Printcomplexnum();

    cn1.Add(cn2);
    cout<<"updated cn1:"<<endl;
    cn1.Printcomplexnum();
    cout<<"As it is cn2:"<<endl;
    cn2.Printcomplexnum();

    cout<<"updated cn1+cn2 by + operator :"<<endl;
    cn3=cn1+cn2;
    cn3.Printcomplexnum();
}
