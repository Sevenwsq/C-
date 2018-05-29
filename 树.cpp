#include <iostream>
#include<stdio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fa[10002];
int N=0;

int findfa(int a) {
	if(a != fa[a])
		fa[a]=findfa(fa[a]);
	return fa[a];
}
void add(int a, int b) {
	if(findfa(a) != findfa(b)) { //not connected
		fa[a] = b;//it is not effective! The height should be considered!
		N--;
	}
}


int main(int argc, char** argv) {
	int c1=0,c2=0;
	char ch;
	cin>>N;
	for(int i=1; i<=N; i++) {
		fa[i]=i;
	}
	cin>>ch;
	while(ch != 'S') {
		cin>>c1>>c2;
		if(ch == 'C') {
			if(findfa(c1) == findfa(c2)) printf("yes\n");
			else printf("no\n");
		} else if(ch == 'I') {
			add(c1,c2);
		}
		cin>>ch;
	}
	//The connected computers
	if(N==1)
		printf("The network is connected.\n");
	else
		printf("There are %d components.\n",N);

	return 0;
}
