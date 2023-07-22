#include <iostream>

int main()
{
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    std::string leader;

    //Getting information
    std::cout << "Welcome to Lost Fortune!\n";
    std::cout << "Please enter the following for your adventure!\n";

    std::cout << "Enter a number: ";
    std::cin >> adventurers;

    std::cout << "Enter a smaller number than previously given: ";
    std::cin >> killed;

    survivors = adventurers - killed;

    std::cout << "Enter your last name: ";
    std::cin >> leader;

    //Tell the story
    std::cout << "\nA brave group of " << adventurers << " adventurers Set out to find grand treasure";
    std::cout << "\nheld ransom by  a group of nasty bandits!";
    std::cout << "\nThe group was under the leadership of captain "<<leader<<", A legendary bounty hunter.";

    std::cout << "\nSuddenly, whilst searching an unknown territory, they set eyes on the evil band of rougues.";
    std::cout << "\nInstantly, the heroic "<< leader<<" set upon the bandits with his band of "<<adventurers;
    std::cout << "\nUnfortunately, while " << leader << " cut through each adversary with ease, his party couldnt say the same.";
    std::cout << "\nAnd as they stood victorious among the slain, " << killed << " adventurers met their fate leaving" << survivors;
    std::cout << "\nremaining. And though they were disheartend over their loss, the greed in the heros prevailed \nas they sunk into the spoils.";
    std::cout << "\nBetween the " << survivors << " survivors, they split " << GOLD_PIECES << " gold pieces. Of course " << leader << " Kept " << GOLD_PIECES % survivors << " for himself...\n";



    return 0;



}