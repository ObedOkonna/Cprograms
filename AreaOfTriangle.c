    /*This is a sample program that allows the user to input values
    of the lengths of a triangle, and then it
    calculates the area of the figure and displays it on the screen for the user */
    #include <stdio.h>
    main()
    {
        float a, b, c, s, area;
        char choice;

        do {
            printf("Enter the value of a:\n");
            scanf(" %f", & a);

            printf("Enter the value of b:\n");
            scanf(" %f", & b);

            printf("Enter the value of c:\n");
            scanf(" %f", & c);

            s = (a + b + c ) / 2;
            area= sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area of the rectangular figure is %f\n\n", area);
            printf("Do you want to enter another pair of dimensions");
            printf("to calculate the area (Y/N):\n\n");
            scanf(" %c", &choice);
            //if the user enters any other alphabet other than N or n, 
            //the loop will continue to run
            
        } 
        while (choice != 'N'&& choice != 'n');

        return 0;
    }