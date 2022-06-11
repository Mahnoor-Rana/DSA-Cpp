/* Given a reference (pointer to pointer)
to the head of a list and an int,
inserts a new node on the front of the list. */
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	
	void push(Node**head_ref,int new_data){
		// allocate node 
		new_data = new Node();
		new_data->data = new_data;
		new_data->next = (*head_ref);
		(*head_ref) = new_data;
	}
int main(){
	Node* head = NULL;
	Node* second = NULL;
	
	head = new Node();
	second = new Node();

	head->data = 1; // assign data in first node
	head->next = second;
	
	second->data=3;
	second->next = NULL;
	void();
	return 0;
}

