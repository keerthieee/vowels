#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char line[100];
int c,v,s;
printf("enter a line");
gets(line);
for(i=0;line!='\0';i++)
{
if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u')
{
v++;
}
elseif(line[i]>'a'&&line[i]<='z')
{
c++;
}
else
{
s++
}
printf("no of vowels=%d",v);
printf("no of constants=%d",c);
}
