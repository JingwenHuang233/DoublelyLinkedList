#include <iostream>
#include "IntList.h"

using namespace std;

int main(){
    IntList list;

    cout << "empty: " << list << endl;
    list.push_front(3);

    cout << "push front 3: " << list << endl;
    list.push_front(1);
    cout << "push front 1: " << list << endl;
    list.push_back(4);

    cout << "push back 4: " << list << endl;
    list.push_back(1);
    cout << "push back 1: " << list << endl;
    list.push_front(5);

    list.pop_back();
    cout << "pop back: " << list << endl;
    list.pop_front();
    cout << "pop front: " << list << endl;

    cout << "test print reverse: ";
    list.printReverse();
    cout << endl;

    list.pop_front();
    cout << "pop front: " << list << endl;
    list.pop_back();
    cout << "pop back: " << list << endl;
    cout << "test print reverse: ";
    list.printReverse();
    cout << endl;

    return 0;
}

	
