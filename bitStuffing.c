#include <stdio.h>
#include <string.h>

char ans[100];
char *ptr;

char* stuffBit(char s[30], int pos){
	char s1[20];
	char s2[20];
	
	int i=0, j=0, k=0, l=0;
	for(i=0;i<pos;i++){
		*(s1 + k) = s[i];
		k++;
	}
	
	for(j=pos+1;j<strlen(s);j++){
		*(s2 + l) = s[j];
		l++;
	}
	
	*(s1 + k) = '\0';
	*(s2 + l) = '\0';
	
	char t1[40];
	char t2[40];
	char ans[100];
	strcpy(t1, strcat(s1, "0"));
	strcpy(t2, strcat(t1, s2));
	strcat(t2, "\0");
	//printf("%s\n", t2);
	printf("%s\n", t2);
	
}

int main(){
	char s[30];
	printf("Enter the data: ");
	scanf("%s", s);
	int p = 0;
	int count = 0;
	int i;
	for(i=0;i<strlen(s); i++){
		if(s[0]=='0' && s[i] == '1'){
			count += 1;
		}
		if(count == 5){
			count = 0;
			p = i;
			stuffBit(s, p);
			i = p+1;
		}
	}
	
	printf("%s\n", ans);
}
