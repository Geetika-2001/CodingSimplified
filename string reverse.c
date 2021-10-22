#include <stdio.h>

void rev_string(char [],char []);

int main(){
	char str1[10],str2[10];
	
	
	printf("enter a string :");
	scanf("%s",str1);
	
	rev_string(str1,str2);
	
	return 0;
}
void rev_string(char str1[10],char str2[10]){
	int i=0,j=0,n=0,end=0;
	while(str1[n] != '\0'){
		n++;
	}
	for(i=0;i<n;i++){
		end=n-1;
		str2[i] = str1[end];
		printf("%c",str2[i]);
		n=n-1;
	}
    str2[i] = '\0';
	printf("reverse is :%s",str2);
}

