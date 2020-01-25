#include<iostream>
using namespace std;

class calculate
{
    int firstkm,firstm,firstcm;
    int tkm,tm,tcm;
public:
    void sum()
    {
        cout<<"\nEnter KM:M:CM- ";
        cin>>firstkm>>firstm>>firstcm;
    }
    void disp()
    {
        cout<<"\nFirst distance will be-\n";
        cout<<tkm<<" KM "<<tm<<" M "<<tcm<<" CM ";
    }
    friend calculate cal(calculate,calculate);

};
calculate cal(calculate a,calculate b)
    {
        calculate h;
        h.tkm=a.firstkm+b.firstkm;
        h.tm=a.firstm+b.firstm;
        h.tcm=a.firstcm+b.firstcm;
        int km=0,m=0;
        if(h.tm>1000)
        {
            km=h.tm/1000;
            h.tm=h.tm%1000;
            h.tkm+=km;
        }
        if(h.tcm>100)
        {
            m=h.tcm/100;
            h.tcm=h.tcm%100;
            h.tm+=m;
        }
        return h;
    }
main()
{
    calculate obj,obj2,obj3;
    obj.sum();
    obj2.sum();
    obj3=cal(obj,obj2);
    obj3.disp();

}

