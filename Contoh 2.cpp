#include <iostream>
using namespace std;

int main(){
int a=5;
int *b;
b = &a;
cout<<"NIlai variabel a adalah : "<<a<<endl;
cout<<"ALamat variabel a adalah : "<<&a<<endl;
cout<<"Isi variabel a adalah : "<<b<<endl;
cout<<"NIlai yang tertampung dalam variabel b adalah : "<<*b<<endl;

return 0;
}
