 #include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

void printDays(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        printf("Number of days = 31");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("Number of days = 30");
    else if (month == 2)
    {
        if (isLeapYear(year))
            printf("Number of days = 29");
        else
            printf("Number of days = 28");
    }
    else
        printf("Invalid month");
}

int main()
{
    int year, month;

    printf("Enter year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printDays(month, year);

    return 0;
}