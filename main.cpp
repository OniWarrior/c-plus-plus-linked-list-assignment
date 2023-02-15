// Author: Stephen Aranda
// File Name: main.cpp
// Description: Driver program for adjacent ref swapping in linked list for singly linked list and doubly linked list.
// Date: 2/14/2023

#include "singlyLinkedList.cpp"

int main()
{

    // Defined a NumberList object.
    NumberList list;

    // build some nodes with example data
    list.appendNode(3.5);
    list.appendNode(6.7);
    list.appendNode(8.9);

    // Display the example data
    std::cout << "This is the example data: \n";
    list.displayList();
    std::cout << std::endl;

    return 0;
}
