#include<iostream>
using namespace std;
struct Node{
	const char* element;
	Node* next;
	Node(const char* e = NULL, Node* n = NULL)
	{
		element = e;
		next = n;
	}
	~Slink()
	{
		delete[]Node;
		delete[]next;
	}
};
struct Slink{
	Node* head;
	Node* tail;
	long size;
	Slink() {
	head = NULL;
	tail = NULL;
	size = 0;
}

void addFirst(const char* s)
{
	Node* newNode = new Node;
	newNode->element = s;
	newNode->next = head;
	head = newNode;
}
void addLast(const char *s) {
	Node* newNode = new Node(s, NULL); 
	tail->next = newNode; 
	tail = newNode;
}
void print() {
	for (Node *p = head; p != NULL; p = p->next) {
	cout << p->element << ".";
}
}
int removeFirst()
{
	Node* old = head;
	const char* old_element = old->element;
	head = head->next;
	delete old;
	return old_element;
}
Node insertAfter(Node* p, const char* s) {
	Node* newNode = new Node(s, p, p->next);
	p->next->prev = newNode;
	p->next = newNode;
	return newNode;
}

};
int main()
{
    Slink sl;
    sl.addFirst("Vienna");
    sl.print(); 
	cout << endl;
    sl.addLast("Roma");
    sl.print();
    const char * s = sl.removeFirst();
    sl.print();
    cout << s << endl;
    sl.insertAfter(sl, "Rome");
    return 0;
}

