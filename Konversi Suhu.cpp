#include <iostream>
using namespace std;
int main ()
{
    float C,F,K,R;
    cout<< "++++++ Program Konversi Suhu ++++++\n";
    cout<< "Input Nilai Celcius :";
    cin>> C;
    F=C*1.8+32;
    K=C*273.15;
    R=C*0.8;
    cout<< "Nilai Fahrenheit :"<<F<<endl<< "Nilai Kelvin :"<<K<<endl<<"Nilai Reamur :"<<R;
        char LG;
    cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main();
else if (LG=='T' || LG=='t') goto x;
x:
    return 0;
}
