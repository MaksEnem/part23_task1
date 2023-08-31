#include <iostream>

#define NUMBER(day) #day
#define DAY1 NUMBER(Monday)
#define DAY2 NUMBER(Tuesday)
#define DAY3 NUMBER(Wednesday)
#define DAY4 NUMBER(Thursday)
#define DAY5 NUMBER(Friday)
#define DAY6 NUMBER(Saturday)
#define DAY7 NUMBER(Sunday)

int main()
{
    int day;

    do {

        std::cout << "Enter the number of the day of the week: ";
        std::cin >> day;

    } while (day < 1 || day > 7);


    if (day == 1) {

        std::cout << DAY1;

    }
    else if (day == 2) {

        std::cout << DAY2;

    }
    else if (day == 3) {

        std::cout << DAY3;

    }
    else if (day == 4) {

        std::cout << DAY4;

    }
    else if (day == 5) {

        std::cout << DAY5;

    }
    else if (day == 6) {

        std::cout << DAY6;

    }
    else if (day == 7) {

        std::cout << DAY7;

    }

}