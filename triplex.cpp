#include <iostream>

void PrintIntro(int Difficulty)
{
  if (Difficulty <= 1)
  {
    std::string PlayerResponse;
    // Print intro message to terminal
    std::cout << "\n\n";
    std::cout << R"(
            _    .  ,   .           .
        *  / \_ *  / \_      _  *        *   /\'__        *
          /    \  /    \,   ((        .    _/  /  \  *'.
    .   /\/\  /\/ :' __ \_  `          _^/  ^/    `--.
        /    \/  \  _/  \-'\      *    /.' ^_   \_   .'\  *
      /\  .-   `. \/     \ /==~=-=~=-=-;.  _/ \ -. `_/   \
    /  `-.__ ^   / .-'.--\ =-=~_=-=~=^/  _ `--./ .-'  `-
    /     `.  / /       `.~-^=-=~=^=.-'      '-._ `._
    You have come accross a cave in the mountains during your travels...
    )" << '\n';
    // std::cout << "Do you enter the cave? y/n\n";
    // std::cin >> PlayerResponse;
    // if (PlayerResponse == "y")
    // {
    std::cout << "You bravely enter the cave. You travel deep and come across a door.\n";
    std::cout << "You are an intrepid adventurer but this door isn't going to budge.\n";
    std::cout << "There seems to be a level " << Difficulty << " enchantment sealing it.\n";
    std::cout << "You'll need to enter the right runes to continue...\n\n";
  }
  else
  {
    std::cout << "\n\n";
    std::cout << R"(
              ______
      ,-' ;  ! `-.
    / :  !  :  . \
    |_ ;   __:  ;  |
    )| .  :)(.  !  |
    |"    (##)  _  |
    |  :  ;`'  (_) (
    |  :  :  .     |
    )_ !  ,  ;  ;  |
    || .  .  :  :  |
    |" .  |  :  .  |
    |_____;----.___|
      )" << "\n";
    std::cout << "\nYou travel deeper into the cave and come upon another enchanted door.\n";
    std::cout << "There seems to be a level " << Difficulty << " enchantment sealing it.\n";
    std::cout << "You'll need to enter the right runes to continue...\n\n";

    // std::cout << "You decide it wiser to continue your journey under the light of the stars.\n";
    // std::cout << "You will never know what treasure might have been hidden within.\n";
    // std::cout << "You grow to a ripe old age with the thought haunting you.\n";
    // std::cout << "It drives you mad and you leave this mortal coil all the more miserable for it.\n";
  }
}

bool PlayGame(int Difficulty)
{
  PrintIntro(Difficulty);
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
    return true;
  }
  else
  {
    std::cout << "\nYou fool!";
    std::cout << "\nYou have guessed...poorly\n";
    std::cout << "\n☠️  🤢 You take 10 poison damage as noxious gas fills the room.🤢 ☠️\n";
    return false;
  }
}

int main()
{
  int LevelDifficulty = 1;
  int const MaxDifficulty = 5;

  while (LevelDifficulty <= MaxDifficulty) // Loop until all levels are completed
  {
      bool bLevelComplete = PlayGame(LevelDifficulty);
      std::cin.clear(); // Clears any errors
      std::cin.ignore(); // Discards the buffer

      if (bLevelComplete)
      {
          ++LevelDifficulty;
      }

  }
    return 0;
}
