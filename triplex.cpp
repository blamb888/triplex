#include <iostream>

int main()
{
    // Print intro message to terminal
    std::cout << "You are an intrepid adventurer but this door isn't going to budge.";
    std::cout << std::endl;
    std::cout << "You'll need to enter the right runes to continue...\n";

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 runes in the code" << std::endl;
    std::cout << "+ The runes add up to: " << CodeSum << std::endl;
    std::cout << "+ The product of the runes is: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You have etched: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if ((GuessSum == CodeSum) && (GuessProduct == CodeProduct)) {
      std::cout << "The door opens and you may proceed..." << std::endl;
      std::cout << "Well done, wizard." << std::endl;
    } else {
      std::cout << "You fool!" << std::endl;
      std::cout << "You have guessed...poorly" << std::endl;
      std::cout << "You take 10 poison damage as noxious gas fills the room." << std::endl;
    }

    return 0;
}
