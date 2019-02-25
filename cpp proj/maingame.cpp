#include <iostream>
#include <iomanip>
#include <ctime>
#include <random>
#include "stdfix.h"
#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include<cassert>
#include<SFML/Audio.hpp>

using namespace std;

int main();

void swapCards();
sf::RenderWindow window{ sf::VideoMode(800,600), "Card Games"};
class Card {
  private:
    int rank;
    int suit;

  public:
    Card() {
      srand(time(NULL));
      rank = (1 + (std::rand() % (int)(13)));
      suit = (1 + (std::rand() % (int)(4)));
    }

    int get_rank() {
      return rank;
    }

    string get_rank_string() {
      if (rank == 1) return "Ace";
      if (rank == 2) return "Two";
      if (rank == 3) return "Three";
      if (rank == 4) return "Four";
      if (rank == 5) return "Five";
      if (rank == 6) return "Six";
      if (rank == 7) return "Seven";
      if (rank == 8) return "Eight";
      if (rank == 9) return "Nine";
      if (rank == 10) return "Ten";
      if (rank == 11) return "Jack";
      if (rank == 12) return "Queen";
      if (rank == 13) return "King";
      else return "Uknown rank";
    }

    int get_suit() {
      return suit;
    }

    string get_suit_string() {
      if (suit == 1) return "Diamonds";
      if (suit == 2) return "Hearts";
      if (suit == 3) return "Spades";
      if (suit == 4) return "Clubs";
      else return "Unknown suit";
    }
};

class Player {
  public:
    string name;


