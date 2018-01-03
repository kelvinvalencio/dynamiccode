/*
Dynamic Code means that codes in the project could be changed at any time


Written in C++ by : Kelvin Valencio

This build includes :
-Function use
-rand and rands function
-4 C++ Headers (1 Windows Header included)
-Standard namespace
-Beep function
*/

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;



int randomizer() {
    cout << "\n" << endl;
    cout << "Random Number Generator" << endl;
    cout << "----------------" << endl;
    cout << "What does RNG do? It generates random number, you can set the seeds, and you can set the limit for randomized number." << endl;
    cout << "For noobs, this program generates random numbers (very random) *flies away*\n\n" << endl;
    int zz;
    int cc;
    cout << "Put Your Seed number for randomization!" << endl;
    cout << "(Explaination) Put any number!" << endl;
    cin >> zz;
    cin.get();
    cout << "\n\nNow put the range of number for randomization!" << endl;
    cout << "(Explaination) For example, you want to make a random number, but not less then certain number, you put the maximum number here!" << endl;
    cin >> cc;
    cin.get();
srand(zz);
for (int xx=1; xx<2; xx++) {
    cout << "\n\nRandom Number generated is : " << 1+ (rand()%cc) << endl;
    cout << "\n" << endl;
}

}

int randomizer2() {
    int ab, bc, cd, de;
    cout << "\n" << endl;
    cout << "Random Number Generator 2 | for multiple result\n\n" << endl;
    cout << "----------------" << endl;
    cout << "What does RNG 2 do? : It generates random number based on PNRG Algorithm. In this app, you are able to set number of seeds, ";
    cout << "set the number of multi-results, and you can limit the randomizer for certain number.\n\n" << endl;
    cout << "Expl. : Write any number" << endl;
    cout << "Or write 0 to randomize Seed Number (seed number should be randomized)" << endl;
    cin >> ab;
    if (ab == 0) {
        ab = time(0);
    }
    cout << "\n\n\nNumber of results" << endl;
    cout << "Explaination : Number of results you want to get\n" << endl;
    cin >> bc;
    cout << "\n\n\nRange Number" << endl;
    cout << "Explaination : Maximum number for randomiziation (ex : You want to have random numbers under 10, you write 10\n" << endl;
    cin >> cd;
    cout << "Displaying Random numbers based on these facts : \n" << endl;
    cout << "Seeds : " << ab << endl;
    cout << "Number of results : " << bc << endl;
    cout << "Max number for each results : " << cd << endl;
    cout << "\n\n\n" << endl;
    srand(ab);
    for (int x=1; x<=bc; x++) {
        cout << "Random Number Results : " << (rand() % cd ) << endl;
    }
}


int bep() {
    cout << "\n" << endl;
cout << "\n\n\nBeeper" << endl;
cout << "----------------" << endl;
cout << "What does Beeper do? : It beeps." << endl;
cout << "\n\nThis Beep only works for Windows (uses Windows Library)\n\n" << endl;
cout << "You can hear a note from here, since every note has fixed frequency.\n" << endl;
cout << "C3 or Do on Piano has frequency of 256\n" << endl;
cout << "A4 or La on Piano (for standard of Orchestra Tuning) has frequency of 440\n" << endl;
cout << "Try it! You can Google for Note Frequencies. Good Luck!\n\n\n" << endl;
    int k;
    int l;
    cout << "Type the number of frequency for Beep (number only) (Hz Hertz)" << endl;
    cin >> k;
    cin.get();
    cout << "\n\n\nNOW, Type the number of duration for Beep (number only) (s Seconds)" << endl;
    cin >> l;
    cout << "\n\n\nOK! Beeping at " << k << "Hz " << "for " << l << " Second(s) " << endl;
    l=l*1000;
Beep(k, l);
}

int SECRET() {
    int ooo;
    int ppp;
    cout << "\n" << endl;
cout << "Penghitung Luas Persegi LOL" << endl;
cout << "----------------" << endl;
cout << "What does Penghitung Luas Persegi do? : It multiplies your inputs. This app made for easter egg, refers to";
cout << " my very first Android App : Penghitung Luas Persegi.apk written in Java." << endl;
cout << "\n\n\nPanjang Persegi?" << endl;
cin >> ooo;
cout << "\n\n\nLebar Persegi?" << endl;
cin >> ppp;
cout << "Luas = " << ooo * ppp;
}

int bug() {
    cout << "\n" << endl;
    cout << "Known Bugs" << endl;
    cout << "----------------" << endl;
cout << "- No exception for strings (bringing string causes the code to loop forever" << endl;

cout << "What's New" << endl;
cout << "----------------" << endl;
cout << "- More structured for each app" << endl;
cout << "- New app : Random Number Generator 2" << endl;
}


