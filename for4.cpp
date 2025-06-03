#include <iostream>
using namespace std;
int main(){

int number;
cout << "Insert a number to calculate the sum:"<<endl;
cin >> number;
for (int i = 1; i <= 100; i++){
    cout << "The sum of" " " << number << " + " << i << " = " << number + i <<endl;
}

return 0;
}