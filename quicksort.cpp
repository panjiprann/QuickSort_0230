#include <iostream>
using namespace std;

//array of integers to hold values
int arr[20]; 
int cmp_count = 0; // number of comparision
int mov_count = 0; //number of moves
int n;

void input() {
    while (true)
    {
        cout << "masukan panjang element array: ";
        cin >> n;

        if (n<=20)
        break;
        else
        cout << "\nmaksimum panjang array adalah 20" << endl;
    }    
    
}