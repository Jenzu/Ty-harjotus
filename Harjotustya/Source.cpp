#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

//Alustetaan jokaiselle peligenrelle oma aliohjelma.
//Alku aliohjelmassa on kaikki peligenret, käyttäjä valitsee haluamansa ja sen jälkeen ohjelma siirtyy sen genren aliohjelmaan.
int alku(int val);
int fps(int val);
int strategy(int val);
int driving(int val);
int moba(int val);
void rate(int val);

int main()
{
	//main toimii lähinnä lopetusta varten, alussa mennään vain alku-aliohjelmaan ja kun sieltä tullaan pois ohjelma sulkeutuu.	
	int val = 0;
	std::cout << "//Harjotusty\x84 by Jesse Nieminen & Jari R\x94nk\x84//";
	alku(val);
	std::cout << "\nKiitos k\x84yt\x94st\x84\n";
}

int alku(int val)
{
	//Käyttäjä valitsee haluamansa peligenren. Jos valitaan 0, ohjelma sulkeutuu.
	std::cout << "\nValitse haluamasi peligenre: \n";
	std::cout << "1) First-person shooter\n2) Strategy\n3) driving\n4) MOBA\n5) Arvostelut\n0) Lopeta\n";
	std::cin >> val;
	std::string rating;
	switch (val)
	{
		case 1:
		{
			//Tässä tapauksessa käyttäjä valitsi kohdan 1 eli fps.
			system("cls");
			fps(val);
			return 0;
			break;
		}
		case 2:
		{
			system("cls");
			strategy(val);
			return 0;
			break;
		}
		case 3:
		{
			system("cls");
			driving(val);
			return 0;
			break;
		}
		case 4:
		{
			system("cls");
			moba(val);
			return 0;
			break;
		}
		case 5:
		{
			system("cls");
			rate(val);
			return 0;
			break;
		}
		case 0:
		{
			return 0;
			break;
		}
		default:
		{
			std::cout << "Tuntematon sy\x94te." << std::endl;
			break;
		}
	}
	return 0;
}

