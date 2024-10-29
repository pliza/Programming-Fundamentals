/**
 * Done by:
 * Student Name: Liza Rabirokh
 * Student Group: 121 1groups
 */
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

inline void addToFront(Node **head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

inline void removeFromFront(Node **head)
{
    if (*head != nullptr)
    {
        Node *temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}

inline void addToEnd(Node **head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (*head == nullptr)
    {
        *head = newNode;
    }
    else
    {
        Node *temp = *head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

inline void removeFromEnd(Node **head)
{
    if (*head == nullptr)
        return;
    if ((*head)->next == nullptr)
    {
        removeFromFront(head);
    }
    else
    {
        Node *temp = *head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
}

inline Node *searchElement(Node *head, int value)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == value)
            return temp;
        temp = temp->next;
    }
    return nullptr;
}

inline void clearList(Node **head)
{
    while (*head != nullptr)
    {
        removeFromFront(head);
    }
}

inline void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

int main()
{
    Node *head = nullptr;

    addToFront(&head, 10);
    addToFront(&head, 20);
    addToFront(&head, 30);

    cout << "Список після додавання елементів: ";
    printList(head);

    removeFromFront(&head);
    cout << "Список після видалення елемента з початку: ";
    printList(head);

    addToEnd(&head, 40);
    cout << "Список після додавання елемента в кінець: ";
    printList(head);

    removeFromEnd(&head);
    cout << "Список після видалення елемента з кінця: ";
    printList(head);

    Node *found = searchElement(head, 20);
    if (found)
    {
        cout << "Елемент 20 знайдено в списку." << endl;
    }
    else
    {
        cout << "Елемент 20 не знайдено в списку." << endl;
    }

    clearList(&head);
    cout << "Список після очищення: ";
    printList(head);

    return 0;
}