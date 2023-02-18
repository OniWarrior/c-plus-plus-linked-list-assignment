// Author: Stephen Aranda
// File Name: singlyLinkedList.h
// Date: 2/14/2023
// Description: a header file for singly linked list.

#ifndef __NUMBERLIST_H
#define __NUMBERLIST_H

struct ListNode
{
    double m_value;
    ListNode *nextPtr;
};

class NumberList
{
private:
    ListNode *head;

public:
    NumberList() { head = nullptr; }
    ~NumberList();

    void appendNode(double value);
    void insertNode(double value);
    void deleteNode(double value);
    void swapAdjacentNodes(ListNode *node, ListNode *adjNode);
    ListNode *getHead();
    void displayList() const;
};

#endif