// MidTerm_Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    srand(time(NULL));

    int r = 0;
    std::string answer = "";

    std::string q1 = "What is my name?";
    std::string q2 = "What is my favorite color?";
    std::string q3 = "What is the capital of Maine?";
    std::string q4 = "What language do they speak in Greece?";

    std::string questions[] = { q1, q2, q3, q4 };


    ////////
    r = rand() % 4;

    switch (r)
    {
    case 0:
        std::cout << questions[0] << "\n";

        std::cout << "\t" << "1.) Patrick" << "\n" <<
            "\t" << "2.) Peter" << "\n" <<
            "\t" << "3.) James" << "\n" <<
            "\t" << "4.) John Jacob JingleHeimer Smith" << "\n";

        std::cout << "\n" << "What is your guess?" << "\n";
        std::cin >> answer;
        if (answer == "1")
            std::cout << "Correct!";
        else if (answer == "4")
            std::cout << "Is my name your name too?";
        else
            std::cout << "Wrong...";
        break;

    case 1:
        std::cout << questions[1] << "\n";

        std::cout << "\t" << "1.) Red" << "\n" <<
            "\t" << "2.) Purple" << "\n" <<
            "\t" << "3.) Blue" << "\n" <<
            "\t" << "4.) I don't know" << "\n";

        std::cout << "\n" << "What is your guess?" << "\n";
        std::cin >> answer;
        if (answer == "4")
            std::cout << "Correct!";
        else
            std::cout << "Wrong...";
        break;

    case 2:
        std::cout << questions[2] << "\n";

        std::cout << "\t" << "1.) Bangor" << "\n" <<
            "\t" << "2.) Portland" << "\n" <<
            "\t" << "3.) Augusta" << "\n" <<
            "\t" << "4.) Bar Harbor" << "\n";

        std::cout << "\n" << "What is your guess?" << "\n";
        std::cin >> answer;
        if (answer == "3")
            std::cout << "Correct!";
        else
            std::cout << "Wrong...";
        break;

    case 3:
        std::cout << questions[3] << "\n";

        std::cout << "\t" << "1.) Greece" << "\n" <<
            "\t" << "2.) Greek" << "\n" <<
            "\t" << "3.) Grease" << "\n" <<
            "\t" << "4.) Hungarian" << "\n";

        std::cout << "\n" << "What is your guess?" << "\n";
        std::cin >> answer;
        if (answer == "2")
            std::cout << "Correct!";
        else
            std::cout << "Wrong...";
        break;
    }


    std::cout << std::endl;
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
