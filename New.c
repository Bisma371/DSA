#include<stdio.h>

int main(){
    //Insertion of element

    // int arr[50],n,element,pos;

    // printf("Enter number of elements: ");
    // scanf("%d",&n);

    // printf("Enter elements: ");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    // printf("Enter element to insert: ");
    // scanf("%d",&element);

    // printf("Enter position: ");
    // scanf("%d",&pos);

    // if(pos<1||pos>n+1){
    //     printf("Invalid position!\n");
        
    // }
    // else{

    // for(int i=n;i>=pos;i--){
    //     arr[i]=arr[i-1];
    // }
    // }
    // arr[pos-1]=element;
    // n++;

    // printf("Array after insertion:\n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }

    //Searching of element

    // int arr[5]={2,45,67,12,34};
    // int key;
    // printf("Enter element to search: ");
    // scanf("%d",&key);

    // for(int i=0;i<5;i++){
    //     if(arr[i]==key){
    //         printf("Element found!");
    //         break;
    //     }
    // }

    //Traversing
    // int arr[5];
    // printf("Enter elments to insert:\n");
    // for(int i=0;i<5;i++){
    //     scanf("%d",&arr[i]);
    // }
    // printf("Your array is:\n");
    // for(int i=0;i<5;i++){
    //     printf("%d ",arr[i]);
    // }

    //Insertion at the end
    // int arr[10],n,element;
    // printf("Enter no. of elements: ");
    // scanf("%d",&n);

    // printf("Enter array elements: \n");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    // printf("Enter element to insert at the end: ");
    // scanf("%d",&element);

    // arr[n]=element;
    // n++;

    // printf("Array after insertion:\n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    
    //Insertion at the beginning
    // int arr[10],n,element;
    // printf("Enter no. of elements: ");
    // scanf("%d",&n);

    // printf("Enter array elements: \n");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    // printf("Enter element to insert at the beginning: ");
    // scanf("%d",&element);

    // for(int i=n;i>0;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[0]=element;
    // n++;

    // printf("Array after insertion:\n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }

    //Deletion
    int arr[10],n,pos;
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter element position to delete: ");
    scanf("%d",&pos);
    
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;

    printf("Array after deletion:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}