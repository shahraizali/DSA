#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;



struct nodetree{
	int item;
	nodetree *left;
	nodetree *right;
};
nodetree *tcurrent = NULL;
nodetree *current = NULL;
nodetree *root = NULL;
void treeMenu();
void createTree();
void displayTree(nodetree*);
int findTree(int);
int addElement(int);

int main(){
	system("cls");
	treeMenu();
	return 0;
}

  void treeMenu(){
	int gemma;
	while(1){
		system("cls");
		cout<<"1-Create Tree\n";
		cout<<"2-Display Tree\n";
		cout<<"3-Find Value\n";
		cout<<"4-Add Element\n";
		cout<<"5-Main Menu\n";
		cout<<"6-Exit\n";
		cout<<"Select An Option(1-5) ";
		cin>>gemma;
		cin.clear();
		cin.ignore(1000,'\n');
		switch(gemma){
			case 1:
				createTree();
			break;
			case 2:
				if(root!=NULL){
					displayTree(root);
				}
			break;
			case 3:
				if(root == NULL){
					cout<<"Tree Not Exist.";
				}else{
					int a,b;
					cout<<"Enter Value To Find : ";
					cin>>a;
					b = findTree(a);
					if(b==0){
						cout<<"Value Found At : "<<current;
					}else{
						cout<<"Value Not Found,";
					}
				}
			break;
			case 4:
				if(root == NULL){
					cout<<"Tree Not Exist.";
				}else{
					int a,b;
					cout<<"Enter Value To Add : ";
					cin>>a;
					b = addElement(a);
					if(b==0){
						cout<<"Value Already Exist.";
					}else{
						cout<<"Successfully Added.";
					}
				}
			break;
	
		
			case 6:
				exit(0);
			default:
				cout<<"Enter An Valid Option.";
			break;
		}
		getch();
	}
}
void createTree(){
	char ch;
	if(root!=NULL){
		cout<<"Link List Already Exist.\n";
		cout<<"Do You Want To Overwrite (Y\\N)";
		cin>>ch;
	}
	if(root==NULL || ch=='y' || ch=='Y'){
		int cs;
		root = NULL;
		do{
		cout<<"Enter Number Of Nodes : ";
		cin>>cs;
	    }while(cs<1);
	    cout<<"Enter Data Now\n";
	    for(int i=0;i<cs;i++){
	    	if(root==NULL){
	    		root = new nodetree;
	    		tcurrent = root;
	    		cin>>tcurrent->item;
	    		tcurrent->left = NULL;
	    		tcurrent->right = NULL;
			}else{
				int v,a;
				cin>>v;
				a = addElement(v);
				if(a==0){
					--i;
				}
		 }
       }
       cout<<"Tree Successfully Created."; 
  }
}
int addElement(int v){
	tcurrent = root;
	while(1){
		if(tcurrent->item == v){
			return 0;
		}else{
			if(v<tcurrent->item){
				if(tcurrent->left==NULL){
					tcurrent->left = new nodetree;
					tcurrent = tcurrent->left;
					tcurrent->item = v;
					tcurrent->left = NULL;
					tcurrent->right = NULL;
					return 1;
				}else{
					tcurrent = tcurrent->left;
				}
			}else{
				if(tcurrent->right == NULL){
					tcurrent->right = new nodetree;
					tcurrent = tcurrent->right;
					tcurrent->item = v;
					tcurrent->left = NULL;
					tcurrent->right = NULL;
					return 1;
				}else{
					tcurrent = tcurrent->right;
				}
			}
		}
	}
}
int findTree(int v){
	tcurrent = root;
	while(1){
		if(tcurrent->item == v){
			return 0;
		}else{
			if(v<tcurrent->item){
				if(tcurrent->left==NULL){
					return 1;
				}else{
					tcurrent = tcurrent->left;
				}
			}else{
				if(tcurrent->right == NULL){
					return 1;
				}else{
					tcurrent = tcurrent->right;
				}
			}
		}
	}
}
void displayTree(nodetree *p){
	
	if(p == NULL)
	   return;
	cout<<p->item<<endl;

	displayTree(p->right);


	displayTree(p->left);
}

