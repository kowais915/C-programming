#include <stdio.h>

void set_southwest(int lat, int lon){
    lat = lat + 1;
    lon = lon - 1;

}
int main(){
    int latitude = 34;
    int longitude = 45;
// passing the function LOCAL VARIABLES
    set_southwest(latitude, longitude);

    printf("%i, %i", latitude, longitude);

}