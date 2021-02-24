// Cards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
enum  Suit{Heart = 1, Diamond = 2, Club = 3, Spade = 4};
enum  Rank{ Ace = 1,Two,Three,Four,Five,Six,Seven,Eight,Nine,Ten,Jack = 11,Queen = 12,King = 13 };

std::ostream& operator<<(std::ostream& out, Suit s) {
    std::map<Suit, std::string> strings;
    if (strings.size() == 0) {
#define INSERT_ELEMENT(p) strings[p] = #p
		INSERT_ELEMENT(Heart);
		INSERT_ELEMENT(Diamond);
        INSERT_ELEMENT(Club);
        INSERT_ELEMENT(Spade);
#undef INSERT_ELEMENT
    }
    return  out << strings[s];
}
std::ostream& operator<<(std::ostream& out, Rank s) {
	std::map<Rank, std::string> strings;
	if (strings.size() == 0) {
#define INSERT_ELEMENT(p) strings[p] = #p
		INSERT_ELEMENT(Ace);
		INSERT_ELEMENT(Two);
		INSERT_ELEMENT(Three);
		INSERT_ELEMENT(Four);
		INSERT_ELEMENT(Five);
		INSERT_ELEMENT(Six);
		INSERT_ELEMENT(Seven);
		INSERT_ELEMENT(Eight);
		INSERT_ELEMENT(Nine);
		INSERT_ELEMENT(Ten);
		INSERT_ELEMENT(Jack);
		INSERT_ELEMENT(Queen);
		INSERT_ELEMENT(King);
#undef INSERT_ELEMENT
	}
	return  out << strings[s];
}

class Cards {
private:
    Suit c_type;
    Rank c_rank;
    bool available;
    
public:
    Cards(Rank value, Suit type,bool present);
    //virtual int value();
    //Suit CardType();
    void PrintCard();
    
};

Cards::Cards(Rank value, Suit type, bool present) :c_rank(value),c_type(type),available(present){}

void Cards::PrintCard() {
    std::cout << c_type;
}

  
int main()
{
    Rank r = Ace;
    Suit s = Heart;
    Cards* J = new Cards(r, s,true);
    J->PrintCard();
 
    return 0;
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