//FPS, aliohjelma
int fps(int val)
{
	std::string line;
	//Switch looppaa niin kauan kunnes käyttäjä haluaa palata takaisin genrevalikkoon joka tapahtuu painamalla 0.
	while (val != 0)
	{
		std::cout << "//First-Person Shooter//\n\nValitse peli: \n1) ARMA\n2) Battlefield\n3) Borderlands\n4) Counter-Strike\n5) Crysis\n0) Palaa genrevalikkoon\n";
		std::cin >> val;
		switch (val)
		{
			case 1:
			{
				//Tässä tapauksessa käyttäjä valitsi kohdan 1 eli ARMA, tässä vaiheessa ohjelma lukee syötteen määritetystä tiedostosta ja tulostaa sen näytölle.
				std::ifstream filu("Arma.txt");
				if (filu)
				{
					std::cout << "Luetaan tiedostosta..." << std::endl;
					while (filu.peek() != EOF)
					{
						std::getline(filu, line);
						std::cout << line << std::endl;
					}
					filu.close();
				}
				std::cout << "\nPaina Enter jatkaaksesi.";
				std::cin.get();
				std::cin.ignore();
				system("cls");
				break;
			}
			case 2:
			{
				std::ifstream filu("Battlefield.txt");
				if (filu)
				{
					std::cout << "Luetaan tiedostosta..." << std::endl;
					while (filu.peek() != EOF)
					{
						std::getline(filu, line);
						std::cout << line << std::endl;
					}
					filu.close();
				}
				std::cout << "\nPaina Enter jatkaaksesi.";
				std::cin.get();
				std::cin.ignore();
				system("cls");
				break;
			}
			case 3:
			{
				std::ifstream filu("Borderlands.txt");
				if (filu)
				{
					std::cout << "Luetaan tiedostosta..." << std::endl;
					while (filu.peek() != EOF)
					{
						std::getline(filu, line);
						std::cout << line << std::endl;
					}
					filu.close();
				}
				std::cout << "\nPaina Enter jatkaaksesi.";
				std::cin.get();
				std::cin.ignore();
				system("cls");
				break;
			}
			case 4:
			{
				std::ifstream filu("Counter-Strike.txt");
				if (filu)
				{
					std::cout << "Luetaan tiedostosta..." << std::endl;
					while (filu.peek() != EOF)
					{
						std::getline(filu, line);
						std::cout << line << std::endl;
					}
					filu.close();
				}
				std::cout << "\nPaina Enter jatkaaksesi.";
				std::cin.get();
				std::cin.ignore();
				system("cls");
				break;
			}
			case 5:
			{
				std::ifstream filu("Crysis.txt");
				if (filu)
				{
					std::cout << "Luetaan tiedostosta..." << std::endl;
					while (filu.peek() != EOF)
					{
						std::getline(filu, line);
						std::cout << line << std::endl;
					}
					filu.close();
				}
				std::cout << "\nPaina Enter jatkaaksesi.";
				std::cin.get();
				std::cin.ignore();
				system("cls");
				break;
			}
			default:
			{
				std::cout << "Tuntematon sy\x94te." << std::endl;
				break;
			}
		}
	}
	system("cls");
	alku(val);
	return 0;
}
int strategy(int val)
{
	std::cout << "Valitsit strategy\n"; 
	std::cin.get();
	std::cin.ignore();
	system("cls");
	alku(val);
	return 0;
}
int driving(int val)
{
	std::string line;
	while (val != 0)
	{
		std::cout << "//Driving//\n\nValitse peli: \n1) FlatOut\n2) Forza Motorsport\n3) Gran Turismo\n4) Need for Speed\n0) Palaa genrevalikkoon\n";
		std::cin >> val;
		switch (val)
		{
			case 1:
			{
				std::ifstream drive("FlatOut.txt");
				if (drive)
				{
					std::cout << "Luetaan tiedostosta..." << std::endl;
					while (drive.peek() != EOF)
					{
						std::getline(drive, line);
						std::cout << line << std::endl;
					}
					drive.close();
				}
				std::cout << "\nPaina Enter jatkaaksesi.";
				std::cin.get();
				std::cin.ignore();
				system("cls");
				break;
			}
			case 2:
			{
				std::ifstream drive("Forza.txt");
				if (drive)
				{
					std::cout << "Luetaan tiedostosta..." << std::endl;
					while (drive.peek() != EOF)
					{
						std::getline(drive, line);
						std::cout << line << std::endl;
					}
					drive.close();
				}
				std::cout << "\nPaina Enter jatkaaksesi.";
				std::cin.get();
				std::cin.ignore();
				system("cls");
				break;
			}
			case 3:
			{
				std::ifstream drive("Gran Turismo.txt");
				if (drive)
				{
					std::cout << "Luetaan tiedostosta..." << std::endl;
					while (drive.peek() != EOF)
					{
						std::getline(drive, line);
						std::cout << line << std::endl;
					}
					drive.close();
				}
				std::cout << "\nPaina Enter jatkaaksesi.";
				std::cin.get();
				std::cin.ignore();
				system("cls");
				break;
			}
			case 4:
			{
				std::ifstream drive("Need for speed.txt");
				if (drive)
				{
					std::cout << "Luetaan tiedostosta..." << std::endl;
					while (drive.peek() != EOF)
					{
						std::getline(drive, line);
						std::cout << line << std::endl;
					}
					drive.close();
				}
				std::cout << "\nPaina Enter jatkaaksesi.";
				std::cin.get();
				std::cin.ignore();
				system("cls");
				break;
			}
			case 0:
			{
				system("cls");
				alku(val);
				break;
			}
			default:
			{
				std::cout << "Tuntematon sy\x94te." << std::endl;
				break;
			}
	    }
	}
	return 0;
}

int moba(int val)
{
	std::cout << "Valitsit moba\n";
	std::cin.get();
	std::cin.ignore();
	system("cls");
	alku(val);
	return 0;
}

void rate(int val)
{
	int rating = 0;
	while (val = !0)
	{
		std::cout << "1) Arvostele ohjelma\n2) Lue viimeisimmat arvostelut\n0) Palaa takaisin\n";
		std::cin >> val;
		if (val == 1)
		{
			std::cout << "Arvostele ohjelma aseteikolla 1-10: ";
			std::cin >> rating;
			std::ofstream rate("rating.txt", std::ifstream::app);
			if (rate)
			{
				rate << rating;
				rate << "\n";
				rate.close();
			}
		}
		if (val == 2)
		{
			std::string line;
			std::ifstream rate1("rating.txt");
			if (rate1)
			{
				std::cout << std::endl;
				while (rate1.peek() != EOF)
				{
					std::getline(rate1, line);
					std::cout << line << "/10" << std::endl;
				}
				rate1.close();
				std::cout << std::endl;
			}
		}
		if (val == 0)
		{
			system("cls");
			alku(val);
		}
	}

}