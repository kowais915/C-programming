#include <stdio.h>


struct gamestore{
    const char *name;
    int numberOfgames;
    const char *location;
    
};

void func(struct gamestore store){
    printf("The name of the store is %s. It is located in %s and it has %d of games", store.name, store.location, store.numberOfgames);
}


int main(){

struct gamestore nyc;

nyc.name ="James & sons";
nyc.numberOfgames = 34;
nyc.location = "Times Square";

func(nyc);


 return 0;   
}