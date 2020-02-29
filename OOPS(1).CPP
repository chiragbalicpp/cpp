#include<iostream>
using namespace std;

class CN
{
private:
    int realpart; ///accessible within class
    int imgpart;
public:
    void Inputrealpart(int a){
    realpart=a;
    }

    void Inputimgpart(int a){
    imgpart=a;
    }

    void PrintingCN(){
    cout<<realpart;
    if (imgpart>=0) cout<<"+";
    cout<<imgpart<<"i"<<endl;
    }

    void Add(CN cn)///parameter is cn
    {
    realpart=realpart+cn.realpart;  ///realpart of left side and argument is right side
    imgpart=imgpart+cn.imgpart;
    }

    CN operator+(CN input)///argument is output
    {
        CN output;
        output.realpart=realpart+input.realpart; /// left hand side cn1(realpart)(input)
        output.imgpart=imgpart+input.imgpart;
        return output;
    }
};

int main()
{

CN cn1,cn2,cn;

cn1.Inputrealpart(10);
cn1.Inputimgpart(20);

cn2.Inputrealpart(-5);
cn2.Inputimgpart(-80);

cn1.PrintingCN();
cn2.PrintingCN();

cn1.Add(cn2);
cn1.PrintingCN();  /// cn1 is updated
cn2.PrintingCN();  ///unchanged because value added in cn1


cout <<endl;

cn=cn1+cn2;
cn1.PrintingCN();
cn2.PrintingCN();
cn.PrintingCN();


}
