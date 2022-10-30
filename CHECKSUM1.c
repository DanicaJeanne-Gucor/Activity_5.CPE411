#include<stdio.h>
#include<math.h>

int sender(int arr[10], int n){

    int cs, i;
    int sum = 0;

    printf("\n--Sender--\n");
    for(i = 0; i < n; i++)
    sum += arr[i];
    printf("Sum: %d", sum);

    cs =~ sum;
    printf("\nChechsum: %d", cs);
    return cs;
}

void receiver(int arr[10], int n, int send){

    int cs, i;
    int sum = 0;

    printf("\n\n--Reciever--\n");
    for(i = 0; i < n; i++)
    sum += arr[i];
    printf("Sum: %d", sum);

    sum = sum + send;
    cs =~ sum;
    printf("\nChecksum: %d", cs);
}

void main(){
    int n,send;

    printf("Size: ");
    scanf("%d", &n);
    int arr[n];

    printf("Elements--\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    send = sender(arr, n);
    receiver(arr, n, send);
}
