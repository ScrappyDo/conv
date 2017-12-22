
#include <stdlib.h>
#include <stdio.h>
void Withoutid();
void FromCelsus();
void FromFahr();
void FromKelvin();
float value, fahr, kel, cel;

int main(int argc, char **argv)
{
    char id = 0 ;                     /*accepted values*/
    if (argc == 1)
    {
        scanf("%f", &value);
        do id = getchar();
        while (id == ' ');
    }
    else if (argc > 1)
    {
        value = atof(argv[1]);
        if (argc == 3)
            id = argv[2][0];
    }
    
    if (id == 'C'|| id == 'c')        /* The determination of the scale for counting*/
    {
        FromCelsus();
    }
    else if (id == 'f'|| id == 'F' )
    {
        FromFahr();
    }
    else if (id == 'k'|| id == 'K' )
    {
        FromKelvin();
    }
    else
    {
        Withoutid();
    }
    
}
void FromCelsus(){                    /*Translation from celsius to other two scaleand conclusion result*/
    if (value > -273.15 )
    {
    fahr = value*1.80+32.00;
    kel = value+273.15;
    printf("%.2f F \n%.2f K \n ", fahr, kel);
    }
    else
    {
        printf("Please try again (temperature below, then absolute zero)\n");
    }
    
}
void FromFahr(){                       /*Translation from Farenheit to other two scale and conclusion result*/
    if (value >= -459.67 )
    {
    cel = (5.00/9.00)*(value-32.00);
    kel = cel + 273.15;
    printf("%.2f C \n%.2f K \n ", cel, kel);
    }
    else
    {
        printf("Please try again (temperature below, then absolute zero)\n");
    }
}
void FromKelvin(){                     /*Translation from Kelvin to other two scale and conclusion result*/
    if (value >= 0.00 )
    {
    cel = value - 273.15;
    fahr = cel*1.80+32.00;
    printf("%.2f C \n%.2f F \n ", cel, fahr);
    }
    else
    {
        printf("Please try again (temperature below, then absolute zero)\n");
    }
}
void Withoutid()                    /*Translation degrees without scale and conclusion resalt in three scale*/
{
    if (value >= -273.15 )
    {
    cel = value;
    fahr = value*1.80+32.00;
    kel = value+273.15;
    printf("%.2f C\n%.2f F \n%.2f K \n ", cel, fahr, kel);
    }
    else
    {
        printf("Please try again (temperature below, then absolute zero)\n");
    }
}
