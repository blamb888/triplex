#include <iostream>

int main()
{
    // Print intro message to terminal
    std::cout << "You are an intrepid adventurer but this door isn't going to budge.\n";
    std::cout << "You'll need to enter the right runes to continue...\n\n";

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to terminal
    std::cout << "+ There are 3 runes in the code\n";
    std::cout << "+ The runes add up to: " << CodeSum;
    std::cout << "\n+ The product of the runes is: " << CodeProduct << std::endl;

    std::cout << "\n ⚒️  Etch your runes here: ⚒️\n";
    std::cout << "=================================\n";
    // Store Player gueess
    int GuessA, GuessB, GuessC;
    std::cout << "⚒️   ", std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "=================================\n";


    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "\nYou have etched: " << GuessA << GuessB << GuessC;

    // Check if Player's guess is correct
    if ((GuessSum == CodeSum) && (GuessProduct == CodeProduct))
    {
      std::cout << "\n🗝️ The door opens and you may proceed...🗝️\n";
      std::cout << "\n🧙‍♂️ Well done, wizard.🧙‍♂️\n";
    }
    else
    {
      std::cout << "\nYou fool!";
      std::cout << "\nYou have guessed...poorly\n";
      std::cout << "\n☠️  🤢 You take 10 poison damage as noxious gas fills the room.🤢 ☠️\n";
    }

    return 0;
}
