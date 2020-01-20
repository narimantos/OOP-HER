Intro-OOP


```cpp

class PapierenTicket : public Ticket {
private:
int barcode;
public:
 PapierenTicket(int,int);
 bool scan();
};

```

```cpp
class Ticket {
private:
int nummer;
bool ingechecked;
public:
Ticket(int);
virtual ~Ticket() {}
int ticketNummer() const;
bool isIngechecked()
const;
void resetIngechecked();
virtual bool scan() = 0;
};

```

```cpp
class TicketService {
private:
string bureau;
vector<Ticket*> registratie;
public:
TicketService(string);
void scanTicket(Ticket*);
void voegTicketToe(Ticket*);
int aantalTickets() const;
int aantalNietIngechecked() const;
Ticket* copyDigitaleTicket(DigitaleTicket*);
};
```

```cpp
int main()
{
 TicketService ts("L&B");
 DigitaleTicket dt1("john",1);
 ts.voegTicketToe(&dt1);
 PapierenTicket pt1(10101010,2); //barcode en ticketnummer
 ts.voegTicketToe(&pt1);
 ts.voegTicketToe(new PapierenTicket(10101011,3));
 int hoeveelVerkochteTicket=ts.aantalTickets();
 int nietGekomen=ts.aantalNietIngechecked();
 return 0;
}
```

![alt](./Images/Class-diagram.PNG)


# opgave 1


1. De functie ```void voegTicketToe(Ticket*);``` van de klasse ```TicketService``` voegt een ticket toe aan de registratie. Wat zou voor deze functie een gevolg zijn wanneer const achter de methode ```void voegTicketToe(Ticket*);``` wordt gezet?

1. Wat is in dit voorbeeld het gevolg wanneer de ```=0``` achter de methode ```virtual bool scan() = 0;``` van de klasse Ticket wordt weggelaten?

1. Wat is in dit voorbeeld het gevolg wanneer de methoden van de klasse ```TicketService``` onder ```private```: vallen.

1. Geef de implementatie (programmacode) van constructor van de klasse ```Ticket```.


1. Is in de code van de main routine sprake van een ```“memory leak”```, geef een korte uitleg.

1. Kan het volgende statement in de main uitgevoerd worden? Geef een korte uitleg. ```Ticket& tc(pt1);```

1. Kan het volgende statement in de main uitgevoerd worden? Geef een korte uitleg. ```Ticket tc2=pt1;```

1. Pas de ```operator=``` zodanig aan, zodat bij het uitvoeren van het statement ```TicketService tserv2=ts;``` beide ticketservices identiek zijn maar wel hun eigen tickets hebben.

1.  Geef de implementatie (programmacode) van de methode ```void voegTicketToe(Ticket*);``` van de klasse ```TicketService```
1.  Geef de implementatie (programmacode) van de constructor van de klasse ```PapierenTicket```.

1.  De methode ```int aantalNietIngechecked()const;``` van de klasse ```TicketService``` geeft het aantal tickets die niet ingechecked zijn mee terug. Geef de implementatie (programmacode) van de methode ```int aantalNietIngechecked()const;``` van de klasse ```TicketService```.


1.  Wanneer de klasse ```TicketService``` veralgemeniseerd wordt in b.v. de klasse ```ServiceUitgave``` zodat deze ook gebruikt kan gaan worden voor verschillende klassen. Zal de klasse ```TicketService``` moeten worden aangepast in bijvoorbeeld een klasse ```ServiceUitgave```. Verander de klasse ``` TicketService ``` in een klasse``` ServiceUitgave```, zodat deze ook geschikt is voor objecten van een andere klasse dan ```Ticket```. Geef ook een voorbeeld in code hoe een object van de klasse ```ServiceUitgave``` aangemaakt wordt.

# opgave 2
Een hacker wil een papieren ticket kopiëren. Dat kan door het resetten van tickets van bezoekers die al binnen zijn.

In de klasse ```TicketService``` wordt de methode ```void copyPapierenTicket(PapierenTicket*)``` anders ingevuld. Als eerste wordt gecontroleerd of de meegeven ```papierenticket``` al is ingechecked. Is dit zo, dan kan een copy gemaakt worden. Anders gebeurt er niets en wordt een 0 mee teruggegeven. Om een ```papierenticket``` te kopiëren wordt als eerste de waarde ```ingechecked gereset```. Hierna
wordt de ticket gekopieerd. Hieronder het scenario voor een ticket dat al ingechecked is

![alt](./Images/Sequentie-diagram.PNG)
1. Geef de implementatie (programmacode) van de methode ```Ticket* copyPapierenTicket(PapierenTicket*)``` van de klasse ```TicketService``` (10 punten) 