#include <stdio.h>

// void set_southwest(int lat, int lon){
//     lat = lat + 1;
//     lon = lon - 1;

// }
// int main(){
//     int latitude = 34;
//     int longitude = 45;
// passing the function LOCAL VARIABLES
//     set_southwest(latitude, longitude);

//     printf("%i, %i", latitude, longitude);
/* Though we expect the value of latitude to be decreased while that of longitude to be increased.
But the values did not change. That is because the function copies the values of the local variables into the lat and lon. As a result, the local variables of set_southwest is changed.
*/
  void set_southwest(int *lat, int *ion){
        *lat = *lat - 1;
        *ion = *ion + 1;

    }
int main(){
  
int latitude = 34;
int longitude = 45;
set_southwest(&latitude, &longitude);

printf("The latest values of latitude is:  %i and longitude %i", latitude, longitude);


   

}