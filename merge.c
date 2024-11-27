//merge two sorted arrays and store in a third array
#include <stdio.h>
void main(){
    int m,n,i,j,a[10],b[10],c[20],temp,k=0;

    // first array a
    printf("Enter the size of array a :");
    scanf("%d",&m);
    printf("Enter array elements:");
      for ( i = 0; i < m; i++)
      {
        scanf("%d",&a[i]);
      }

    //second array b
    printf("Enter the size of array b:");
    scanf("%d",&n);
    printf("Enter the elements :");
     for ( i = 0; i < n; i++)
     {
       scanf("%d",&b[i]);
    
     }
     
    //sort array a 
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            if (a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    //sort array b
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[i]>b[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    //merge array a and b
   i=j=0;
   while(i<m && j<n){
    if(a[i]<=b[j]){
        c[k]=a[i];
        i++;
        k++;
    }
    else{
        c[k]=b[j];
        j++;
        k++;
    }
   }

   while(i<m){
    c[k]=a[i];
    k++;
    i++;
   }

   while(j<n){
    c[k]=b[j];
    k++;
    j++;
   }
   
   //display arrays
   printf("\n Array a :");
   for ( i = 0; i < m; i++)
   {
    printf("%d\t",a[i]);
   }

   printf("\n Array b:");
   for(i=0;i<n;i++){
    printf("%d\t",b[i]);
   }
   printf("\n Merged Array c:");
   for(i=0;i<m+n;i++){
    printf("%d\t",c[i]);
   }  

}