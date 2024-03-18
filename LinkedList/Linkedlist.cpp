#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Node {
	public:
		char id;
		
		Node *next;
		
		Node(){
			next = NULL;
		}
};

class LinkedList {
	public:
		Node *head;
		Node *tail;
		
		LinkedList(){
			head = tail = NULL;
		}

void insertToTail(char data){
	Node *node = new Node();
	node->id = data;
	
	tail->next = node;
	tail = node;
}

void insertToHead(char data){
	Node *node = new Node();
	node->id = data;
	
	Node *tmp = head;
	head = node;
	head->next = tmp;
}
void printALL(){
	if (head!=NULL){
		Node *tmp = head;
		do{
			cout<<tmp->id<<"->";
			tmp = tmp->next;
		}while(tmp!=NULL);
	}
}
};

int main(int argc, char** argv) {
		
	LinkedList *link1 = new LinkedList();
	
	Node *node1 = new Node();
	node1->id = 'A';
	
	link1->head = node1;
	link1->tail = node1;
	
	/*cout << node1 << endl;
	cout << link1->head << endl;
	cout << link1->head->id<<endl;
	cout << link1->head->next<<endl;
	cout << link1->tail->id<<endl;*/
	
	Node *node2 = new Node();
	node2->id = 'B';
	
	link1->tail->next= node2;
	link1->tail = node2;
	
	/*cout << link1->head->id<<endl;
	cout << link1->tail->id<<endl;*/
	
	Node *node3 = new Node();
	node2->id = 'C';
	
	link1->tail->next = node3;
	link1-> tail = node3;
		
	Node *nodex = new Node();
	nodex->id = 'X';
	
	Node *tmp = link1->head;
	link1 ->head = nodex;
	link1->head->next = tmp;
	
	
	cout << link1->head->id<<endl;
	cout <<link1->tail->id<<endl;
	
	link1->insertToHead('Y');
	link1->insertToTail('D');
	
	cout<<link1->head->id<<endl;
	cout<<link1->tail->id<<endl;
	
	link1->printALL();
return 0;
}