#include <stdio.h>
int main (){
	void sort(char s[100]);
	char s[100];
	printf("enter a word : ");
	scanf("%s",s);
	fflush(stdin);
	sort(s);
	return 0;
}
void sort(char s[100]){
	int n=0;
	int i=0;
	int j=0;
	int temp=0;
	while(s[n]!='\0'){
		n++;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
		    if(s[i] > s[j]){
			    temp = s[i];
			    s[i] = s[j];
			    s[j] = temp;
		    }
	    }
	    printf("%s",s[i]);
    }
}
