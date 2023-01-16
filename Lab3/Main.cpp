#include <iostream>

#include "Menu.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Menu();
}

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	/*3.4.2
//	int songCount = 4, albumCount = 3;
//	Band* band = new Band;
//	InitializationBand(band, albumCount, songCount);
//	FillSongs(band->Albums->Songs, songCount);
//	FillAlbums(band->Albums, band->Albums->Songs, albumCount);
//	for (int i = 0; i < albumCount; i++)
//	{
//		cout << "#" << i+1 <<" Musical group: "  << band->Albums->Title << " year issue " << band->Albums->YearIssue << " their songs:" << endl;
//		for (int j = 0; j < songCount; j++)
//		{
//			cout << "#" << j+1 <<" song name " << band->Albums->Songs[i].Title << ", duration " << band->Albums->Songs[i].Duration << ", genre "; 
//			WriteGenre(band->Albums->Songs[i].GenreType);
//			cout << endl;
//		}
//		cout << endl << endl;
//	}
//	Song* neededSong = FindSong(band, "song name");
//	if (neededSong)
//	{
//		cout << "Need song name: " << neededSong->Title << " duration " << neededSong->Duration << " genre "; WriteGenre(neededSong->GenreType);
//	}
//	else
//	{
//		cout << "Not found" << endl;
//	}*/
//
//	//3.4.3
//	/*int songCount = 4, albumCount = 3;
//	Band* band = new Band;
//	InitializationBand(band, albumCount, songCount);
//	FillSongs(band->Albums->Songs, songCount);
//	FillAlbums(band->Albums, band->Albums->Songs, albumCount);
//	for (int i = 0; i < albumCount; i++)
//	{
//		cout << "#" << i + 1 << " Musical group: " << band->Albums->Title << " year issue " << band->Albums->YearIssue << " their songs:" << endl;
//		for (int j = 0; j < songCount; j++)
//		{
//			cout << "#" << j + 1 << " song name " << band->Albums->Songs[i].Title << ", duration " << band->Albums->Songs[i].Duration << ", genre ";
//			WriteGenre(band->Albums->Songs[i].GenreType);
//			cout << endl;
//		}
//		cout << endl << endl;
//	}
//	int songNumber = 0;
//	Song song = MakeSong("song name 2", Genre::FONK, (2 + 1) * 0.51);
//	Album* neededAlbum = FindAlbum(band, &song, &songNumber);
//	if (neededAlbum)
//	{
//		cout << "Album name: " << neededAlbum->Title << " year issue " << neededAlbum->YearIssue << endl;
//		cout << "Need song name: " << neededAlbum->Songs[songNumber].Title << " duration " << neededAlbum->Songs[songNumber].Duration 
//			<< " genre "; WriteGenre(neededAlbum->Songs[songNumber].GenreType);
//	}
//	else
//	{
//		cout << "Not found" << endl;
//	}*/
//
//	/*int songCount = 4, albumCount = 3;
//	Band* band = new Band;
//	InitializationBand(band, albumCount, songCount);
//	FillSongs(band->Albums->Songs, songCount);
//	FillAlbums(band->Albums, band->Albums->Songs, albumCount);*/
//	/*for (int i = 0; i < albumCount; i++)
//	{
//		cout << "#" << i + 1 << " Musical group: " << band->Albums->Title << " year issue " << band->Albums->YearIssue << " their songs:" << endl;
//		for (int j = 0; j < songCount; j++)
//		{
//			cout << "#" << j + 1 << " song name " << band->Albums->Songs[i].Title << ", duration " << band->Albums->Songs[i].Duration << ", genre ";
//			WriteGenre(band->Albums->Songs[i].GenreType);
//			cout << endl;
//		}
//		cout << endl << endl;
//	}*/
//	/*int allSongsCount = 0;
//	Song* allSong = GetAllSongs(band, &allSongsCount);
//	cout << "allSong = " << allSongsCount << endl << endl;;
//	if (allSong)
//	{
//		for (int i = 0; i < band->AlbumCount; i++)
//		{
//			for (int j = 0; j < band->Albums[i].SongCount; j++)
//			{
//				cout << "Need song name: " << allSong[j].Title << " duration " << allSong[j].Duration << " genre "; WriteGenre(allSong[j].GenreType);
//				cout << endl;
//			}
//		}
//	}
//	else
//	{
//		cout << "Not found" << endl;
//	}*/
//
////DemoBand();
//	//DemoRectangleWithPoint(); ++;
//	Flight flight;
//	Time arrival;
//	arrival.SetHour(4);
//	arrival.SetMinute(42);
//	flight.SetArrivalTime(arrival);
//	return 0;
//}

/*3.2.1 - 3.2.3
Book book;
try
{
	ReadBookFromConsole(Book& book);
}
catch (const std::exception& ex)
{
	cout << ex.what() << endl;
	ReadBookFromConsole(Book& book);
}
WriteBookToConsole(Book& book);
*/

/*3.2.4
Book book;
try
{
	DemoBook();
}
catch (const std::exception& ex)
{
	cout << ex.what() << endl;
	DemoBook();
}*/

/*3.2.5
const int AMOUNT = 3;
string author = "";
Book books[AMOUNT];

cout << "Enter the author ";
cin >> author;
for (int i = 0; i < AMOUNT; i++)
{
	ReadBookFromConsole(books[i]);
}
for (int i = 0; i < AMOUNT; i++)
{
	WriteBookToConsole(books[i]);
}

cout << "\n-------------------------------------------" << endl;

int check = FindBookByAuthor(books, AMOUNT, author);
if (check != -1)
{
	WriteBookToConsole(books[check]);
}
cout << "Author not founded" << endl;*/

/*3.2.6
while (true)
{
	try
	{
		DemoRoute();
		break;
	}
	catch (const std::exception& ex)
	{
		cout << ex.what();
	}
}*/

/*3.3.1
Point* point = MakePoint(2.5, 0);
cout << point->X << " " << point->Y << endl;
SetX(point, 5);
SetY(point, 2);
cout << point->X << " " << point->Y << endl;*/

/*3.3.2
Point* point = new Point();
MakePoint(2.4, 5.2);
try
{
	Rectangle* rectangle = MakeRectangle(point, 52, 25);
	//cout << rectangle->Length << " " << rectangle->Width << endl;
	SetLength(rectangle, 6);
	SetWidth(rectangle, 8);
	//cout << rectangle->Length << " " << rectangle->Width << endl;
}
catch (const std::exception& ex)
{
	cout << ex.what();
}  */

//3.3.3 - 3.3.5
//DemoRectangleWithPoint(); //TODO: Составить uml диаграмму 3.3.6(Point, Rectangle)

/*3.3.7
try
{
	Time* time = MakeTime(2018, 9, 27, 8, 32);
	SetYear(time, 1998);
	SetMonth(time, 1);
	SetDay(time, 7);
	SetHour(time, 18);
	SetMinute(time, 60);
}
catch (const std::exception& ex)
{
	cout << ex.what();
	Time* time = MakeTime(2018, 9, 27, 8, 32);
}*/

/*DemoFlight();*/
//3.3.11
/*try
{
	Flight* flight = MakeFlight(MakeTime(2020, 10, 2, 20, 5), MakeTime(2020, 10, 2, 12, 20), "Tomsk", "Canada", 8);
	int result = GetFlightTimeMinutes(flight);
	cout << "S" << flight->Number << " " << flight->DeparturePoint << " - " << flight->ArrivalPoint << " flight time: " <<
			(result / 60) << "h " << (result % 60) << "min" << endl;
}
catch (const std::exception& ex)
{
		cout << ex.what();
}*/