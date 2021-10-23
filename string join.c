#include <stdio.h>
void join_string(char [],char [],char []);
int main(){
	char str1[20],str2[20];
	char str3[40];
	
	printf("enter first string : ");
	scanf("%s",str1);
	
	printf("enter first string : ");
	scanf("%s",str2);
	
	join_string(str1,str2,str3);
	
	return 0;
}
void join_string(char str1[20],char str2[20],char str3[40]){
	int i=0;
	int j=0;
	while(str1[i] != '\0'){
		str3[j] = str1[i];
		j++;
		i++;
	}

	i=0;
	while(str2[i] != '\0'){
		str3[j] = str2[i];
		j++;
		i++;
    }
    str3[j]='\0';
   	printf("third string contain : %s",str3);

}
