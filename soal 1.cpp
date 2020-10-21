#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
 char pilih;
 cout << "======================" << endl;
    cout << "    Haidar Guhardy Muhammad    " << endl;
    cout << "======================" << endl;
do {int bil;
cout << "Masukan Sebuah Bilangan : ";
cin >> bil;

if (bil == 0) {
cout << "Bilangan " << bil << " bilangan Nol";
}
else  if ( bil > 0){
if (bil % 2 == 0) {
cout << "Bilangan " << bil << " bilangan Genap Positif";
}
else{
cout << "Bilangan " << bil << " bilangan Ganjil Positif";
}
}
else{
if (bil % 2 == 0) {
cout << "Bilangan " << bil << " bilangan Genap Negatif";
}
else{
cout << "Bilangan " << bil << " bilangan Ganjil Negatif";
}
}
 cout << endl << "Apa anda ingin mengulang (y/n)";
    cin >> pilih;
    cout << endl;
 }while (pilih =='y');


}
