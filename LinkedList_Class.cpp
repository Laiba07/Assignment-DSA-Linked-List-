#include <iostream>
using namespace std;
class Node{	
	public:
		int data;
		Node * link;
		Node(int val){
		data=val;
		link = NULL;
		}
	};
	
class LinkedList{
	Node * last;;
	int count;
	Node * head;
	public:
		LinkedList(){
			last = NULL;
			count = 0;
			head = NULL;
		}
	int getFirstElement(){
		return head->data;
	}
	int getLength(){
		return count;
	}
	int getLastElement(){
		return last->data;
	}
	void insertAtbeginning(int x){
		Node * temp = new Node(x);
		temp->link=head;
		head=temp;
		count++;
	}	
	void insertAtLast(int val){	
		Node * n = new Node(val);
		if (head==NULL){
		head = n;
		last = n;
		count++;
		return;
		}
		Node* temp=head;
		while(temp->link !=NULL){
			temp=temp->link;
		}
		temp->link=n;
		last = n;
		count++;
	}
	
	void show(){
	Node* temp=head;
		if (temp!=NULL){
		cout << temp->data ;
		temp=temp->link;
		}else{
			cout <<"List is null";
			exit(0);	
	}
}
	bool isempty(){
		return (head==NULL);
	}

};
	int main(){
		LinkedList L1;
		L1.insertAtLast(1);
		L1.insertAtbeginning(2);
		L1.insertAtLast(3);
		cout<<"Original Linked List :"<<endl;
		L1.show();	
		cout<<endl<<endl;
		cout<<"IsEmpty List: "<<endl;
		
		(L1.isEmpty())? cout <<"True"<<endl : cout<<"False" <<endl;
		cout <<"First Element : " <<endl;
		L1.getFirstElement() <<endl;
		cout <<"Last Element : " <<endl;
		L1.getLastElement()<<endl;
		cout <<"Total Elements in The List : " <<endl;
		L1.getLength();
}










	
