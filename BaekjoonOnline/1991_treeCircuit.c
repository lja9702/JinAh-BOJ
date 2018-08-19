#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	char ver;
	struct node *left;
	struct node *right;
}Node;
void pre(Node* root){
	if(root == NULL)
		return;
	printf("%c", root -> ver);
	pre(root -> left);
	pre(root -> right);
}

void in(Node* root){
	if(root == NULL)
		return;
	in(root -> left);
	printf("%c", root -> ver);
	in(root -> right);	
}

void post(Node* root){
	if(root == NULL)
		return;
	post(root -> left);
	post(root -> right);
	printf("%c", root -> ver);	
}
int main(){
	int n, i, j;
	Node* tree[26];
	scanf("%d", &n);
	for(i = 0;i < n;i++){
		tree[i] = (Node*) malloc(sizeof(Node));
		tree[i] -> ver = i + 'A';
		tree[i] -> left = NULL;
		tree[i] -> right = NULL;
	}
	for(i = 0;i < n;i++){
		char a, b, c;
		getchar();
		scanf("%c %c %c", &a, &b, &c);
		if('A' <= b && b <= 'Z')
			tree[a - 'A'] -> left = tree[b - 'A'];
		if('A' <= c && c <= 'Z')
			tree[a - 'A'] -> right = tree[c - 'A'];
	}
	pre(tree[0]);
	printf("\n");
	in(tree[0]);
	printf("\n");
	post(tree[0]);
	printf("\n");
}