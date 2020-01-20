Intro OOP  (herkansing)


```CPP
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

# Opgave  1 

1. De functie ```void voegTicketToe(Ticket*);``` van de klasse ```TicketService``` voegt een ticket toe aan de registratie. Wat zou voor deze functie een gevolg zijn wanneer ```const``` achter de methode ```void voegTicketToe(Ticket*);``` wordt gezet?

2.  Wat is in dit voorbeeld het gevolg wanneer de ```=0``` achter de methode
```virtual bool scan() = 0;``` van de klasse ```Ticket``` wordt weggelaten?

1. Wat is in dit voorbeeld het gevolg wanneer de methoden van de klasse ```TicketService```
noemer ```private:``` vallen.

4. Geef de implementatie (programmacode) van ```constructor``` van de klasse ```Ticket```.

5. Is in de code van de ```main``` routine sprake van een ```memory leak```, geef een korte uitleg

6. Kan het volgende statement in de main uitgevoerd worden? Geef een korte uitleg.
```Ticket& tc(pt1);```

7. Kan het volgende statement in de main uitgevoerd worden? Geef een korte uitleg.
```Ticket tc2=pt1;```

8. Pas de ```operator=``` zodanig aan, zodat bij het uitvoeren van het statement
```TicketService tserv2=ts;``` beide ticketservices identiek zijn maar wel hun eigen
tickets hebben.

9. Geef de implementatie (programmacode) van de methode
```void voegTicketToe(Ticket*);``` van de klasse ```TicketService```.

10. Geef de implementatie (programmacode) van de ```constructor``` van de klasse
```PapierenTicket```

11. J: De methode ```int aantalNietIngechecked()const;``` van de klasse
```TicketService``` geeft het aantal tickets die niet ingechecked zijn mee terug.
 Geef de implementatie (programmacode) van de methode
```int aantalNietIngechecked()const;``` van de klasse ```TicketService```.

12. Wanneer de klasse TicketService veralgemeniseerd wordt in b.v. de klasse
```ServiceUitgave``` zodat deze ook gebruikt kan gaan worden voor verschillende klassen.
Zal de klasse ```TicketService``` moeten worden aangepast in bijvoorbeeld een klasse
```ServiceUitgave```.
Verander de klasse ```TicketService``` in een klasse ```ServiceUitgave```, zodat deze ook
geschikt is voor objecten van een andere klasse dan ```Ticket```.
Geef ook een voorbeeld in code hoe een object van de klasse ```ServiceUitgave```
aangemaakt wordt.


