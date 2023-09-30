// #include <bits/stdc++.h>
// using namespace std;

// class StackNode {
// public:
// 	int data;
// 	StackNode* next;
// };

// StackNode* newNode(int data)
// {
// 	StackNode* stackNode = new StackNode();
// 	stackNode->data = data;
// 	stackNode->next = NULL;
// 	return stackNode;
// }

// int isEmpty(StackNode* root)
// {
// 	return !root;
// }

// void push(StackNode** root, int data)
// {
// 	StackNode* stackNode = newNode(data);
// 	stackNode->next = *root;
// 	*root = stackNode;
// 	cout << data << " pushed to stack\n";
// }

// int pop(StackNode** root)
// {
// 	if (isEmpty(*root))
// 		return INT_MIN;
// 	StackNode* temp = *root;
// 	*root = (*root)->next;
// 	int popped = temp->data;
// 	free(temp);

// 	return popped;
// }

// int peek(StackNode* root)
// {
// 	if (isEmpty(root))
// 		return INT_MIN;
// 	return root->data;
// }


// int main()
// {
// 	StackNode* root = NULL;
// 	push(&root, 10);
// 	push(&root, 20);
// 	push(&root, 30);

// 	cout << pop(&root) << " popped from stack\n";
// 	cout << "Top element is " << peek(root) << endl;
// 	cout <<"Elements present in stack : ";

// 	while(!isEmpty(root))
// 	{
// 		cout << peek(root) <<" ";
// 		pop(&root);
// 	}

// 	return 0;
// }


#include<iostream>
using namespace std;

class Stack{
public:
	int data;
	Stack*next;

	Stack(int d){
		this->data = d;
		this->next = NULL;
	}

	void push(Stack* &head,int ele){
		Stack* newNode = new Stack(ele);
		if(head == NULL){
			head = newNode;
			return;
		}
		else{
			newNode->next = head;
			head = newNode;
		}
	}

	void pop(Stack* &head){
		if(head != NULL){
			Stack*temp = head;
			head = head->next;
			temp->next = NULL;
			delete temp;
		}
		else{
			cout<<"Stack is UnderFlow"<<endl;
		}
	}

	int peek(Stack* &head){
		return head->data;
	}

	bool isEmpty(Stack* &head){
		if(head == NULL){
			return true;
		}
		else{
			return false;
		}
	}

	int size(Stack* &head){
		int len = 0;
		while(head != NULL){
			len++;
			head = head->next;
		}
		return len;
	}

	void print(Stack* &head){
		Stack* temp = head;
		while(temp != NULL){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}
};

int main(){
	Stack*head = NULL;
	Stack st(0);
	st.push(head,12);
	st.push(head,20);
	st.push(head,30);
	st.push(head,40);

	st.print(head);
	st.pop(head);
	
	// cout<<"The size of stack is "<<st.size(head)<<endl;
	cout<<st.peek(head)<<endl;
	while(!st.isEmpty(head)){
		cout<<st.peek(head)<<" ";
		st.pop(head);
	}
	cout<<endl;
	
}