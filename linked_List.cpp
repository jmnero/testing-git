#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

int main(){
	int i, n, item;
	struct node *p, *q, *head;
	
	cout<< "ENTER A NUMBER OF NODES: "   ;
		cin>> n;
	
	cout<< "ENTER THE VALUE  OF THE HEAD NODE: ";
		cin>> item;
	
	q= (struct node*) malloc(sizeof(struct node));
	q->data = item;
	q->next = NULL;
	
	head=q;
	p=head;
	
	for(i=1; i<n; i++)
	{
		cout<< "ENTER THE VALUE OF THE NEXT NODE: ";
		cin>> item;
		
			q= (struct node*) malloc(sizeof(struct node));
	q->data = item;
	q->next = NULL;
	
	p->next=q;
	p= p->next;		
	}
	
	p=head;
	
	cout<< "THE VALUES ARE:  ";
	
	 while (p!=NULL)
	 {
       cout<< "\t "<< p->data;
	 	p=p->next;
	 }
	
	return 0;
	
}
	
