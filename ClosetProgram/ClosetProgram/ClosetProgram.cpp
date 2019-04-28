// ClosetProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Object.h"
#include "Closet.h"
#include "Drawer.h"
#include "Clothing.h"
#include "Person.h"
#include <iostream>
#include <vector>


int main()
{
	//iets om de kasten in op te slaan, mag ook een list zijn of dictionary, wat je wilt zolang je er maar mee kan werken
	std::vector<Closet> closets;

	//3 kasten aanmaken
	for (int i = 0; i < 3; ++i) {
						//met een naam		//van de int(?)		//een afmeting en een capacity
		Closet aCloset( "Closet number: " + std::to_string(i + 1), {150, 180, 40}, 10 );
		//deze in de array gooien
		closets.push_back(aCloset);
	}//hier weer naar magister gekeken wat nu ook alweer-->
	//oh ja de lades 6 kleding lades (kleding class gemaakt, van object ge-extend)..
	//hmm nu functionaliteit om lades toe te voegen aan mijn 10 laden kast
	std::string drawerType;
	for (int i = 0; i < 6; ++i) {
		//eerste kast was voor kleding, dus alleen de naam verschilt
		switch (i)
		{
		case 0:
			drawerType = "sock";
			break;
		case 1:
			drawerType = "blousi(?)";
			break;
		case 2:
			drawerType = "pants";
			break;
		case 3:
			drawerType = "ties";
			break;
		case 4:
			drawerType = "shirts";
			break;
		case 5:
			drawerType = "underwear";
		}
		//dan een drawertje maken
		Drawer aDrawer( drawerType, { 150, 20, 40 }, 10);
		//drawer volstoppen met kleding
		for (int j = 0; j < 10; ++j) {
			Clothing aPieceOfClothing(drawerType + " " + std::to_string(j + 1));
			aDrawer.AddItem(aPieceOfClothing);
		}
		closets.at(0).AddDrawer(aDrawer);
	}
	//vervolgens 5 lades in kast nr 2
	for (int i = 0; i < 5; ++i) {
		if (i == 0) {
			//dacht laten we maar onderschijt maken in meervoud en enkelvoud
			Drawer* aDrawer = new Drawer("socks", { 150, 20, 40 }, 10);
			for (int j = 0; j < 10; ++j) {
				Clothing* socks = new Clothing("sock " + std::to_string(j + 1)); //<-- kunnen we ze later herkennen aan een ID
				aDrawer->AddItem(socks);
			}
			closets.at(1).AddDrawer(*aDrawer);
		}
		if (i == 1) {
			Drawer* aDrawer = new Drawer("blouses", { 150, 20, 40 }, 10);
			for (int j = 0; j < 10; ++j) {
				Clothing* blouses = new Clothing("blous " + std::to_string(j + 1));
				aDrawer->AddItem(blouses);
			}
			closets.at(1).AddDrawer(*aDrawer);
		}
		if (i == 2) {
			Drawer* aDrawer = new Drawer("pants", { 150, 20, 40 }, 10);
			for (int j = 0; j < 10; ++j) {
				Clothing* clothing = new Clothing("pants " + std::to_string(j + 1));
				aDrawer->AddItem(clothing);
			}
			closets.at(1).AddDrawer(*aDrawer);
		}
		if (i == 3) {
			Drawer* aDrawer = new Drawer("watches", { 150, 20, 40 }, 10);
			for (int j = 0; j < 10; ++j) {
				Object* objects = new Object("watch " + std::to_string(j + 1));
				aDrawer->AddItem(objects);
			}
			closets.at(1).AddDrawer(*aDrawer);
		}
		if (i == 4) {
			Drawer* aDrawer = new Drawer("jewelery", { 150, 20, 40 }, 10);
			for (int j = 0; j < 10; ++j) {
				Object* objects = new Object("jewelery " + std::to_string(j + 1));
				aDrawer->AddItem(objects);
			}
			closets.at(1).AddDrawer(*aDrawer);
		}

		//en jeetje wat een grote opdracht nu ik hem zelf maak :x
		//maargoed laatste kast:
		//6 lades-> 3 kleding 3 mensen (mensen class maken.. wel blij dat ik 'm van object heb ge-extend nu en een diagrammetje heb gemaakt =)

		//genoeg ervan om op meerdere plaatsen naampjes aan te passen:
		std::string singular;
		std::string plural;
		//end of lazy strings

		for (int i = 0; i < 6; ++i) {
			if (i == 0) {
				singular = "sock";
				plural = singular + "s"; //<-winning!
				//een kast voor [plural] =)
				Drawer* aDrawer = new Drawer(plural, { 150, 20, 40 }, 10);
				for (int j = 0; j < 10; ++j) {
					//met daarin meerdere [singular]
					Clothing* pieceOfClothing = new Clothing(singular + " " +std::to_string(j + 1)); //control + alt kan je op meerdere plaatsen je cursor neerzetten
					//deze toevoegen aan de drawer
					aDrawer->AddItem(pieceOfClothing);
				}
				//en dan de drawer weer toevoegen aan de kast
				closets.at(2).AddDrawer(*aDrawer);
			}

			//dit voor elke lade:
			if (i == 1) {
				singular = "blouse";
				plural = singular + "s";
				Drawer* aDrawer = new Drawer(plural, { 150, 20, 40 }, 10);
				for (int j = 0; j < 10; ++j) {
					Clothing* pieceOfClothing = new Clothing(singular + " " +std::to_string(j + 1));
					aDrawer->AddItem(pieceOfClothing);
				}
				closets.at(2).AddDrawer(*aDrawer);
			}
			if (i == 2) {
				singular = "pants";
				plural = singular; //<-- de uitzondering!
				Drawer* aDrawer = new Drawer(plural, { 150, 20, 40 }, 10);
				for (int j = 0; j < 10; ++j) {
					Clothing* pieceOfClothing = new Clothing(singular + " " +std::to_string(j + 1));
					aDrawer->AddItem(pieceOfClothing);
				}
				closets.at(2).AddDrawer(*aDrawer);
			}
			if (i == 3) {
				singular = "teacher";
				plural = singular + "s";
				Drawer* aDrawer = new Drawer(plural, { 150, 20, 40 }, 10);
				for (int j = 0; j < 10; ++j) {
					Person* aPerson = new Person(singular + " " +std::to_string(j + 1));
					aDrawer->AddItem(aPerson);
				}
				closets.at(2).AddDrawer(*aDrawer);
			}
			if (i == 4) {
				singular = "student";
				plural = singular + "s";
				Drawer* aDrawer = new Drawer(plural, { 150, 20, 40 }, 10);
				for (int j = 0; j < 10; ++j) {
					Person* aPerson = new Person(singular + " " +std::to_string(j + 1));
					aDrawer->AddItem(aPerson);
				}
				closets.at(2).AddDrawer(*aDrawer);
			}
			if (i == 5) {
				singular = "fossil";
				plural = singular + "s";
				Drawer* aDrawer = new Drawer(plural, { 150, 20, 40 }, 10);
				for (int j = 0; j < 10; ++j) {
					Person* aPerson = new Person(singular + " " +std::to_string(j + 1));
					aDrawer->AddItem(aPerson);
				}
				closets.at(2).AddDrawer(*aDrawer);
			}
		}

		//nou 100+ regels verders wil ik graag ook nog iets van output, laten we de namen nemen van elke kast, en dan daarvan
		//de naam van elke lade en daarvan
		//de naam van elk object
		//lijkt me nice om dat alleen in de closet te doen als output
		for (Closet closet : closets) {
			closet.ListContents();
			//fancy ^_^
		}
		//nou dat is hem.. hijs wel heftig.....
		//goed veel van geleerd :$

		//Maar zeker mogelijk in <200 regels code.. (in de main)!!
	}
}






//al niet veel