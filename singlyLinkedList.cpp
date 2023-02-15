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

void NumberList::displayList() const
{

    ListNode *nodePtr;
    ; // move through the list

    // position nodePtr at the head of the list
    nodePtr = head;

    // while nodePtr points to a node, traverse the list.
    while (nodePtr)
    {
        // display the value in this node.
        std::cout << nodePtr->m_value << std::endl;

        // move to the next node.
        nodePtr = nodePtr->nextPtr;
    }
}

void NumberList::insertNode(double value)
{

    ListNode *newNode;                // a new node
    ListNode *nodePtr;                // to traverse the list
    ListNode *previousNode = nullptr; // pointer to the previous node.

    // allocate a new node and store value there.
    newNode = new ListNode;
    newNode->m_value = value;

    // if there are noe nodes in the list make newNode the first node
    if (!head)
    {
        head = newNode;
        newNode->nextPtr = nullptr;
    }
    else
    { // Otherwise, insert newNode

        // position nodePtr at the head of list.
        nodePtr = head;

        // initialize previousNode to nullptr
        previousNode = nullptr;

        // skip all nodes whose value is less than value
        while (nodePtr != nullptr && nodePtr->m_value < value)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->nextPtr;
        }

        // if the new node is to be the 1st in the list,
        // insert it before all other nodes.
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->nextPtr = nodePtr;
        }
        else
        { // otherwise insert after the previous node.
            previousNode->nextPtr = newNode;
            newNode->nextPtr = nodePtr;
        }
    }
}
