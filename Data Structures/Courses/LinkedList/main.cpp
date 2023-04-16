// #define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
// #include <crtdbg.h>
#include <iostream>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

int main()
{
    LinkedList list;

    // Test isEmpty() method
    cout << "List is empty: " << boolalpha << list.isEmpty() << endl;

    // Test append() method
    list.append(1);
    list.append(2);
    list.append(3);

    // Test isEmpty() and size() methods
    cout << "List is empty: " << boolalpha << list.isEmpty() << endl;
    cout << "List size: " << list.size() << endl;

    // Test contains() method
    cout << "List contains 3: " << boolalpha << list.contains(3) << endl;

    // Test indexOf() method
    cout << "Index of 3: " << list.indexOf(3) << endl;

    // Test prepend() method
    list.prepend(0);

    // Test size() method
    cout << "List size: " << list.size() << endl;

    // Test getFirst() method
    cout << "First element: " << list.getFirst() << endl;

    // Test getLast() method
    cout << "Last element: " << list.getLast() << endl;

    // Test deleteData() method
    list.deleteData(2);

    // Test contains() method
    cout << "List contains 2: " << boolalpha << list.contains(2) << endl;

    // Test indexOf() method
    cout << "Index of 2: " << list.indexOf(2) << endl;

    // Test get() method
    cout << "Element at index 0: " << list.get(0) << endl;
    cout << "Element at index 2: " << list.get(2) << endl;

    // Test clear() method
    list.clear();

    // Test isEmpty() method
    cout << "List is empty: " << boolalpha << list.isEmpty() << endl;

    // _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);
    // _CrtDumpMemoryLeaks();

    return 0;
}
