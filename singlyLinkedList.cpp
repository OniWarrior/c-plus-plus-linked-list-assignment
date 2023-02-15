// Author: Stephen Aranda
// File Name: singlyLinkedList.cpp
// Date: 2/14/2023
// Description: This is the specification file for the header file of singlyLinkedList.h

#include <iostream>
#include "singlyLinkedList.h"

void NumberList::appendNode(double value)
{
    ListNode *newNode; // point to a new node
    ListNode *nodePtr; // move through the list.

    // allocate a new node and store value there.
    newNode = new ListNode;
    newNode->m_value = value;
    newNode->nextPtr = nullptr;

    // If ther are no nodes in the list make newNode the first node.

    if (!head)
    {
        head = newNode;
    }
    else
    { // Otherwise, insert newNode at end.
        // Initialize nodePtr to head of list.
        nodePtr = head;

        // find the last node in the list.
        while (nodePtr->nextPtr)
        {
            nodePtr = nodePtr->nextPtr;
        }

        // Insert newNode as the last node.
        nodePtr->nextPtr = newNode;
    }
}