int main()
{
    int menu = 0;
    cout << "\n\n\nMain Menu" << endl;
    cout << "----------------" << endl;
    cout << "1st Build" << endl;
    cout << "Provides 6 main useless features lol\n" << endl;
    cout << "How to use : Type a NUMBER (only the NUMBER) of MENUS above, then press ENTER to choose one app." << endl;
    cout << "REMEMBER! Type the right number, or it will not enter the app.\n\n" << endl;
    cout << "Menu : " << endl;
    cout << "1. Infinite Loops (not really infinite tho)" << endl;
    cout << "2. Beeper" << endl;
    cout << "3. Random Number Generator" << endl;
    cout << "4. About Program" << endl;
    cout << "5. Known Bugs & New shits" << endl;
    cout << "6. Random Number Generator 2 (Multi Results)" << endl;
    cout << "666. Secret Program" << endl;
    cout << "7. Exit Program\n\n\n" << endl;

    cin >> menu;
    cin.get();

    switch (menu) {
case 1 :
    char vinvin;
    cout << "Infinite Loops" << endl;
    cout << "----------------" << endl;
    cout << "What does Infinite Loops do? : It loops (actually looping from float number of 1, adding it";
    cout << " with 0,01 and it will stop until the number gets to 100.000 . Yeah, not infinite. I know, stfu." << endl;

    cout << "\n\nREMEMBER! This loop most-likely takes forever, to close program, use combination of CTRL + C << remember!" << endl;

    cout << "\n\nSo, What thing do you want to be loop? (Only 1 NUMBER, LETTER, or CHARACTER!)" << endl;
    cout << "Putting more than 1 Number, Letter, or Character results in others to be ignored!" << endl;
    cin >> vinvin;
    for (float x=-1; x<100000; x+0.01){
        cout << vinvin; }
        break;
case 2 :
    int kel;
    bep();
    cout << "That's all. Num 1 to go Main Menu, 2 to try again, 0 to exit" << endl;
    cin >> kel;
    switch (kel) {
case 1 :
    return main();
case 2 :
    return bep();
case 0 :
    return 0;
    }

    break;
case 0:
     cout << menu << "is an Invalid Number!" << endl;
     return main();
case 3 :
    int aaaa;
    randomizer();
    cout << "Back to main menu? (1 to go Main, 0 to exit)" << endl;
    cin >> aaaa;
    if (aaaa == 1) {
        return main();
    }
    else {
        return 0;
    }
    break;
default :
    cout << menu << " is an Invalid number!" << endl;
    cout << "Returning to Main!" << endl;
    return main();
    break;
return main();


case 4 :
    int aaa;
    cout << "\n" << endl;
    cout << "About" << endl;
    cout << "----------------" << endl;
    cout << "DynamicCode means code that could be changed at anytime" << endl;
    cout << "Called DynamicCode because the project name used to write code temporarily (for study purpose)\n" << endl;
    cout << "Written in C++ by kelvinvalencio\n\n" << endl;
    cout << "Version : 1.3" << endl;
    cout << "Build Number : 060916 | Codename : BAF (Buggy AF)" << endl;
    cout << "First Build with 280 Lines of code & 3 weeks of learning\n" << endl;
    cout << "About Compiler" << endl;
    cout << "----------------" << endl;
    cout << "Compiled with Code::Blocks 16.01 Windows writen without Graphical User Interface" << endl;
    cout << "Want to take a look of the DynamicCode Source Code?" << endl;
    cout << "Check on github.com/kelvinvalencio" << endl;
    cout << "\n\n" << endl;
    cout << "Return to main? (1 to return main menu, 0 or other numbers to exit)" << endl;
    cin >> aaa;
    if (aaa == 1) {
        return main();
    }
    break;

case 5 :
    int qqq;
    bug();
    cout << "Back to main? (1 to Main, 0 to Exit)" << endl;
    cin >> qqq;
    if (qqq == 1) {
        return main();
    }
    else {
        return 0;
    }
    break;

case 6 :
    int eee;
    randomizer2();
    cout << "Back to main? (1 to Main, 2 to try again, 0 to Exit)" << endl;
    cin >> eee;
    switch (eee) {
case 1 :
    return main();

case 2 :
    return randomizer2();

case 0 :
    return 0;

    }

case 7 :
    cout << "Exitting..." << endl;
    return 0;
    break;

case 666 :
    int xxx;
    SECRET();
    cout << "\n\nExit? (1 untuk ke Main, utk Exit)" << endl;
    cin >> xxx;
    if (xxx == 1) {
        return main();
    }
    else {
        return 0;
    }
    break;

    }
    }
