#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int linSearch(int arr[], int val ){
    int i;
    for(i=0; i<sizeof(arr[]); i++){
        if(arr[i]==val){
            return val;
        }
    }
    return -1;
}

int main(){



    return 0;
}