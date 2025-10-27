#include <bits/stdc++.h>
using namespace std;

const int M=30; 

typedef struct{
	char id[M],name[M],sex;
	double a,b,c;
}Data;

typedef struct NODE{
	Data data;
	NODE* next;
}Node;

void input(Data* p){
	scanf("%s %s %c %lf %lf %lf",p->id,p->name,&p->sex,&p->a,&p->b,&p->c);
}

void output(Data* p){
	printf("%s %s %c %.1lf %.1lf %.1lf",p->id,p->name,p->sex,p->a,p->b,p->c);
}

Node* initList(){
	Node* head=(Node*)malloc(sizeof(Node));
	head->next=NULL;
	return head;
}

Node* get_tail(Node* L){
	Node* p=L;
	while(p->next!=NULL){
		p=p->next;
	}
	return p;
}

void insertList(Node* L){
	Node* tail=get_tail(L);
	Node* p=(Node*)malloc(sizeof(Node));
	input(&(p->data));
	Node* q=L->next;
	char idd[M];
	strcpy(idd,(&(p->data))->id);
	while(q!=NULL){
		if(strcmp((&q->data)->id,idd)==0){
			cout<<"Failed\n";
			free(p);
			return;
		}
		q=q->next;
	}
	output(&(p->data));
	tail->next=p;
	p->next=NULL;
} 

void sortList(Node* L){
	if(L->next==NULL||L->next->next==NULL) return;
	Node* p=L->next;
	while(p->next!=NULL){
		if (strcmp(p->data.id, p->next->data.id) > 0){
			Node* t=p->next->next;
			p->next->next=p->next;
			p->next=t;
		}
		p=p->next;
	}
}

void listNode(Node* L){
	Node* p=L->next;
	while(p!=NULL){
		output(&(p->data));
		p=p->next;
	}
}

void QuitList(Node* L){
	cout<<"Good bye!\n";
	Node* p=L->next;
	Node* q;
	while(p!=NULL){
		q=p->next;
		free(p);
		p=q;
	}
	free(L);
	exit(0);
}

int main()
{
	Node* List=initList();
	char cmd[M]; 
	while(1){
		cin>>cmd;
		switch(cmd[0]){
		case 'I':
			insertList(List); 
			break;
		case 'L':
			cout<<"List:\n";
			sortList(List);
			listNode(List);
			break;	
		case 'Q':
		case 'E':
			QuitList(List);
			break;
		} 
	}
	return 0;
} 
