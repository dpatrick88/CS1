#include <iostream>
using namespace std;

int newNum;
float testNum;
int x;

float result = newNum * testNum;

int main(){
    cout << "enter int";
    cin >> x;
    cout << "enter float";
    cin >> testNum;
    cout << "enter int";
    cin >> newNum;

    cout << "products of ints is: \n";
    cout << x*newNum;
    cout << "products of all is: \n";
    cout << x*newNum*testNum;
}