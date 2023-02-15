// Author: Stephen Aranda
// File Name: singlyLinkedList.h
// Date: 2/14/2023
// Description: a header file for singly linked list.

#ifndef __NUMBERLIST_H
#define __NUMBERLIST_H

class NumberList
{
private:
    // Node for singly linked list
    struct ListNode
    {
        double m_value;          // example value for node
        struct ListNode *nextPtr // pointer to the next node.
    }

    ListNode *head; // List of the head pointer

public:
    NumberList()
    {
        this.head = nullptr;
    }

    ~NumberList();

    void appendNode(double value);
    void insertNode(double value);
    void deleteNode(double value);
    void displayList() const;
}

#endif