  public:
    Player() {


    }

void maingame() {
  int dealer_rank;
  char coc;

  int player_rank;
  int gameover = 0;
  float bet;
  float height;
    float width;
  char choice;
  char yesno;
height = window.getSize().x;
    width = window.getSize().y;
  Card card;
  Player player = Player();
  sf::Texture cards;
  sf::Sprite ded;
  sf::Texture t;
  sf::Sprite s;
  t.loadFromFile("img/background.jpg");
  s.setTexture(t);
  sf::Font font;
  sf::Text txt;
  assert(font.loadFromFile("font/CoffeeTin.ttf"));
  txt.setFont(font);
  txt.setCharacterSize(95);
  txt.setString("Highness Card game");
   sf::Texture backe;
    sf::Sprite backcard;
    assert(backe.loadFromFile("img/back.png"));
    backcard.setTexture(backe);
    backcard.setPosition(200 , 150 + 300 );
    sf::Texture button51;
        sf::Sprite button51img;
        assert(button51.loadFromFile("img/high.png"));;
        button51img.setPosition(height/4 + 100, width/4 + 10);

        float button51Width =button51img.getLocalBounds().width;
        float button51Height = button51img.getLocalBounds().height;

        button51img.setTexture(button51);

        sf::Texture button52;
        sf::Sprite button52img;
        assert(button52.loadFromFile("img/LOW.png"));
        button52img.setPosition(height/4 + 100, width/4 + 150);

        float button52Width =button52img.getLocalBounds().width;
        float button52Height = button52img.getLocalBounds().height;

        button52img.setTexture(button52);


          sf::Texture button53;
        sf::Sprite button53img;
        assert(button53.loadFromFile("img/EQUAL.png"));
        button53img.setPosition(height/4 + 100, width/4 + 300);

        float button53Width =button53img.getLocalBounds().width;
        float button53Height = button53img.getLocalBounds().height;

        button53img.setTexture(button53);


    sf::Text tExt;
    sf::Font font2;
    assert(font2.loadFromFile("font/IndianPoker.ttf"));
    tExt.setFont(font2);
    tExt.setCharacterSize(15);
    tExt.setPosition(100, 100);
    tExt.setString("choose whether the next card will be higher, lower or equal");






    card = Card();
    dealer_rank = card.get_rank();

    cout << "You draw a " << card.get_rank_string()<< " of " << card.get_suit_string() <<endl;




    if(card.get_suit_string() == "Spades")
        if(card.get_rank_string() == "Ace")
            assert(cards.loadFromFile("img/Ace of Spades.png"));
        else  if(card.get_rank_string() == "Two")
            assert(cards.loadFromFile("img/Two of Spades.png"));
        else  if(card.get_rank_string() == "Three")
            assert(cards.loadFromFile("img/Three of Spades.png"));
        else  if(card.get_rank_string() == "Four")
            assert(cards.loadFromFile("img/Four of Spades.png"));
        else  if(card.get_rank_string() == "Five")
            assert(cards.loadFromFile("img/Five of Spades.png"));
        else  if(card.get_rank_string() == "Six")
            assert(cards.loadFromFile("img/Six of Spades.png"));
        else  if(card.get_rank_string() == "Seven")
            assert(cards.loadFromFile("img/Seven of Spades.png"));
        else  if(card.get_rank_string() == "Eight")
            assert(cards.loadFromFile("img/Eight of Spades.png"));
        else  if(card.get_rank_string() == "Nine")
            assert(cards.loadFromFile("img/Nine of Spades.png"));
        else  if(card.get_rank_string() == "Ten")
            assert(cards.loadFromFile("img/Ten of Spades.png"));
        else  if(card.get_rank_string() == "Jack")
            assert(cards.loadFromFile("img/Jack of Spades.png"));
        else  if(card.get_rank_string() == "Queen")
            assert(cards.loadFromFile("img/Queen of Spades.png"));
        else  if(card.get_rank_string() == "King")
            assert(cards.loadFromFile("img/King of Spades.png"));
        else
            cout<<"no image"<<endl;
    else if(card.get_suit_string() == "Diamonds")
        if(card.get_rank_string() == "Ace")
            assert(cards.loadFromFile("img/Ace of Diamonds.png"));
        else  if(card.get_rank_string() == "Two")
            assert(cards.loadFromFile("img/Two of Diamonds.png"));
        else  if(card.get_rank_string() == "Three")
            assert(cards.loadFromFile("img/Three of Diamonds.png"));
        else  if(card.get_rank_string() == "Four")
            assert(cards.loadFromFile("img/Four of Diamonds.png"));
        else  if(card.get_rank_string() == "Five")
            assert(cards.loadFromFile("img/Five of Diamonds.png"));
        else  if(card.get_rank_string() == "Six")
            assert(cards.loadFromFile("img/Six of Diamonds.png"));
        else  if(card.get_rank_string() == "Seven")
            assert(cards.loadFromFile("img/Seven of Diamonds.png"));
        else  if(card.get_rank_string() == "Eight")
            assert(cards.loadFromFile("img/Eight of Diamonds.png"));
        else  if(card.get_rank_string() == "Nine")
            assert(cards.loadFromFile("img/Nine of Diamonds.png"));
        else  if(card.get_rank_string() == "Ten")
            assert(cards.loadFromFile("img/Ten of Diamonds.png"));
        else  if(card.get_rank_string() == "Jack")
            assert(cards.loadFromFile("img/Jack of Diamonds.png"));
        else  if(card.get_rank_string() == "Queen")
            assert(cards.loadFromFile("img/Queen of Diamonds.png"));
        else  if(card.get_rank_string() == "King")
            assert(cards.loadFromFile("img/King of Diamonds.png"));
        else
            cout<<"no image"<<endl;
     else if(card.get_suit_string() == "Clubs")
        if(card.get_rank_string() == "Ace")
            assert(cards.loadFromFile("img/Ace of Clubs.png"));
        else  if(card.get_rank_string() == "Two")
            assert(cards.loadFromFile("img/Two of Clubs.png"));
        else  if(card.get_rank_string() == "Three")
            assert(cards.loadFromFile("img/Three of Clubs.png"));
        else  if(card.get_rank_string() == "Four")
            assert(cards.loadFromFile("img/Four of Clubs.png"));
        else  if(card.get_rank_string() == "Five")
            assert(cards.loadFromFile("img/Five of Clubs.png"));
        else  if(card.get_rank_string() == "Six")
            assert(cards.loadFromFile("img/Six of Clubs.png"));
        else  if(card.get_rank_string() == "Seven")
            assert(cards.loadFromFile("img/Seven of Clubs.png"));
        else  if(card.get_rank_string() == "Eight")
            assert(cards.loadFromFile("img/Eight of Clubs.png"));
        else  if(card.get_rank_string() == "Nine")
            assert(cards.loadFromFile("img/Nine of Clubs.png"));
        else  if(card.get_rank_string() == "Ten")
            assert(cards.loadFromFile("img/Ten of Clubs.png"));
        else  if(card.get_rank_string() == "Jack")
            assert(cards.loadFromFile("img/Jack of Clubs.png"));
        else  if(card.get_rank_string() == "Queen")
            assert(cards.loadFromFile("img/Queen of Clubs.png"));
        else  if(card.get_rank_string() == "King")
            assert(cards.loadFromFile("img/King of Clubs.png"));
        else
            cout<<"no image"<<endl;
    else if(card.get_suit_string() == "Hearts")
        if(card.get_rank_string() == "Ace")
            assert(cards.loadFromFile("img/Ace of Hearts.png"));
        else  if(card.get_rank_string() == "Two")
            assert(cards.loadFromFile("img/Two of Hearts.png"));
        else  if(card.get_rank_string() == "Three")
            assert(cards.loadFromFile("img/Three of Hearts.png"));
        else  if(card.get_rank_string() == "Four")
            assert(cards.loadFromFile("img/Four of Hearts.png"));
        else  if(card.get_rank_string() == "Five")
            assert(cards.loadFromFile("img/Five of Hearts.png"));
        else  if(card.get_rank_string() == "Six")
            assert(cards.loadFromFile("img/Six of Hearts.png"));
        else  if(card.get_rank_string() == "Seven")
            assert(cards.loadFromFile("img/Seven of Hearts.png"));
        else  if(card.get_rank_string() == "Eight")
            assert(cards.loadFromFile("img/Eight of Hearts.png"));
        else  if(card.get_rank_string() == "Nine")
            assert(cards.loadFromFile("img/Nine of Hearts.png"));
        else  if(card.get_rank_string() == "Ten")
            assert(cards.loadFromFile("img/Ten of Hearts.png"));
        else  if(card.get_rank_string() == "Jack")
            assert(cards.loadFromFile("img/Jack of Hearts.png"));
        else  if(card.get_rank_string() == "Queen")
            assert(cards.loadFromFile("img/Queen of Hearts.png"));
        else  if(card.get_rank_string() == "King")
            assert(cards.loadFromFile("img/King of Hearts.png"));
        else
            cout<<"no image"<<endl;

    ded.setTexture(cards);
    ded.setPosition(200, 150);

  t.loadFromFile("img/background.jpg");
 s.setTexture(t);
 sf::Event Event;
 while(window.isOpen())
        {
            sf::Event Event;
        while (window.pollEvent(Event)){
            switch(Event.type)
            {
             case sf::Event::Closed:
             {
                    window.close();
                    break;
             }
             case sf::Event::MouseButtonPressed:
                 {

                 sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                sf::Vector2f mousePosF( static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                 if(button51img.getGlobalBounds().contains(mousePosF))
                    {
                           cout<<"CLICKED, YAY"<<endl;
                        choice = 'h';
                        goto HIGH;


                    }
                else if(button52img.getGlobalBounds().contains(mousePosF))
                    {
                        choice = 'l';
                        cout<<"CLICKED, YAY"<<endl;
                        goto HIGH;

                    }
                else if(button53img.getGlobalBounds().contains(mousePosF))
                    {
                           cout<<"CLICKED, YAY"<<endl;
                        choice = 'e';
                            goto HIGH;





                    }

                break;
                }
            }
        }
    window.clear(sf::Color::White);
    window.draw(s);
    window.draw(txt);
    window.draw(backcard);
    window.draw(ded);
    window.draw(tExt);
    window.draw(button51img);
    window.draw(button52img);
    window.draw(button53img);
    window.display();

    }




HIGH:window.clear();
    card = Card();
    player_rank = card.get_rank();


    cout << "You draw a " << card.get_rank_string()
         << " of " << card.get_suit_string() << ".\n";

    sf::Sprite ded2;
    sf::Texture carde;


    if(card.get_suit_string() == "Spades")
        if(card.get_rank_string() == "Ace")
            assert(carde.loadFromFile("img/Ace of Spades.png"));
        else  if(card.get_rank_string() == "Two")
            assert(carde.loadFromFile("img/Two of Spades.png"));
        else  if(card.get_rank_string() == "Three")
            assert(carde.loadFromFile("img/Three of Spades.png"));
        else  if(card.get_rank_string() == "Four")
            assert(carde.loadFromFile("img/Four of Spades.png"));
        else  if(card.get_rank_string() == "Five")
            assert(carde.loadFromFile("img/Five of Spades.png"));
        else  if(card.get_rank_string() == "Six")
            assert(carde.loadFromFile("img/Six of Spades.png"));
        else  if(card.get_rank_string() == "Seven")
            assert(carde.loadFromFile("img/Seven of Spades.png"));
        else  if(card.get_rank_string() == "Eight")
            assert(carde.loadFromFile("img/Eight of Spades.png"));
        else  if(card.get_rank_string() == "Nine")
            assert(carde.loadFromFile("img/Nine of Spades.png"));
        else  if(card.get_rank_string() == "Ten")
            assert(carde.loadFromFile("img/Ten of Spades.png"));
        else  if(card.get_rank_string() == "Jack")
            assert(carde.loadFromFile("img/Jack of Spades.png"));
        else  if(card.get_rank_string() == "Queen")
            assert(carde.loadFromFile("img/Queen of Spades.png"));
        else  if(card.get_rank_string() == "King")
            assert(carde.loadFromFile("img/King of Spades.png"));
        else
            cout<<"no image"<<endl;
    else if(card.get_suit_string() == "Diamonds")
        if(card.get_rank_string() == "Ace")
            assert(carde.loadFromFile("img/Ace of Diamonds.png"));
        else  if(card.get_rank_string() == "Two")
            assert(carde.loadFromFile("img/Two of Diamonds.png"));
        else  if(card.get_rank_string() == "Three")
            assert(carde.loadFromFile("img/Three of Diamonds.png"));
        else  if(card.get_rank_string() == "Four")
            assert(carde.loadFromFile("img/Four of Diamonds.png"));
        else  if(card.get_rank_string() == "Five")
            assert(carde.loadFromFile("img/Five of Diamonds.png"));
        else  if(card.get_rank_string() == "Six")
            assert(carde.loadFromFile("img/Six of Diamonds.png"));
        else  if(card.get_rank_string() == "Seven")
            assert(carde.loadFromFile("img/Seven of Diamonds.png"));
        else  if(card.get_rank_string() == "Eight")
            assert(carde.loadFromFile("img/Eight of Diamonds.png"));
        else  if(card.get_rank_string() == "Nine")
            assert(carde.loadFromFile("img/Nine of Diamonds.png"));
        else  if(card.get_rank_string() == "Ten")
            assert(carde.loadFromFile("img/Ten of Diamonds.png"));
        else  if(card.get_rank_string() == "Jack")
            assert(carde.loadFromFile("img/Jack of Diamonds.png"));
        else  if(card.get_rank_string() == "Queen")
            assert(carde.loadFromFile("img/Queen of Diamonds.png"));
        else  if(card.get_rank_string() == "King")
            assert(carde.loadFromFile("img/King of Diamonds.png"));
        else
            cout<<"no image"<<endl;
     else if(card.get_suit_string() == "Clubs")
        if(card.get_rank_string() == "Ace")
            assert(carde.loadFromFile("img/Ace of Clubs.png"));
        else  if(card.get_rank_string() == "Two")
            assert(carde.loadFromFile("img/Two of Clubs.png"));
        else  if(card.get_rank_string() == "Three")
            assert(carde.loadFromFile("img/Three of Clubs.png"));
        else  if(card.get_rank_string() == "Four")
            assert(carde.loadFromFile("img/Four of Clubs.png"));
        else  if(card.get_rank_string() == "Five")
            assert(carde.loadFromFile("img/Five of Clubs.png"));
        else  if(card.get_rank_string() == "Six")
            assert(carde.loadFromFile("img/Six of Clubs.png"));
        else  if(card.get_rank_string() == "Seven")
            assert(carde.loadFromFile("img/Seven of Clubs.png"));
        else  if(card.get_rank_string() == "Eight")
            assert(carde.loadFromFile("img/Eight of Clubs.png"));
        else  if(card.get_rank_string() == "Nine")
            assert(carde.loadFromFile("img/Nine of Clubs.png"));
        else  if(card.get_rank_string() == "Ten")
            assert(carde.loadFromFile("img/Ten of Clubs.png"));
        else  if(card.get_rank_string() == "Jack")
            assert(carde.loadFromFile("img/Jack of Clubs.png"));
        else  if(card.get_rank_string() == "Queen")
            assert(carde.loadFromFile("img/Queen of Clubs.png"));
        else  if(card.get_rank_string() == "King")
            assert(carde.loadFromFile("img/King of Clubs.png"));
        else
            cout<<"no image"<<endl;
    else if(card.get_suit_string() == "Hearts")
        if(card.get_rank_string() == "Ace")
            assert(carde.loadFromFile("img/Ace of Hearts.png"));
        else  if(card.get_rank_string() == "Two")
            assert(carde.loadFromFile("img/Two of Hearts.png"));
        else  if(card.get_rank_string() == "Three")
            assert(carde.loadFromFile("img/Three of Hearts.png"));
        else  if(card.get_rank_string() == "Four")
            assert(carde.loadFromFile("img/Four of Hearts.png"));
        else  if(card.get_rank_string() == "Five")
            assert(carde.loadFromFile("img/Five of Hearts.png"));
        else  if(card.get_rank_string() == "Six")
            assert(carde.loadFromFile("img/Six of Hearts.png"));
        else  if(card.get_rank_string() == "Seven")
            assert(carde.loadFromFile("img/Seven of Hearts.png"));
        else  if(card.get_rank_string() == "Eight")
            assert(carde.loadFromFile("img/Eight of Hearts.png"));
        else  if(card.get_rank_string() == "Nine")
            assert(carde.loadFromFile("img/Nine of Hearts.png"));
        else  if(card.get_rank_string() == "Ten")
            assert(carde.loadFromFile("img/Ten of Hearts.png"));
        else  if(card.get_rank_string() == "Jack")
            assert(carde.loadFromFile("img/Jack of Hearts.png"));
        else  if(card.get_rank_string() == "Queen")
            assert(carde.loadFromFile("img/Queen of Hearts.png"));
        else  if(card.get_rank_string() == "King")
            assert(carde.loadFromFile("img/King of Hearts.png"));
        else
            cout<<"no image"<<endl;
    ded2.setTexture(carde);

    ded2.setPosition(200, 400);
    backcard.setPosition(200 , 150 + 300 );


 s.setTexture(t);


     while(window.isOpen())
    {
        sf::Event Event;
        while (window.pollEvent(Event))
        {
            switch(Event.type)
            {
            case sf::Event::Closed:
                    window.close();
                    break;

            case sf::Event::MouseButtonPressed:
                {
                   sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                    sf::Vector2f mousePosF( static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                    if(ded2.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        goto bett;
                    }
                    break;
                 }
            }
        }
        window.clear(sf::Color::White);
        window.draw(s);
        window.draw(ded);
        window.draw(txt);
        window.draw(ded2);
        window.display();

    }




bett:
        sf::Texture buttonwin;
        sf::Sprite buttonwinimg;
        assert(buttonwin.loadFromFile("img/PLAYAG.png"));
        buttonwinimg.setPosition(height/4 + 100, width/4 + 100);

        float buttonwinWidth =buttonwinimg.getLocalBounds().width;
        float buttonwinHeight = buttonwinimg.getLocalBounds().height;

        buttonwinimg.setTexture(buttonwin);

        sf::Texture buttonreturn;
        sf::Sprite buttonreturnimg;
        assert(buttonreturn.loadFromFile("img/MAIN.png"));
        buttonreturnimg.setPosition(height/4 + 100, width/4 + 200);

        float buttonreturnWidth =buttonreturnimg.getLocalBounds().width;
        float buttonreturnHeight = buttonreturnimg.getLocalBounds().height;

        buttonreturnimg.setTexture(buttonreturn);


        sf::Texture exit;
        sf::Sprite exitimg;
        assert(exit.loadFromFile("img/exit.png"));
        exitimg.setPosition(height/4 + 100, width/4 + 300);

        float exitWidth =exitimg.getLocalBounds().width;
        float exitHeight = exitimg.getLocalBounds().height;

        exitimg.setTexture(exit);
if ((choice == 'h' && dealer_rank < player_rank) ||(choice == 'l' && dealer_rank > player_rank) ||(choice == 'e' && dealer_rank == player_rank)) {


        sf::Text Wintext;
        Wintext.setFont(font2);
    Wintext.setCharacterSize(72);
    Wintext.setPosition(100, 100);
      Wintext.setString("WIN!!! Congratulations ");




     while(window.isOpen())
    {
        sf::Event Event;
        while (window.pollEvent(Event))
        {
            switch(Event.type)
            {
            case sf::Event::Closed:{
                    window.close();
                    break;}
            case sf::Event::MouseButtonPressed:
                {
                   sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                    sf::Vector2f mousePosF( static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                    if(buttonwinimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                            Player player;
                        player.maingame();
                    }
                    else if(buttonreturnimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                         window.clear();
                        main();
                    }
                    else if(exitimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        window.close();
                        system("pause");

                    }
                    break;
                 }
            }
        }

    window.clear(sf::Color::Black);
    window.draw(Wintext);
    window.draw(buttonwinimg);
    window.draw(buttonreturnimg);
    window.draw(exitimg);
    window.display();

    }
}
else
	{


              sf::Text Losetext;
        Losetext.setFont(font2);
    Losetext.setCharacterSize(72);
    Losetext.setPosition(100, 100);
    Losetext.setString("LOSE!!Too bad");
         while(window.isOpen())
    {
        sf::Event Event;
        while (window.pollEvent(Event))
        {
            switch(Event.type)
            {
            case sf::Event::Closed:
                    window.close();
                    break;
                        case sf::Event::MouseButtonPressed:
                {
                   sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                    sf::Vector2f mousePosF( static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                    if(buttonwinimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                            Player player;
                        player.maingame();
                    }
                    else if(buttonreturnimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                         window.clear();
                        main();
                    }
                                        else if(exitimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        system("pause");
                    }
                    break;
                 }
            }
        }
    window.clear(sf::Color::Black);
    window.draw(Losetext);
    window.draw(buttonwinimg);
    window.draw(buttonreturnimg);
    window.draw(exitimg);
    window.display();

    }
    }






}
};


class DeckOfCards
{
sf::Texture t;
sf::Sprite s;
sf::Font font;
sf::Text txt;


public:
    DeckOfCards()
    {
        welcome();

        resetDeck();
        resetCardCounter();
        resetSuitCounter();
        resetStats();

        deckNumber = 1; //set the first card to be dealt
                        //should be incremented whenever a card is dealt
        //setDealersHand();
        //setMyHand();


        srand( time( 0 ) );
    }

    void resetAll()
    {
        resetDeck();
        resetCardCounter();
        resetSuitCounter();
        resetStats();

        deckNumber = 1;

    }

    void shuffle()
    {
        resetDeck();

        int row;
        int column;


        for ( int card = 1; card <= 52; card++ )
        {
            do
            {
                row = rand() % 4;
                column = rand() % 13;
            } while( deck[ row ][ column ] != 0 );


            deck[ row ][ column ] = card;
        }
    }



    void dealHand()
    {
        cout << "\nDealing you 5 cards..." << endl;

        for(int card = 1; card <= 5; card++)
        {
            for(int r = 0; r < 4; ++r)
            {
                for(int c = 0; c < 13; ++c)
                {
                    if(deck[r][c] == deckNumber)
                    {
                        hand[card - 1][0] = c;
                        hand[card - 1][1] = r;
                        deckNumber++;
                    }
                }
            }
        }
    }

    void dealDealersHand()
    {
        cout << "\nDealing dealer 5 cards..." << endl;

        for(int card = 1; card <= 5; card++)
        {
            for(int r = 0; r < 4; ++r)
            {
                for(int c = 0; c < 13; ++c)
                {
                    if(deck[r][c] == deckNumber)
                    {
                        dealersHand[card-1][0] = c;
                        dealersHand[card-1][1] = r;
                        deckNumber++;
                    }
                }
            }
        }

    }


    void showYourHand()
    {
    float height;
    float width;


    sf::Texture cards;
    sf::Sprite ded;
    sf::Texture t;
	sf::Sprite s;
	t.loadFromFile("img/background.jpg");
 	s.setTexture(t);
    sf::Texture backe;
    sf::Sprite backcard;
    assert(backe.loadFromFile("img/back.png"));
    backcard.setTexture(backe);
    assert(font.loadFromFile("font/CoffeeTin.ttf"));
    txt.setFont(font);
    txt.setCharacterSize(90);
    txt.setPosition(100, 50);
    txt.setString("Poker");
    sf::Texture button4;
    sf::Sprite button4img;
    assert(button4.loadFromFile("img/poker.png"));
    button4img.setTexture(button4);
    button4img.setPosition(height/4 + 10, width/4 + 10);
    sf::Text Helpxt;
    sf::Font font2;
    assert(font2.loadFromFile("font/IndianPoker.ttf"));




    float button4Width =button4img.getLocalBounds().width;
    float button4Height = button4img.getLocalBounds().height;

    button4img.setTexture(button4);

    while(window.isOpen())
    {
        sf::Event Event;
        while (window.pollEvent(Event))
        {
            switch(Event.type)
            {
             case sf::Event::Closed:
                    window.close();
                    break;
            }
            goto x;
        }
  	window.clear(sf::Color::White);
    window.draw(s);
    window.display();
    }
    x:int card = 0;
    static const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    static const char *face[ 13 ] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    cout << endl;
    cout << "***YOUR HAND***" << endl;
    deal: while(card<5)
        {
            window.draw(ded);
            card ++;
            cout << card << " " << setw( 5 ) << right << face[ hand[card-1][0] ] << " of " << setw( 8 ) << left << suit[ hand[card-1][1] ] << endl;
        if(suit[ hand[card-1][1]] == "Spades")
            {
        if(face[ hand[card-1][0] ] == "Ace")
            assert(cards.loadFromFile("img/Ace of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Two")
            assert(cards.loadFromFile("img/Two of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Three")
            assert(cards.loadFromFile("img/Three of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Four")
            assert(cards.loadFromFile("img/Four of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Five")
            assert(cards.loadFromFile("img/Five of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Six")
            assert(cards.loadFromFile("img/Six of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Seven")
            assert(cards.loadFromFile("img/Seven of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Eight")
            assert(cards.loadFromFile("img/Eight of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Nine")
            assert(cards.loadFromFile("img/Nine of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Ten")
            assert(cards.loadFromFile("img/Ten of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Jack")
            assert(cards.loadFromFile("img/Jack of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "Queen")
            assert(cards.loadFromFile("img/Queen of Spades.png"));
        else  if(face[ hand[card-1][0] ] == "King")
            assert(cards.loadFromFile("img/King of Spades.png"));
        else
            cout<<"no image"<<endl;}
    else if(suit[ hand[card-1][1]]  == "Diamonds"){
        if(face[ hand[card-1][0] ] == "Ace")
            assert(cards.loadFromFile("img/Ace of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Two")
            assert(cards.loadFromFile("img/Two of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Three")
            assert(cards.loadFromFile("img/Three of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Four")
            assert(cards.loadFromFile("img/Four of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Five")
            assert(cards.loadFromFile("img/Five of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Six")
            assert(cards.loadFromFile("img/Six of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Seven")
            assert(cards.loadFromFile("img/Seven of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Eight")
            assert(cards.loadFromFile("img/Eight of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Nine")
            assert(cards.loadFromFile("img/Nine of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Ten")
            assert(cards.loadFromFile("img/Ten of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Jack")
            assert(cards.loadFromFile("img/Jack of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "Queen")
            assert(cards.loadFromFile("img/Queen of Diamonds.png"));
        else  if(face[ hand[card-1][0] ] == "King")
            assert(cards.loadFromFile("img/King of Diamonds.png"));
        else
            cout<<"no image"<<endl;}
     else if(suit[ hand[card-1][1]]  == "Clubs"){
        if(face[ hand[card-1][0] ] == "Ace")
            assert(cards.loadFromFile("img/Ace of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Two")
            assert(cards.loadFromFile("img/Two of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Three")
            assert(cards.loadFromFile("img/Three of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Four")
            assert(cards.loadFromFile("img/Four of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Five")
            assert(cards.loadFromFile("img/Five of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Six")
            assert(cards.loadFromFile("img/Six of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Seven")
            assert(cards.loadFromFile("img/Seven of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Eight")
            assert(cards.loadFromFile("img/Eight of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Nine")
            assert(cards.loadFromFile("img/Nine of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Ten")
            assert(cards.loadFromFile("img/Ten of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Jack")
            assert(cards.loadFromFile("img/Jack of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "Queen")
            assert(cards.loadFromFile("img/Queen of Clubs.png"));
        else  if(face[ hand[card-1][0] ] == "King")
            assert(cards.loadFromFile("img/King of Clubs.png"));
        else
            cout<<"no image"<<endl;}
    else if(suit[ hand[card-1][1]]  == "Hearts"){
        if(face[ hand[card-1][0] ] == "Ace")
            assert(cards.loadFromFile("img/Ace of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Two")
            assert(cards.loadFromFile("img/Two of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Three")
            assert(cards.loadFromFile("img/Three of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Four")
            assert(cards.loadFromFile("img/Four of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Five")
            assert(cards.loadFromFile("img/Five of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Six")
            assert(cards.loadFromFile("img/Six of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Seven")
            assert(cards.loadFromFile("img/Seven of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Eight")
            assert(cards.loadFromFile("img/Eight of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Nine")
            assert(cards.loadFromFile("img/Nine of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Ten")
            assert(cards.loadFromFile("img/Ten of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Jack")
            assert(cards.loadFromFile("img/Jack of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "Queen")
            assert(cards.loadFromFile("img/Queen of Hearts.png"));
        else  if(face[ hand[card-1][0] ] == "King")
            assert(cards.loadFromFile("img/King of Hearts.png"));
        else
            cout<<"no image"<<endl;}
             ded.setTexture(cards);
    ded.setPosition(200 + card*50, 150);
    backcard.setPosition(200+ card*50 , 150 + 300 );
    while(window.isOpen())
    {
        sf::Event Event;
        while (window.pollEvent(Event))
        {
            switch(Event.type)
            {
             case sf::Event::Closed:
                    window.close();
                    break;
             case sf::Event::MouseButtonPressed:
                {
                   sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                    sf::Vector2f mousePosF( static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                    if(ded.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        goto deal;
                    }
                    break;
                 }

            }
        }
        window.draw(txt);
        window.draw(ded);
        window.draw(backcard);
        window.display();
    }



        }

        cout << "\n-You have ";
        printHandType();
        swapCards();

    }

    void showDealersHand()
    {


        sf::Texture cards;
        sf::Sprite ded;

        static const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
        static const char *face[ 13 ] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
        int card = 0;
        cout << "\n";
        cout << "***DEALER'S HAND***" << endl;
       	deal:  while(card < 5)
        {
            card++;
            cout << setw( 5 ) << right <<face[ dealersHand[card-1][0] ] << " of " << setw( 8 ) << left << suit[ dealersHand[card-1][1] ] << endl;
                         if(suit[ dealersHand[card-1][1] ]  == "Spades"){
        if(face[ dealersHand[card-1][0] ] == "Ace")
            assert(cards.loadFromFile("img/Ace of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Two")
            assert(cards.loadFromFile("img/Two of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Three")
            assert(cards.loadFromFile("img/Three of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Four")
            assert(cards.loadFromFile("img/Four of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Five")
            assert(cards.loadFromFile("img/Five of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Six")
            assert(cards.loadFromFile("img/Six of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Seven")
            assert(cards.loadFromFile("img/Seven of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Eight")
            assert(cards.loadFromFile("img/Eight of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Nine")
            assert(cards.loadFromFile("img/Nine of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Ten")
            assert(cards.loadFromFile("img/Ten of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Jack")
            assert(cards.loadFromFile("img/Jack of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Queen")
            assert(cards.loadFromFile("img/Queen of Spades.png"));
        else  if(face[ dealersHand[card-1][0] ] == "King")
            assert(cards.loadFromFile("img/King of Spades.png"));
        else
            cout<<"no image"<<endl;}
    else if(suit[ dealersHand[card-1][1] ]  == "Diamonds"){
        if(face[ dealersHand[card-1][0] ] == "Ace")
            assert(cards.loadFromFile("img/Ace of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Two")
            assert(cards.loadFromFile("img/Two of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Three")
            assert(cards.loadFromFile("img/Three of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Four")
            assert(cards.loadFromFile("img/Four of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Five")
            assert(cards.loadFromFile("img/Five of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Six")
            assert(cards.loadFromFile("img/Six of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Seven")
            assert(cards.loadFromFile("img/Seven of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Eight")
            assert(cards.loadFromFile("img/Eight of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Nine")
            assert(cards.loadFromFile("img/Nine of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Ten")
            assert(cards.loadFromFile("img/Ten of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Jack")
            assert(cards.loadFromFile("img/Jack of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Queen")
            assert(cards.loadFromFile("img/Queen of Diamonds.png"));
        else  if(face[ dealersHand[card-1][0] ] == "King")
            assert(cards.loadFromFile("img/King of Diamonds.png"));
        else
            cout<<"no image"<<endl;}
     else if(suit[ dealersHand[card-1][1] ]  == "Clubs"){
        if(face[ dealersHand[card-1][0] ] == "Ace")
            assert(cards.loadFromFile("img/Ace of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Two")
            assert(cards.loadFromFile("img/Two of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Three")
            assert(cards.loadFromFile("img/Three of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Four")
            assert(cards.loadFromFile("img/Four of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Five")
            assert(cards.loadFromFile("img/Five of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Six")
            assert(cards.loadFromFile("img/Six of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Seven")
            assert(cards.loadFromFile("img/Seven of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Eight")
            assert(cards.loadFromFile("img/Eight of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Nine")
            assert(cards.loadFromFile("img/Nine of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Ten")
            assert(cards.loadFromFile("img/Ten of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Jack")
            assert(cards.loadFromFile("img/Jack of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Queen")
            assert(cards.loadFromFile("img/Queen of Clubs.png"));
        else  if(face[ dealersHand[card-1][0] ] == "King")
            assert(cards.loadFromFile("img/King of Clubs.png"));
        else
            cout<<"no image"<<endl;}
    else if(suit[ dealersHand[card-1][1] ]  == "Hearts"){
        if(face[ dealersHand[card-1][0] ] == "Ace")
            assert(cards.loadFromFile("img/Ace of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Two")
            assert(cards.loadFromFile("img/Two of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Three")
            assert(cards.loadFromFile("img/Three of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Four")
            assert(cards.loadFromFile("img/Four of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Five")
            assert(cards.loadFromFile("img/Five of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Six")
            assert(cards.loadFromFile("img/Six of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Seven")
            assert(cards.loadFromFile("img/Seven of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Eight")
            assert(cards.loadFromFile("img/Eight of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Nine")
            assert(cards.loadFromFile("img/Nine of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Ten")
            assert(cards.loadFromFile("img/Ten of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Jack")
            assert(cards.loadFromFile("img/Jack of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "Queen")
            assert(cards.loadFromFile("img/Queen of Hearts.png"));
        else  if(face[ dealersHand[card-1][0] ] == "King")
            assert(cards.loadFromFile("img/King of Hearts.png"));
        else
            cout<<"no image"<<endl;}

    ded.setTexture(cards);
    ded.setPosition(200+ card*50 , 150 + 300 );
    sf::Texture t;

    while(window.isOpen())
    {
        sf::Event Event;
        while (window.pollEvent(Event))
        {
            switch(Event.type)
            {
             case sf::Event::Closed:{
                    window.close();
                    break;}
                 case sf::Event::MouseButtonPressed:
                {
                   sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                    sf::Vector2f mousePosF( static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                    if(ded.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        goto deal;
                    }
                    break;
                 }



            }
        }


        window.draw(ded);
        window.display();
    }
        }
        cout << "\n-Dealer has ";
        printDealersHandType();
        cout << endl;

    }

    void printHandArray()
    {
        for(int r = 0; r < 5; ++r)
        {
            for(int c = 0; c < 2; ++c)
            {
                cout << setw(5) << hand[r][c];
            }
            cout << endl;
        }
    }

    void printDealersHandArray()
    {
        for(int r = 0; r < 5; ++r)
        {
            for(int c = 0; c < 2; ++c)
            {
                cout << setw(5) << dealersHand[r][c];
            }
            cout << endl;
        }
    }

    void printCardCounterArray()
    {
        for(int i = 0; i < 13; ++i)
            cout << setw(4) << cardCounter[i];
    }

    bool containsPair(int array[5][2])
    {
        //static const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
        //static const char *face[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

        resetCardCounter();

        for(int i = 0; i < 5; ++i)
            cardCounter[array[i][0]]++;

        for(int i = 0; i < 13; ++i)
        {
            if(cardCounter[i] == 2)
            {

                return true;
            }
        }


        return false;
    }

    bool contains2Pairs(int array[5][2])
    {
        //static const char *suit[ 4 ] = { "Hearts", "Diamonds", "Clubs", "Spades" };
        //static const char *face[ 13 ] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

        resetCardCounter();

        for(int i = 0; i < 5; ++i)
            cardCounter[array[i][0]]++;

        int pairs = 0;

        for(int i = 0; i < 13; ++i)
        {
            if(cardCounter[i] == 2)
            {
                pairs++;
            }
        }

        if(pairs == 2)
            return true;
        else
            return false;

    }

    bool containsThreeOfAKind(int array[5][2])
    {
        resetCardCounter();

        for(int i = 0; i < 5; ++i)
            cardCounter[array[i][0]]++;

        for(int i = 0; i < 13; ++i)
        {
            if(cardCounter[i] == 3)
            {
                return true;
            }
        }

        return false;
    }

    bool dealersHandContainsThreeOfAKind()
    {
        return containsThreeOfAKind(dealersHand);
    }

    bool containsFourOfAKind(int array[5][2])
    {
        resetCardCounter();

        for(int i = 0; i < 5; ++i)
            cardCounter[array[i][0]]++;

        for(int i = 0; i < 13; ++i)
        {
            if(cardCounter[i] == 4)
            {
                return true;
            }
        }

        return false;

    }

    bool containsFullHouse(int array[5][2])
    {
        if(containsThreeOfAKind(array) && containsPair(array))
            return true;
        else
            return false;
    }

    bool containsFlush(int array[5][2])
    {
        resetSuitCounter();

        for(int i = 0; i < 5; ++i)
            suitCounter[array[i][1]]++;

        for(int i = 0; i < 4; ++i)
        {
            if(suitCounter[i] == 5)
            {
                return true;
            }
        }

        return false;
    }

    bool containsStraight(int array[5][2])
    {
        resetCardCounter();
        resetSuitCounter();

        int copy[5][2] = {0};

        for(int i = 0; i < 5; ++i)
        for(int j = 0; j < 2; ++j)
            copy[i][j] = array[i][j];

        bubbleAscending(copy);
        //lowStraightCheck(array);

        if(copy[4][0] == 0
        && copy[3][0] == 12
        && copy[2][0] == 11
        && copy[1][0] == 10
        && copy[0][0] == 9)
        {
            return true;
        }

        for(int i = 0; i < 5; ++i)
            cardCounter[copy[i][0]]++;

        for(int i = 0; i < 9; ++i)
        {
            if(cardCounter[i] == 1)
            {
                for(int j = 1; j <= 4; ++j)//check next four cards
                {
                    if(cardCounter[i + j] != 1)
                        return false;
                }

                return true;
            }
        }

        return false;
    }

    bool containsStraightFlush(int array[5][2])
    {
        if(containsStraight(array) && containsFlush(array))
            return true;
        else
            return false;
    }

    bool containsRoyalFlush(int array[5][2])
    {
        if(containsFlush(array) && containsTenJQKA(array))
            return true;

        return false;
    }

    bool containsTenJQKA(int array[5][2])
    {
        resetCardCounter();

        for(int i = 0; i < 5; ++i)
            cardCounter[array[i][0]]++;

        if(cardCounter[0] == 1)
        {
            for(int i = 9; i <= 12; ++i)
                if(cardCounter[i] != 1)
                    return false;
            return true;
        }

        return false;

    }

    void setMyHand()
    {
        //face
        hand[0][0] = 0;
        hand[1][0] = 12;
        hand[2][0] = 11;
        hand[3][0] = 10;
        hand[4][0] = 9;

        //suit
        hand[0][1] = 1;
        hand[1][1] = 1;
        hand[2][1] = 1;
        hand[3][1] = 1;
        hand[4][1] = 1;

    }

    void setDealersHand()
    {
        //face
        dealersHand[0][0] = 0;
        dealersHand[1][0] = 1;
        dealersHand[2][0] = 2;
        dealersHand[3][0] = 3;
        dealersHand[4][0] = 4;

        //suit
        dealersHand[0][1] = 1;
        dealersHand[1][1] = 0;
        dealersHand[2][1] = 0;
        dealersHand[3][1] = 0;
        dealersHand[4][1] = 0;


    }

    void resetCardCounter()
    {
        for(int i = 0; i < 13; ++i)
            cardCounter[i] = 0;

        for(int i = 0; i < 4; ++i)
            for(int j = 0; j < 13; j++)
                cardCounter2[i][j] = 0;
    }

    void resetSuitCounter()
    {
       for(int i = 0; i < 4; ++i)
            suitCounter[i] = 0;
    }

    void resetDeck()
    {
        for ( int row = 0; row <= 3; row++ )
        {
            for ( int column = 0; column <= 12; column++ )
            {
                deck[ row ][ column ] = 0;
            }
        }
    }

    void increment(int a)
    {
        switch(a)
        {
            case 1:
                pairs++;
                break;
            case 2:
                twoPairs++;
                break;
            case 3:
                threes++;
                break;
            case 4:
                fours++;
                break;
            case 6:
                flushes++;
                break;
            case 7:
                straights++;
                break;
            case 5:
                fullHouses++;
                break;
            case 8:
                straightFlushes++;
                break;
            case 9:
                royalFlushes++;
                break;

        }
    }

    void printResults(int total)
    {
        cout << fixed << setprecision(6);
        cout << setw(20) << "Pairs: " << setw(7) << pairs << setw(10) << static_cast<double>(pairs) / total * 100 << endl;
        cout << setw(20) << "Two Pairs: " << setw(7) << twoPairs << setw(10) << static_cast<double>(twoPairs) / total * 100 << endl;
        cout << setw(20) << "3 of a kinds: " << setw(7) << threes << setw(10) << static_cast<double>(threes) / total * 100 << endl;
        cout << setw(20) << "Straights: " << setw(7) << straights << setw(10) << static_cast<double>(straights) / total * 100 << endl;
        cout << setw(20) << "Flushes: " << setw(7) << flushes << setw(10) << static_cast<double>(flushes) / total * 100 << endl;
        cout << setw(20) << "Full Houses: " << setw(7) << fullHouses << setw(10) << static_cast<double>(fullHouses) / total * 100 << endl;
        cout << setw(20) << "4 of a kinds: " << setw(7) << fours << setw(10) << static_cast<double>(fours) / total * 100 << endl;
        cout << setw(20) << "Straight Flushes: " << setw(7) << straightFlushes << setw(10) << static_cast<double>(straightFlushes) / total * 100 << endl;
        cout << setw(20) << "Royal Flushes: " << setw(7) << royalFlushes << setw(10) << static_cast<double>(royalFlushes) / total * 100 << endl;
    }

    void resetStats()
    {
        pairs = 0;
        twoPairs = 0;
        threes = 0;
        fours = 0;
        flushes = 0;
        straights = 0;
        fullHouses = 0;
        straightFlushes = 0;
        royalFlushes = 0;
    }

    int findHandValue(int h[5][2])
    {
        if(containsRoyalFlush(h))
            return 9;
        else if(containsStraightFlush(h))
            return 8;
        else if(containsStraight(h))
            return 7;
        else if(containsFlush(h))
            return 6;
        else if(containsFullHouse(h))
            return 5;
        else if(containsFourOfAKind(h))
            return 4;
        else if(containsThreeOfAKind(h))
            return 3;
        else if(contains2Pairs(h))
            return 2;
        else if(containsPair(h))
            return 1;
        else
            return 0;

    }

    void tally(int array[5][2])
    {
        int hands;


        hands = 10000;

        for(int i = 0; i < hands; ++i)
        {
            shuffle();
            dealHand();

            if(containsRoyalFlush(array))
                increment(9);
            else if(containsStraightFlush(array))
                increment(8);
            else if(containsStraight(array))
                increment(7);
            else if(containsFlush(array))
                increment(6);
            else if(containsFullHouse(array))
                increment(5);
            else if(containsFourOfAKind(array))
                increment(4);
            else if(containsThreeOfAKind(array))
                increment(3);
            else if(contains2Pairs(array))
                increment(2);
            else if(containsPair(array))
                increment(1);

        }

        printResults(hands);
    }

    void compareHands()
    {
    float height = window.getSize().x;
   float width = window.getSize().y;
        handValue = findHandValue(hand);
        dealersHandValue = findHandValue(dealersHand);
        sf::Texture buttonwin;
        sf::Sprite buttonwinimg;
        assert(buttonwin.loadFromFile("img/PLAYAG.png"));
        buttonwinimg.setPosition(height/4 + 100, width/4 + 100);

        float buttonwinWidth =buttonwinimg.getLocalBounds().width;
        float buttonwinHeight = buttonwinimg.getLocalBounds().height;

        buttonwinimg.setTexture(buttonwin);

        sf::Texture buttonreturn;
        sf::Sprite buttonreturnimg;
        assert(buttonreturn.loadFromFile("img/MAIN.png"));
        buttonreturnimg.setPosition(height/4 + 100, width/4 + 200);

        float buttonreturnWidth =buttonreturnimg.getLocalBounds().width;
        float buttonreturnHeight = buttonreturnimg.getLocalBounds().height;

        buttonreturnimg.setTexture(buttonreturn);


        sf::Texture exit;
        sf::Sprite exitimg;
        assert(exit.loadFromFile("img/exit.png"));
        exitimg.setPosition(height/4 + 100, width/4 + 300);

        float exitWidth =exitimg.getLocalBounds().width;
        float exitHeight = exitimg.getLocalBounds().height;

        exitimg.setTexture(exit);



        sf::Text Wintext;
         sf::Font font2;
    assert(font2.loadFromFile("font/IndianPoker.ttf"));
        Wintext.setFont(font2);
    Wintext.setCharacterSize(72);
    Wintext.setPosition(100, 100);
      Wintext.setString("WIN!!! Congratulations ");






        if(handValue > dealersHandValue){
                 while(window.isOpen())
    {
        sf::Event Event;
        while (window.pollEvent(Event))
        {
            switch(Event.type)
            {
            case sf::Event::Closed:{
                    window.close();
                    break;}
            case sf::Event::MouseButtonPressed:
                {
                   sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                    sf::Vector2f mousePosF( static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                    if(buttonwinimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                               DeckOfCards deckOfCards;
                        deckOfCards.runPokerGame();
                    }
                    else if(buttonreturnimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                         window.clear();
                        main();
                    }
                    else if(exitimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        system("pause");
                    }
                    break;
                 }
            }
        }

    window.clear(sf::Color::Black);
    window.draw(Wintext);
    window.draw(buttonwinimg);
    window.draw(buttonreturnimg);
    window.draw(exitimg);
    window.display();

    }
        }

        else if(handValue < dealersHandValue){
                sf::Text Losetext;
        Losetext.setFont(font2);
    Losetext.setCharacterSize(72);
    Losetext.setPosition(100, 100);
    Losetext.setString("LOSE!!Too bad");
         while(window.isOpen())
    {
        sf::Event Event;
        while (window.pollEvent(Event))
        {
            switch(Event.type)
            {
            case sf::Event::Closed:
                    window.close();
                    break;
                        case sf::Event::MouseButtonPressed:
                {
                   sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                    sf::Vector2f mousePosF( static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                    if(buttonwinimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                    DeckOfCards deckOfCards;
                    deckOfCards.runPokerGame();
                    }
                    else if(buttonreturnimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                         window.clear();
                        main();
                    }
                                        else if(exitimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        system("pause");
                    }
                    break;
                 }
            }
        }
    window.clear(sf::Color::Black);
    window.draw(Losetext);
    window.draw(buttonwinimg);
    window.draw(buttonreturnimg);
    window.draw(exitimg);
    window.display();

    }
        }
        else
        {
            switch(handValue)
            {
                case 0:
                    findBestHighCard();
                    break;
                case 1:
                    findBestPair();
                    break;
                case 2:
                    findBestTwoPair();
                    break;
                case 3:
                    findBestThreeOfAKind();
                    break;
                case 4:
                    findBestFourOfAKind();
                    break;
                case 5:
                    findBestFullHouse();
                    break;
                case 6:
                    findBestHighCard();
                    break;
                case 7:
                    findBestStraight();
                    break;
                case 8:
                    findBestStraightFlush();
                    break;
                case 9:
                    cout << "It's a tie!" << endl;
                    break;
            }
        }
    }

    void findBestStraightFlush()
    {
        bubbleAscending(hand);
        bubbleAscending(dealersHand);

        lowStraightCheck(hand);
        lowStraightCheck(dealersHand);

        int winner = 0;

        for(int i = 4; i >= 0; --i)
        {
            if(hand[i][0] == 0 && dealersHand[i][0] != 0) //if checking ace
            {
                    winner = 1;
            }
            else if(dealersHand[i][0] == 0 && hand[i][0] != 0)  //if checking ace
            {
                    winner = 2;
            }
            else if(hand[i][0] > dealersHand[i][0])
            {
                i = -1;
                winner = 1;
            }
            else if(hand[i][0] < dealersHand[i][0])
            {
                i = -1;
                winner = 2;
            }
        }

        if(winner == 1)
            cout << "You win!" << endl;
        else if(winner == 2)
            cout << "Dealer wins!" << endl;
        else
            cout << "Its a tie!" << endl;
    }

    void findBestStraight()
    {
        bubbleAscending(hand);
        bubbleAscending(dealersHand);

        lowStraightCheck(hand);
        lowStraightCheck(dealersHand);

        int winner = 0;

        for(int i = 4; i >= 0; --i)
        {
            if(hand[i][0] == 0 && dealersHand[i][0] != 0) //if checking ace
            {
                    winner = 1;
            }
            else if(dealersHand[i][0] == 0 && hand[i][0] != 0)  //if checking ace
            {
                    winner = 2;
            }
            else if(hand[i][0] > dealersHand[i][0])
            {
                i = -1;
                winner = 1;
            }
            else if(hand[i][0] < dealersHand[i][0])
            {
                i = -1;
                winner = 2;
            }
        }

        if(winner == 1)
            cout << "You win!" << endl;
        else if(winner == 2)
            cout << "Dealer wins!" << endl;
        else
            cout << "Its a tie!" << endl;

    }

    void lowStraightCheck(int h[5][2])
    {
        if(h[4][0] == 0 && h[3][0] == 4)
        {
            int cardr, cardc;

            cardr = h[4][1];
            cardc = h[4][0];

            //cout << "Ace to move - Row: " << cardr << " Column: " << cardc << endl;

            for(int i = 4; i > 0; i--)
            {
                h[i][0] = h[i-1][0];
                h[i][1] = h[i-1][1];
            }

            h[0][0] = cardc;
            h[0][1] = cardr;

        }
    }

    void findBestFullHouse()
    {
        int myTriple, myDouble;
        int dealerTriple, dealerDouble;

        findTripleDouble(myTriple, myDouble, hand);
        findTripleDouble(dealerTriple, dealerDouble, dealersHand);



        if(myTriple > dealerTriple)
            cout << "You win!" << endl;
        else if(myTriple < dealerTriple)
            cout << "You lose!" << endl;
        else if(myTriple == dealerTriple)
        {
            if(myDouble > dealerDouble)
                cout << "You win!" << endl;
            else if(myDouble < dealerDouble)
                cout << "You lose!" << endl;
            else
                cout << "What are we doing here?" << endl;
        }

    }

    void findBestFourOfAKind()
    {
        int myFour = findFour(hand);
        int dealersFour = findFour(dealersHand);

        if(myFour > dealersFour)
            cout << "You win!" << endl;
        else if(myFour < dealersFour)
            cout << "You lose!" << endl;
        else
        {
            cout<<"Why?"<<endl;
        }

    }

    void findBestTwoPair()
    {
        int myPair1, myPair2;
        int dealersPair1, dealersPair2;

        findTwoPairs(myPair1, myPair2, hand);
        findTwoPairs(dealersPair1, dealersPair2, dealersHand);

        int myHighPair, dealersHighPair;
        int myLowPair, dealersLowPair;


        if(myPair1 > myPair2)
        {
            myHighPair = myPair1;
            myLowPair = myPair2;
        }
        else
        {
            myHighPair = myPair2;
            myLowPair = myPair1;
        }

        if(dealersPair1 > dealersPair2)
        {
            dealersHighPair = dealersPair1;
            dealersLowPair = dealersPair2;
        }
        else
        {
            dealersHighPair = dealersPair2;
            dealersLowPair = dealersPair1;
        }



        int winner = 0;

        if(myHighPair > dealersHighPair)
            cout << "You win!" << endl;
        else if(dealersHighPair > myHighPair)
            cout << "You lose!" << endl;
        else if(dealersHighPair == myHighPair)
        {
            if(myLowPair > dealersLowPair)
                cout << "You win!" << endl;
            else if(myLowPair < dealersLowPair)
                cout << "You lose!" << endl;
            else if(myLowPair == dealersLowPair)
            {
                bubbleAscending(hand);
                bubbleAscending(dealersHand);

                for(int i = 4; i >= 0; --i)
                {
                    //if current card is part of the pair, exit loop
                    if(hand[i][0] == myHighPair || dealersHand[i][0] == myHighPair
                    || hand[i][0] == myLowPair || dealersHand[i][0] == myLowPair)
                    {
                        //skip this iteration
                    }
                    else if(hand[i][0] == 0 && dealersHand[i][0] != 0) //if checking ace
                    {
                        winner = 1;
                    }
                    else if(dealersHand[i][0] == 0 && hand[i][0] != 0)  //if checking ace
                    {
                        winner = 2;
                    }
                    else if(hand[i][0] > dealersHand[i][0])
                    {
                        i = -1;
                        winner = 1;
                    }
                    else if(hand[i][0] < dealersHand[i][0])
                    {
                        i = -1;
                        winner = 2;
                    }
                }

            if(winner == 1)
                cout << "You win!" << endl;
            else if(winner == 2)
                cout << "Dealer wins!" << endl;
            else
                cout << "Its a tie!" << endl;
            }
        }
    }

    void findBestThreeOfAKind()
    {
        int myThree = findThree(hand);
        int dealersThree = findThree(dealersHand);

        if(myThree > dealersThree)
            cout << "You win!" << endl;
        else if(myThree < dealersThree)
            cout << "You lose!" << endl;
        else
        {
            //if the same, compare remaining 2 cards
            //cout << "Same pair." << endl;

            bubbleAscending(hand);
            bubbleAscending(dealersHand);

            int winner = 0;

            for(int i = 4; i >= 0; --i)
            {
                //if current card is part of the pair, exit loop
                if(hand[i][0] == myThree || dealersHand[i][0] == myThree)
                {
                    //skip this iteration
                }
                else if(hand[i][0] == 0 && dealersHand[i][0] != 0) //if checking ace
                {
                    winner = 1;
                }
                else if(dealersHand[i][0] == 0 && hand[i][0] != 0)  //if checking ace
                {
                    winner = 2;
                }
                else if(hand[i][0] > dealersHand[i][0])
                {
                    i = -1;
                    winner = 1;
                }
                else if(hand[i][0] < dealersHand[i][0])
                {
                    i = -1;
                    winner = 2;
                }
            }

            if(winner == 1)
                cout << "You win!" << endl;
            else if(winner == 2)
                cout << "Dealer wins!" << endl;
            else
                cout << "Its a tie!" << endl;
        }

    }

    void findTripleDouble(int &a, int &b, int h[5][2])
    {
        resetCardCounter();
        fillCardCounter(h);

        for(int i = 0; i < 13; i++)
        {
            if(cardCounter[i] == 3)
                a = i;
            else if(cardCounter[i] == 2)
                b = i;
        }

    }

    void findTwoPairs(int &a, int &b, int h[5][2])
    {
        resetCardCounter();
        fillCardCounter(h);

        int index = 0;

        for(int i = 0; i < 13; i++)
            if(cardCounter[i] == 2)
            {
                switch(index)
                {
                    case 0:
                        a = i;
                        index++;
                        break;
                    case 1:
                        b = i;
                        index++;
                        break;
                }
            }

    }

    void findBestPair()
    {
        //compare the pairs
        int myPair = findPair(hand);
        int dealersPair = findPair(dealersHand);

        if(myPair > dealersPair)
            cout << "You win!" << endl;
        else if(myPair < dealersPair)
            cout << "You lose!" << endl;
        else
        {
            //if the same, compare remaining 3 cards
            //cout << "Same pair." << endl;

            bubbleAscending(hand);
            bubbleAscending(dealersHand);

            int winner = 0;

            for(int i = 4; i >= 0; --i)
            {
                //if current card is part of the pair, exit loop
                if(hand[i][0] == myPair || dealersHand[i][0] == myPair)
                {
                    //skip this iteration
                }
                else if(hand[i][0] == 0 && dealersHand[i][0] != 0) //if checking ace
                {
                    winner = 1;
                }
                else if(dealersHand[i][0] == 0 && hand[i][0] != 0)  //if checking ace
                {
                    winner = 2;
                }
                else if(hand[i][0] > dealersHand[i][0])
                {
                    i = -1;
                    winner = 1;
                }
                else if(hand[i][0] < dealersHand[i][0])
                {
                    i = -1;
                    winner = 2;
                }
            }

            if(winner == 1)
                cout << "You win!" << endl;
            else if(winner == 2)
                cout << "Dealer wins!" << endl;
            else
                cout << "Its a tie!" << endl;
        }
    }

    int findFour(int h[5][2])
    {
        resetCardCounter();
        fillCardCounter(h);

        for(int i = 0; i < 13; i++)
            if(cardCounter[i] == 4)
                return i;
        return -1;

    }

    int findThree(int h[5][2])
    {
        resetCardCounter();
        fillCardCounter(h);

        for(int i = 0; i < 13; i++)
            if(cardCounter[i] == 3)
                return i;
        return -1;

    }

    int findPair(int h[5][2])
    {
        resetCardCounter();
        fillCardCounter(h);

        for(int i = 0; i < 13; i++)
            if(cardCounter[i] == 2)
                return i;
        return -1;
    }

    void findBestHighCard()
    {
        bubbleAscending(hand);
        bubbleAscending(dealersHand);

        int winner = 0;

        for(int i = 4; i >= 0; --i)
        {
            if(hand[i][0] == 0 && dealersHand[i][0] != 0) //if checking ace
            {
                winner = 1;
            }
            else if(dealersHand[i][0] == 0 && hand[i][0] != 0)  //if checking ace
            {
                winner = 2;
            }
            else if(hand[i][0] > dealersHand[i][0])
            {
                i = -1;
                winner = 1;
            }
            else if(hand[i][0] < dealersHand[i][0])
            {
                i = -1;
                winner = 2;
            }
        }

        if(winner == 1)
            cout << "You win!" << endl;
        else if(winner == 2)
            cout << "Dealer wins!" << endl;
        else
            cout << "Its a tie!" << endl;
    }

    void moveAces(int h[5][2])
    {
        int aces = 0;

        for(int i = 0; i < 5; ++i)
            if(h[i][0] == 0)
                aces++;

        //cout << aces << " ace(s)." << endl;

        while(aces != 0)
        {
            int cardr, cardc;

            cardr = h[0][1];
            cardc = h[0][0];

            //cout << "Ace to move - Row: " << cardr << " Column: " << cardc << endl;

            for(int i = 0; i < 4; i++)
            {
                h[i][0] = h[i+1][0];
                h[i][1] = h[i+1][1];
            }

            h[4][0] = cardc;
            h[4][1] = cardr;

            aces--;
        }
    }

    void bubbleAscending(int array[5][2])
    {
        int size = 5;

        int temp; //used for swapping
        int step = 0; //counts how many passes have been made
                      //after n passes the n largest values should be in place
                      //so there is no reason to check them again
        bool sorted = false;
        while(sorted != true)
        {
            sorted = true;

            for(int i = 0; i < size - 1 - step; i++)
            {
                if(array[i][0] > array[i+1][0])
                {
                    sorted = false;

                    temp = array[i][0];
                    array[i][0] = array[i+1][0];
                    array[i+1][0] = temp;

                    temp = array[i][1];
                    array[i][1] = array[i+1][1];
                    array[i+1][1] = temp;
                }
            }
            step++; //incremented after a complete pass
        }

        moveAces(array);
    }

    void printHandType()
    {
        switch(findHandValue(hand))
        {
            case 0:
                cout << "High card." << endl;
                break;
            case 1:
                cout << "Pair!" << endl;
                break;
            case 2:
                cout << "Two Pairs!" << endl;
                break;
            case 3:
                cout << "Three of a Kind!" << endl;
                break;
            case 4:
                cout << "Four of a Kind!" << endl;
                break;
            case 5:
                cout << "Full House!" << endl;
                break;
            case 6:
                cout << "Flush!" << endl;
                break;
            case 7:
                cout << "Straight!" << endl;
                break;
            case 8:
                cout << "Straight Flush!" << endl;
                break;
            case 9:
                cout << "Royal Flush!" << endl;
                break;

        }
    }

    void printDealersHandType()
    {
        switch(findHandValue(dealersHand))
        {
            case 0:
                cout << "High card." << endl;
                break;
            case 1:
                cout << "Pair!" << endl;
                break;
            case 2:
                cout << "Two Pairs!" << endl;
                break;
            case 3:
                cout << "Three of a Kind!" << endl;
                break;
            case 4:
                cout << "Four of a Kind!" << endl;
                break;
            case 5:
                cout << "Full House!" << endl;
                break;
            case 6:
                cout << "Flush!" << endl;
                break;
            case 7:
                cout << "Straight!" << endl;
                break;
            case 8:
                cout << "Straight Flush!" << endl;
                break;
            case 9:
                cout << "Royal Flush!" << endl;
                break;

        }
    }

    void evaluateDealersHand()
    {
        //cout << "\nEvaluating the dealer's hand..." << endl;
        evaluateHand(dealersHand);
    }

    void evaluateHand(int h[5][2])
    {
        int type = findHandValue(h);

        switch(type)
        {
            case 0:
                if(goodChanceForStraight(h))
                    checkStraight(h);
                else
                    checkHighCard(h);
                break;
            case 1:
                if(goodChanceForStraight(h))
                    checkStraight(h);
                else
                    checkPair(h);
                break;
            case 2:
                improveTwoPairs(h);
                break;
            case 3:
                improveThreeOfAKind(h);
                break;
            case 4:
                improveFourOfAKind(h);
                break;
            default:
                break;
        }
    }

    void flushIsClose(int h[5][2])
    {
        resetCardCounter();
        resetSuitCounter();

        for(int i = 0; i < 5; ++i)
            cardCounter2[h[i][1]][h[i][0]]++;

        for(int r = 0; r < 4; ++r)
        {
            for(int c = 0; c < 13; ++c)
            {
                if(cardCounter2[r][c] == 1)
                    suitCounter[r]++;
            }
        }

        for(int i = 0; i < 4; ++i)
        {
            if(suitCounter[i] == 3)
            {
                //discard 2 cards of other suit(s)

                int goodSuit = i; //suit to keep
                int card1r, card1c;
                int card2r, card2c;

                int index = 1;

                for(int j = 0; j < 2; ++j)
                {
                    for(int r = 0; r < 4; ++r)
                    {
                        for(int c = 0; c < 13; ++c)
                        {
                            if(r != goodSuit && cardCounter2[r][c] != 0)
                            {
                                switch(index)
                                {
                                    case 1:
                                        card1c = c;
                                        card1r = r;
                                        index++;
                                        break;
                                    case 2:
                                        card2c = c;
                                        card2r = r;
                                        index++;
                                        break;
                                }
                            }
                        }
                    }
                }

                changeTwoCards(h, card1r, card1c, card2r, card2c);

            }
            else if(suitCounter[i] == 4)
            {
                //discard 1 card of other suit
                int goodSuit = i; //suit to keep
                int card1r, card1c;

                for(int r = 0; r < 4; ++r)
                {
                    for(int c = 0; c < 13; ++c)
                    {
                        if(r != goodSuit && cardCounter2[r][c] != 0)
                        {
                            card1c = c;
                            card1r = r;
                        }
                    }
                }


                changeOneCard(h, card1r, card1c);


            }
        }
    }

    void changeThreeLowest(int h[5][2])
    {
        //cout << "Going for something better than this..." << endl;

        for(int i = 0; i < 5; ++i)
            cardCounter2[h[i][1]][h[i][0]]++;

        //replace lowest 3 cards
        int card1r, card1c;
        int card2r, card2c;
        int card3r, card3c;

        int index = 1;

        for(int c = 0; c < 13; ++c)
        {
            for(int r = 0; r < 4; ++r)
            {
                if(cardCounter2[r][c] == 1)
                {
                    if(index == 1)
                    {
                        card1c = c;
                        card1r = r;
                        index++;
                    }
                    else if(index == 2)
                    {
                        card2c = c;
                        card2r = r;
                        index++;
                    }
                    else if(index == 3)
                    {
                        card3c = c;
                        card3r = r;
                        index++;
                    }
                }
            }
        }


        changeThreeCards(h, card1r, card1c, card2r, card2c, card3r, card3c);


    }

    void checkHighCard(int h[5][2])
    {
        resetSuitCounter();
        resetCardCounter();

        for(int r = 0; r < 5; ++r)
        {
            suitCounter[h[r][1]]++;
        }

        bool doFlushCheck = false;

        for(int r = 0; r < 4; ++r)
            if(suitCounter[r] >= 3)
                doFlushCheck = true;

        if(doFlushCheck)
        {
            flushIsClose(h);
        }
        else
        {
            changeThreeLowest(h);
        }





    }

    void checkPair(int h[5][2])
    {
        //cout << "Trying to improve the pair..." << endl;

        resetSuitCounter();
        resetCardCounter();

        fillCardCounter(h);
        fillCardCounter2(h);

        int card1r, card1c;
        int card2r, card2c;
        int card3r, card3c;

        int pairValue;

        for(int i = 0; i < 13; ++i)
            if(cardCounter[i] == 2)
                pairValue = i;

        for(int i = 0; i < 3; ++i)
        {
            for(int r = 0; r < 4; ++r)
            {
                for(int c = 0; c < 13; ++c)
                {
                    if(c != pairValue && cardCounter2[r][c] == 1)
                    {
                        if(i == 0)
                        {
                            card1r = r;
                            card1c = c;
                            i++;
                        }
                        else if(i == 1)
                        {
                            card2c = c;
                            card2r = r;
                            i++;
                        }
                        else if(i == 2)
                        {
                            card3c = c;
                            card3r = r;
                            i++;
                        }
                    }
                }
            }
        }

        changeThreeCards(h, card1r, card1c, card2r, card2c, card3r, card3c);


    }

    void improveThreeOfAKind(int h[5][2])
    {
        //cout << "Trying for more than three..." << endl;

        resetSuitCounter();
        resetCardCounter();

        fillCardCounter(h);
        fillCardCounter2(h);

        int card1r, card1c;
        int card2r, card2c;

        int tripleValue;

        for(int i = 0; i < 13; ++i)
            if(cardCounter[i] == 3)
                tripleValue = i;

//        cout << "triple: " << tripleValue << endl;


        //identify cards to be removed
        for(int i = 0; i < 2; ++i)
        {
            for(int r = 0; r < 4; ++r)
            {
                for(int c = 0; c < 13; ++c)
                {
                    if(c != tripleValue && cardCounter2[r][c] == 1)
                    {
                        if(i == 0)
                        {
                            card1r = r;
                            card1c = c;
                            i++;
                        }
                        else if(i == 1)
                        {
                            card2c = c;
                            card2r = r;
                            i++;
                        }
                    }
                }
            }
        }

        changeTwoCards(h, card1r, card1c, card2r, card2c);
    }

    void improveFourOfAKind(int h[5][2])
    {
        //cout << "Trying for a slight improvement..." << endl;

        resetSuitCounter();
        resetCardCounter();
        fillCardCounter(h);
        fillCardCounter2(h);

        int card1r, card1c;

        int quad;

        for(int i = 0; i < 13; ++i)
        {
            if(cardCounter[i] == 4)
                quad = i;
        }

        for(int r = 0; r < 4; ++r)
        {
            for(int c = 0; c < 13; ++c)
            {
                if(c != quad && cardCounter2[r][c] == 1)
                {
                        card1r = r;
                        card1c = c;
                }
            }
        }

        changeOneCard(h, card1r, card1c);
    }

    void test()
    {
        checkStraight(dealersHand);
    }

    bool goodChanceForStraight(int h[5][2])
    {
        resetSuitCounter();
        resetCardCounter();

        fillCardCounter(h);
        fillCardCounter2(h);

        for(int i = 0; i < 9; ++i)
        {
            if(cardCounter[i] == 1)
            {
                if(cardCounter[i+1] == 1
                && cardCounter[i+2] == 1
                && cardCounter[i+3] == 1)
                {
                    return true;
                }
            }
        }

        return false;
    }

    void checkStraight(int h[5][2])
    {
        resetSuitCounter();
        resetCardCounter();

        fillCardCounter(h);
        fillCardCounter2(h);

        //outputCardCounter2();

        int a, b; //limits of 4 card straight

        for(int i = 0; i < 9; ++i)
        {
            if(cardCounter[i] == 1)
            {
                if(cardCounter[i+1] == 1
                && cardCounter[i+2] == 1
                && cardCounter[i+3] == 1)
                {
                    a = i;
                    b = i + 3;

                    goForStraight(h, a, b);
                }
            }
        }
    }

    void goForStraight(int h[5][2], int a, int b)
    {


        int card1r, card1c;

        for(int i = 0; i < 4; ++i)
        {
            for(int j = 0; j < a; ++j)
            {
                if(cardCounter2[i][j] == 1)
                {
                    card1r = i;
                    card1c = j;
                }
            }

            for(int j = b+1; j < 13; ++j)
            {
                if(cardCounter2[i][j] == 1)
                {
                    card1r = i;
                    card1c = j;
                }
            }

        }

        changeOneCard(h, card1r, card1c);

        //outputCardCounter2();

    }

    void outputCardCounter()
    {
        for(int c = 0; c < 13; ++c)
            cout << setw(4) << cardCounter[c];
    }

    void outputCardCounter2()
    {
        for(int r = 0; r < 4; ++r)
        {
            for(int c = 0; c < 13; ++c)
            {
                cout << setw(4) << cardCounter2[r][c];
            }
            cout << endl;
        }
    }

    void improveTwoPairs(int h[5][2])
    {
        resetSuitCounter();
        resetCardCounter();
        fillCardCounter(h);
        fillCardCounter2(h);

        int card1r, card1c;

        int pair1 = -1, pair2 = -1;

        for(int i = 0; i < 13; ++i)
        {
            if(cardCounter[i] == 2 && pair1 == -1)
                pair1 = i;
            else if(cardCounter[i] == 2 && pair2 == -1)
                pair2 = i;
        }

        for(int r = 0; r < 4; ++r)
        {
            for(int c = 0; c < 13; ++c)
            {
                if(c != pair1 && c != pair2 && cardCounter2[r][c] == 1)
                {
                        card1r = r;
                        card1c = c;
                }
            }
        }

        changeOneCard(h, card1r, card1c);
    }

    void changeOneCard(int h[5][2], int card1r, int card1c)
    {
        cout << "\nDealer changes one card..." << endl;

        cardCounter2[card1r][card1c] = 0;

        for(int r = 0; r < 4; r++)
        {
            for(int c = 0; c < 13; c++)
            {
                if(deck[r][c] == deckNumber)
                {
                    cardCounter2[r][c] = 1;
                    deckNumber++;
                    r = 4;
                    c = 13;
                }
            }
        }

        int index = 0;

        for(int r = 0; r < 4; ++r)
        {
            for(int c = 0; c < 13; ++c)
            {
                if(cardCounter2[r][c] == 1)
                {
                    h[index][0] = c;
                    h[index][1] = r;
                    index++;
                }
            }
        }
    }

    void changeTwoCards(int h[5][2], int card1r, int card1c, int card2r, int card2c)
    {
        cout << "\nDealer changes two cards..." << endl;

        cardCounter2[card1r][card1c] = 0;
        cardCounter2[card2r][card2c] = 0;

        //assigns next 3 cards in the deck
        for(int card = 0; card < 2; ++card)
        {
            for(int r = 0; r < 4; r++)
            {
                for(int c = 0; c < 13; c++)
                {
                    if(deck[r][c] == deckNumber)
                    {
                        cardCounter2[r][c] = 1;
                        deckNumber++;
                        r = 4;
                        c = 13;
                    }
                }
            }
        }

        int index = 0;

        for(int r = 0; r < 4; ++r)
        {
            for(int c = 0; c < 13; ++c)
            {
                if(cardCounter2[r][c] == 1)
                {
                    h[index][0] = c;
                    h[index][1] = r;
                    index++;
                }
            }
        }
    }

    void changeThreeCards(int h[5][2], int card1r, int card1c, int card2r, int card2c, int card3r, int card3c)
    {
        cout << "\nDealer changes three cards..." << endl;

        cardCounter2[card1r][card1c] = 0;
        cardCounter2[card2r][card2c] = 0;
        cardCounter2[card3r][card3c] = 0;

        //assigns next 3 cards in the deck
        for(int card = 0; card < 3; ++card)
        {
            for(int r = 0; r < 4; r++)
            {
                for(int c = 0; c < 13; c++)
                {
                    if(deck[r][c] == deckNumber)
                    {
                        cardCounter2[r][c] = 1;
                        deckNumber++;
                        r = 4;
                        c = 13;
                    }
                }
            }
        }

        int index = 0;

        for(int r = 0; r < 4; ++r)
        {
            for(int c = 0; c < 13; ++c)
            {
                if(cardCounter2[r][c] == 1)
                {
                    h[index][0] = c;
                    h[index][1] = r;
                    index++;
                }
            }
        }
    }

    void fillCardCounter(int h[5][2])
    {
        for(int i = 0; i < 5; ++i)
            cardCounter[h[i][0]]++;
    }

    void fillCardCounter2(int h[5][2])
    {
        for(int i = 0; i < 5; ++i)
            cardCounter2[h[i][1]][h[i][0]]++;
    }

    void swapOneCard(int h[5][2], int card)
    {
        hand[card][0] = 0;
        hand[card][1] = 0;

        for(int r = 0; r < 4; r++)
        {
            for(int c = 0; c < 13; c++)
            {
                if(deck[r][c] == deckNumber)
                {
                    hand[card][0] = c;
                    hand[card][1] = r;
                    deckNumber++;
                    r = 4;
                    c = 13;
                }
            }
        }
    }

    void swapCards()
    {
        int num;
        int choice;

        int entries[5] = {0};
        int entriesIndex = 0;

        cout << "\nEnter number of cards to swap followed by the card numbers: ";
        cin >> num;

        while(num < 0 || num > 5)
        {
            cout << "Invalid input (" << num << "). Input again: ";
            cin >> num;
        }

        if(num == 0)
        {
            cout << "You chose not to swap any cards." << endl;
        }
        else if(num == 5)
        {
            cout << "You chose to swap ALL your cards." << endl;
            for(int i = 0; i < 5; ++i)
            {
                swapOneCard(hand, i);
            }
        }
        else
        {
            cout << "You chose to swap " << num << " cards." << endl;

            for(int i = 0; i < num; ++i)
            {
                cin >> choice;

                while(choice < 1 || choice > 5)
                {
                    cout << "Invalid input (" << choice << "). Input again: ";
                    cin >> choice;
                }

                while(searchEntries(entries, choice))
                {
                    cout << "You've already chosen that card (" << choice << ").\nChoose another: ";
                    cin >> choice;
                }

                entries[entriesIndex++] = choice; //store entry

                swapOneCard(hand, choice - 1);
                cout << "Changed card in position " << choice << endl;
            }
        }
    }





    bool searchEntries(int e[], int key)
    {
        for(int i = 0; i < 5; ++i)
        {
            if(e[i] == key)
                return true;
        }

        return false;
    }

    void help()
    {
        cout << endl;
        cout << "To play the game, first look at your cards and decided which" << endl;
        cout << "cards you would like to keep, and which cards you would like" << endl;
        cout << "to swap for new cards." << endl << endl;

        cout << "Once you have decided, input your selection like the example" << endl;
        cout << "below." << endl << endl;

        helpDemo();

        cout << endl << endl;
        cout << "First enter the number of cards you want to swap. Then enter" << endl;
        cout << "the positional number located next to each card. All numbers" << endl;
        cout << "must be separated by a space." << endl << endl;

        cout << "Example: 2 1 2" << endl;
        cout << "This will swap the 2 cards in positions 1 and 2." << endl << endl;

        cout << "Example: 3 3 4 5" << endl;
        cout << "This will swap the 3 cards in positions 3, 4, and 5." << endl << endl;

        cout << "There currently isn't any error checking code written as of" << endl;
        cout << "yet, so try not to mess up the input. If that happens, just" << endl;
        cout << "restart the game. :)" << endl << endl;

        system("pause");
    }

    void helpDemo()
    {
        shuffle();
        dealHand();
        showYourHand();
    }

    void runPokerGame()
    {
        char helpme;
        int exit;
        sf::Texture t;
        sf::Sprite s;
        t.loadFromFile("img/background.jpg");
        s.setTexture(t);
        window.clear();
        window.draw(s);

        cout << "\nTHE GAME HAS BEGUN!!!" << endl;
        sf::Event Event;
        while(window.pollEvent(Event))
        {
            switch(Event.type){
             case sf::Event::Closed:
             {
                    window.close();
                    break;
             }

            }
    window.clear(sf::Color::White);
    window.draw(s);
   	window.display();

    }
        resetAll();
        shuffle();
        dealHand();
        dealDealersHand();



        for(int i = 1; i < 4; ++i)
        {
            cout << endl;
            //cout <<
            cout << "*** ROUND " << i << " OF 3 ***" << endl;
            showYourHand();
            evaluateDealersHand();

            swapCards();
        }

        cout << "\nShow 'em!" << endl;
        showYourHand();
        showDealersHand();
        compareHands();

        cout << "\nTHANKS FOR PLAYING!" << endl << endl;

        cout << "Press any key to exit." << endl;
        cout <<"Press 1 to play again." << endl;
        cout<<"Press 2 to go to the main menu."<<endl;
        cin >> exit;


        if(exit == 1){
                DeckOfCards deckOfCards;
                deckOfCards.runPokerGame();

        }
        else if(exit == 2){
            window.clear();
            main();
        }
        else{system("pause");}

    }

    void welcome()
    {


        cout << "Press CTRL + BREAK at any time to exit." << endl;
        cout << "BREAK should be located above Page Up" << endl;
    }

private:
    int deckNumber;

    int deck[ 4 ][ 13 ]; // represents deck of cards
    int hand[ 5 ][ 2 ]; //represents hand
    int dealersHand[ 5 ][ 2 ];
    int temp[5][2];

    int handValue;
    int dealersHandValue;

    int cardCounter[ 13 ]; //counts how many cards of each face a hand contains
    int suitCounter[4]; //counts how many cards of each suit a hand contains
    int cardCounter2[4][13]; //includes face and suit

    int pairs;
    int twoPairs;
    int threes;
    int fours;
    int flushes;
    int straights;
    int fullHouses;
    int straightFlushes;
    int royalFlushes;

}; // end class DeckOfCards




class help{

public:
     void help1()
    {
        cout << endl;
        cout << "To play the game, first look at your cards and decided which" << endl;
        cout << "cards you would like to keep, and which cards you would like" << endl;
        cout << "to swap for new cards." << endl << endl;

        cout << "Once you have decided, input your selection like the example" << endl;
        cout << "below." << endl << endl;



        cout << endl << endl;
        cout << "First enter the number of cards you want to swap. Then enter" << endl;
        cout << "the positional number located next to each card. All numbers" << endl;
        cout << "must be separated by a space." << endl << endl;

        cout << "Example: 2 1 2" << endl;
        cout << "This will swap the 2 cards in positions 1 and 2." << endl << endl;

        cout << "Example: 3 3 4 5" << endl;
        cout << "This will swap the 3 cards in positions 3, 4, and 5." << endl << endl;

        cout << "There currently isn't any error checking code written as of" << endl;
        cout << "yet, so try not to mess up the input. If that happens, just" << endl;
        cout << "restart the game. :)" << endl << endl;

        system("pause");
    }
    void help2()
    {
        cout<<"To begin select the amount of birr you want to have"<<endl;
        cout<<"You will be dealt a card. You then guess whether the next"<<endl;
        cout<<"card is higher in rank ,'high', or lower in rank, 'low'"<<endl;


        cout << "There currently isn't any error checking code written as of" << endl;
        cout << "yet, so try not to mess up the input. If that happens, just" << endl;
        cout << "restart the game. :)" << endl << endl;

        system("pause");
    }

};



int main()
{
    int choice;
    char helpme;
    int helpchoice;
    float height;
    float width;
    int c;

    height = window.getSize().x;
    width = window.getSize().y;
    sf::Texture t;
    sf::Font font;
    sf::Text txt;
        sf::Sprite s;
    sf::Texture cards;
    sf::Sprite ded;
    assert(font.loadFromFile("font/CoffeeTin.ttf"));
    txt.setFont(font);
    txt.setCharacterSize(120);
    txt.setString("Multi Card Game");
    t.loadFromFile("img/background.jpg");
    s.setTexture(t);


    sf::Texture button;
    sf::Sprite buttonimg;
    assert(button.loadFromFile("img/Highness.png"));
    buttonimg.setTexture(button);
    buttonimg.setPosition(height/4 + 200, width/4);

    float buttonWidth =buttonimg.getLocalBounds().width;
    float buttonHeight = buttonimg.getLocalBounds().height;

    buttonimg.setTexture(button);


    sf::Texture button2;
    sf::Sprite button2img;
    assert(button2.loadFromFile("img/poker.png"));
    button2img.setTexture(button2);
    button2img.setPosition(height/4, width/4);

    float button2Width =button2img.getLocalBounds().width;
    float button2Height = button2img.getLocalBounds().height;

    button2img.setTexture(button2);




    while(window.isOpen())
    {
        sf::Event Event;
        while(window.pollEvent(Event))
        {
            switch(Event.type)
            {
            case sf::Event::Closed:
                    window.close();
                    break;

            case sf::Event::MouseButtonPressed:
                {
                   sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                    sf::Vector2f mousePosF( static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
                    if(buttonimg.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        window.clear();
                         Player player;
                        player.maingame();
                    }

                   else if(button2img.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        window.clear();
                        DeckOfCards deckOfCards;
                        deckOfCards.runPokerGame();



                    }
                   /* else if(button3img.getGlobalBounds().contains(mousePosF))
                    {
                        cout<<"Clicked, yay!"<<endl;
                        mainbjgame();
                    }
                    break;*/
                }
            }
        }
        window.clear(sf::Color::White);


        window.draw(s);
        window.draw(ded);
        window.draw(txt);
		window.draw(buttonimg);
        window.draw(button2img);
		window.display();
    }

    cout << "\nView help? (Y/N) ";
    cin >> helpme;

    if(helpme == 'y' || helpme == 'Y'){
        cout<<"Choose for which game"<<endl;
        cout<<"1.Highness"<<endl;
        cout<<"2.Poker"<<endl;
        cin>>helpchoice;
        if(helpchoice == 1){
            help Help;
            Help.help1();
        }
        else if(helpchoice == 2){
            help Help;
            Help.help2();
        }
    }

    cout<<"Choose your game"<<endl;
    cout<<"1.Highness"<<endl;
    cout<<"2.Poker"<<endl;
    cin>>choice;
    if(choice == 1)
    {
    Player player;
    player.maingame();
    }
    else if(choice == 2)
    {
      DeckOfCards deckOfCards;
    deckOfCards.runPokerGame();


    }

    else
    {
        cout<<"Stop wasting my time"<<endl;
        cout<<"open me again, human"<<endl;
    }
    return 0;}


