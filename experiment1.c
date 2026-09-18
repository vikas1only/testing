
int main()
{
    char choice; // Changed to char for %c
    float a, b;
    float c;     // Changed to float to handle division accuracy

    printf("-----menu druven calculator-------\n");
    printf("A for addition\n");
    printf("B for substration\n");
    printf("C for multiplication\n");
    printf("D for division\n");
    printf("Enter your choice (A-D): ");
    scanf(" %c", &choice);
    
    printf("enter the number \n");
    scanf("%f %f",&a,&b);
    
    switch(choice)
    {
        case 'a': 
        case 'A': // Corrected case syntax
            c = a + b;
            printf("the anser of adddition is %f\n", c); // Added %f
            break;
        case 'b': 
        case 'B':
           c = a - b;
           printf("the answer of subtraction is %f\n", c);
           break;
        case 'c':
        case 'C':
             c = a * b;
             printf("the answer of multiply is %f\n", c);
             break;
        case 'd':
        case 'D':
           c = a / b;
           printf("the anser of division is %f\n", c);
           break;
        case 'e':
        case 'E':
          c = (int)a % (int)b; // Modulo only works with integers
          printf("the answer of mod is %f\n", c);
          break;
        default:
               printf("invalid value \n");
    }
    return 0;
}

