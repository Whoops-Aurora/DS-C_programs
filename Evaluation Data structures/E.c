#include<stdio.h>
typedef struct hotel{
char c_name[20];
int order_no;
float distance;
char location[20];
}X;

void read(X *p,int n){
for(int i=0;i<n;i++){
    printf("Enter c_name \n");
    scanf("%s",p->c_name);
    printf("Enter order_no \n");
    scanf("%d",&p->order_no);
    printf("Enter distance \n");
    scanf("%f",&p->distance);


    printf("Enter location \n");
    scanf("%s",p->location);
    p++;
}
}
void display(X *p,int n){

for(int i=0;i<n;i++){
    printf("c_name :%s \n",p->c_name);
    printf("order_no :%d \n",p->order_no);
    printf("distance :%f \n",p->distance);
    printf("location :%s \n",p->location);
    p++;
}
}


void sort(X *p,int n){
X temp;
for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
        if((*(p+j)).distance < (*(p+(j+1))).distance){
            temp=*(p+(j+1));
            *(p+(j+1))=*(p+j);
            *(p+j)=temp;
        }
    }
}
}

void vijay(X *p,int n){
 for(int i=0;i<n;i++){
    if(strcmp((*(p+i)).location,"Vijaynagar")==0){
        printf("c_name :%s \n",(*(p+i)).c_name);
        printf("order_no :%d \n",(*(p+i)).order_no);
        printf("distance :%f \n",(*(p+i)).distance);
        printf("location :%s \n",(*(p+i)).location);
    }
 }
}

main(){
int n;
printf("Enter number of customer \n");
scanf("%d",&n);
X p[100];
read(p,n);
sort(p,n);
display(p,n);
vijay(p,n);
}
