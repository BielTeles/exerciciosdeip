#include <stdio.h>
#include <math.h>

int main()
{
    double massTon, massKg, accel, seconds, speed, speedKmh,  distance, workDone;
     
    scanf("%lf%lf%lf", &massTon, &accel, &seconds);

    massKg = massTon * 1000;

    speed = accel * seconds;

    distance = (accel* (seconds*seconds)) / 2;
     
    workDone =  (massKg * (speed * speed)) / 2;

    speedKmh = speed * 3.6;


    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", speedKmh, distance, workDone);

    return 0;
}