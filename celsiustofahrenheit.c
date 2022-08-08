#include<stdio.h>
float convertTemp(float celsius);
int main(){
    float m;
    printf("Enter the value: ");
    scanf("%f",&m);
    printf("The celsious value is %f\n",m);
    float far = convertTemp(m);
    printf("The farn value is %f\n",far);

    return 0;

}
float convertTemp(float celsius){
  float far = celsius * (9.0/5.0) +32;
  return far;
}
