/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 15, 2018, 11:29 PM
 */

#include <iostream>
#include <random>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int size = 10;
    int arr[size];

    srand(time(0));

    for (int i = 0; i < size; ++i)
        arr[i] = rand() % 11;
    
     for (int i = 0; i < size; ++i)
        cout << arr[i] << '\n';

    cout << '\n';
    
    for (int i = 1; i < size; ++i) {
        int value = arr[i];
        int hole = i;
        while (hole > 0 && arr[hole - 1] > value) {
            arr[hole] = arr[hole - 1];
            hole = hole - 1;
        }
        arr[hole] = value;
    }
    
 for (int i = 0; i < size; ++i)
        cout << arr[i] << '\n';
}

