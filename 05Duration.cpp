#include <iostream>
using namespace std;

class DurationType
{
    int iHr, iMn, iSc;
    public:
    DurationType();
    DurationType(int, int, int);
    void fnSetDuration();
    void fnShowDuration();
    DurationType fnAddDuration(DurationType);
};

DurationType :: DurationType()
{
    iHr = iMn = iSc = 0;
}

DurationType :: DurationType(int h, int m, int s)
{
    iHr = h;
    iMn = m;
    iSc = s;
}

void DurationType :: fnSetDuration()
{
    int h,m,s;
    cout << "\nEnter the duration : ";
    cin >> h >> m >> s;
    if(m<60 && s<60)
    {
        iHr = h;
        iMn = m;
        iSc = s;
    }
    else
        cout << "\nInvalid Input\n";
}


void DurationType :: fnShowDuration()
{
    cout << iHr << ":"<< iMn << ":"<< iSc << endl;
}

DurationType DurationType :: fnAddDuration(DurationType d2)
{
    DurationType d3;
    int hh, mm, ss;
    ss = iSc + d2.iSc;
    mm = iMn + d2.iMn + (ss/60);
    hh = iHr + d2.iHr + (mm/60);
    
    
    d3.iSc = ss % 60;
    d3.iMn = mm % 60;
    d3.iHr = hh;
    return d3;
}

int main()
{
    DurationType d1, d2, d3;

    d1.fnSetDuration();    
    d2.fnSetDuration();
    d3 = d1.fnAddDuration(d2);      // d3 = fnAddDuration(d1,d2);
    
    cout << "\nDuration 1";
    d1.fnShowDuration();
    cout << "\nDuration 2"
    d2.fnShowDuration();
    cout << "\nTotal Duration ";
    d3.fnShowDuration();
    
    return 0;
}
