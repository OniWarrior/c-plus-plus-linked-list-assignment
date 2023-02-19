// Author: Stephen Aranda
// File Name: main.cpp
// Description: Driver program for adjacent ref swapping in linked list for singly linked list and doubly linked list.
// Date: 2/14/2023

#include "singlyLinkedList.cpp"
#include <list>

int main()
{

    // Defined a NumberList object.
    NumberList list;

    // define some pointers for a node and adjacent node.
    ListNode *node;
    ListNode *adjNode;

    // build some nodes with example data
    list.appendNode(3.5);
    list.appendNode(6.7);
    list.appendNode(8.9);

    // Display the example data
    std::cout << "This is the example data: \n";
    list.displayList();
    std::cout << std::endl;

    // define head of the list for traversal and assignment
    ListNode *noggin = list.getHead();

    // define temp Nodes for traversal
    ListNode *currentNodePtr;
    int count = 0;

    // position nodePtr at the head of the list
    currentNodePtr = noggin;

    // while nodePtr points to a node, traverse the list.
    while (currentNodePtr)
    {
        // snag the target and adjacent if condition true
        if (count == 1)
        {
            node = currentNodePtr; // found the target
        }
        else if (count == 2)
        {
            adjNode = currentNodePtr; // found adjacent
        }
        count++;

        // move to the next node.
        currentNodePtr = currentNodePtr->nextPtr;
    }

    // swap node and adjacent
    list.swapAdjacentNodes(node, adjNode);

    // Display the swapped data.
    std::cout << "This is the swapped list: \n";
    list.displayList();
    std::cout << std::endl;

    // Display reversed list.
    std::cout << "This is a reversed list: \n";
    list.displayReversedList();
    std::cout << std::endl;

    return 0;
}
