#include<stdio.h>
#include<math.h>

//submitted by: syeda khola abid
//reg #: SP23-BSE-078

int main(void)
{
    double LA1,LA2,LO1,LO2;
    const float avg =6371.0;
    const float PI= 3.1415;
    printf("Enter the Longitude and Latitude of origin in Degree \n");
    scanf("%f %f",&LA1 , &LA2);

    printf("enter longitude and latitudeof destination\n");
    scanf("%f %f", &LO1 , &LO2);

    double a=(LA1 * PI)/180;
    double b=(LA2 * PI)/180;
    double c=(LO1 * PI)/180;
    double d=(LO2 * PI)/180;
    
    double difference = d-c;

    double distance = acos(sin(a)*sin(b)+cos(a)*cos(b)*cos(difference)*(avg));

    printf("airDistance : %f ",distance);
    return 0;

}