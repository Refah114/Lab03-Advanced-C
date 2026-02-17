#include <stdio.h>

int main()
{
    struct car
    {
        char maker[40];
        char model[40];
        int year;
    };

    struct car FirstCar = { "Ford", "Mustang", 1996 };
    struct car SecondCar;

    printf("First Car: %s, %s, %d\n",
           FirstCar.maker,
           FirstCar.model,
           FirstCar.year);

    SecondCar = FirstCar;

    printf("Second Car: %s, %s, %d\n",
           SecondCar.maker,
           SecondCar.model,
           SecondCar.year);

    printf("Size of FirstCar: %zu Bytes\n", sizeof(FirstCar));
    printf("Size of SecondCar: %zu Bytes\n", sizeof(SecondCar));

    return 0;
}
