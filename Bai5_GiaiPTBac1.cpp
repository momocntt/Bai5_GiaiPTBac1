// Bai5_GiaiPTBac1.cpp : 
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float x;
    cout << "UNG DUNG GIAI PHUONG BAC I\n";
    cout << "Nhap a:"; cin >> a;
    cout << "Nhap b:"; cin >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "PT dung voi moi x ~ vo so nghiem\n";
        }
        else {
            cout << "PT vo nghiem\n";
        }
    }
    else {
        x = (float)- b / a;
        cout << "Ket qua x = " << x << endl;
    }
    return 0;
}


