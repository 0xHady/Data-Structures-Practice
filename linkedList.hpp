#include <iostream>
#include "node.hpp"
using namespace std;
class LinkedList
{
private:
    int size;
    node *head;
    node *tail;
public:
    LinkedList(); //done
    ~LinkedList(); // done
    void Push_Back(int val); //done
    void Push_Front(int val); //done
    void insert(int val, int pos); // ---> next
    void Pop_Front();
    void Pop_Back();
    void del(int pos);
    void reverse();
    void do_nothing(); //done
    void display(); //done
};

LinkedList::LinkedList(){
    head = NULL;
    tail = NULL;
    size = 0;
}

LinkedList::~LinkedList(){
    delete head;
    delete tail;
}

void LinkedList::Push_Front(int val){
    node *p = new node;
    p -> data = val;
    if(!size){
        head = p;
        tail = p;
        p ->next = NULL;
    }else{
        p ->next = head;
        head = p;
    }
    size++;
}

void LinkedList::Push_Back(int val){
    node *p = new node;
    p ->data = val;
    if(!size){
        head = p;
        tail = p;
        p->next = NULL;
    }else{
        tail ->next = p;
        p ->next = NULL;
        tail = p;
    }
    size++;
}

void LinkedList::display(){
    node *p = head;
    while(p){
        cout << p -> data << " ";
        p = p ->next;
    }
    cout << endl;
}
