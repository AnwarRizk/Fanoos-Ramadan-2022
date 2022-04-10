#include <bits/stdc++.h>
#include <windows.h>
// @author Anwar
using namespace std;

void End(string);

// start function
int start(){
    int n;
    s:
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout << "\n\t Enter a number 'n' (divisible by 4 & n >= 20)...\n";
    cout << "\t like 20, 24, 28, 32, 36..... :  ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cin >> n;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    if(n % 4 || n < 20) {
        cout << "\n\t\t Invalid number";
        Sleep(250); cout << "."; Sleep(250); cout << ".";
        Sleep(250); cout << "."; Sleep(250); cout << "! \a";
        Sleep(1000);
        goto s;
    }
    system("cls");
    return n;
}

// top part function
void DrawTopPart(int n, int check = 1){
    int star = 1;
    int col = 1 + rand() % 14;
    cout << "\n" << string(30, ' ');
    cout << string(n/2 - 1, ' ') << "C\n";
    for(int i = n/2 - 1; i >= 0; i--){
        if(check) Sleep(50);
        cout << string(30, ' ');
        cout << string(i, ' ') << string(star, '*') << "\n";
        star += 2;
        col = 1 + rand() % 14;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
    }
}

// middle part function
void DrawMiddlePart(int n, int check = 1){
    int tmp = n;
    int col = 1 + rand() % 14;
    for(int i = 0; i < n/4; i++){
        if(check) Sleep(50);
        if(i == 0){
          cout << string(30, ' ');
          cout << '\\' << string((n - 17) / 2, ' ');
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 176);
          cout << "RAMADAN  KAREEM";
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
          cout << string((n - 17) / 2, ' ') << "/\n";
          tmp--;
          continue;
        }
        cout << string(30, ' ');
        cout << string(i, ' ') << '\\' << string(tmp - 3 - i, ' ') << "/\n";
        tmp--;
        col = 1 + rand() % 14;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
    }
}

// bottom part function
void DrawBottomPart(int n, int check = 1){
    int star = n/2 - 1;
    int col = 1 + rand() % 14;
    for(int j = n/4; j >= 1; j--){
        if(check) Sleep(50);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
        cout << string(30, ' ');
        cout << string(j, ' ') << string(star, '*') << "\n";
        star += 2;
        col = 1 + rand() % 14;
    }
    cout << "\n";
}

// all draws
void draw_fanoos(){
    int n = start(), star = 1, t = 3;
    while(t--){
      // delay mode
      DrawTopPart(n); DrawMiddlePart(n); DrawBottomPart(n);
      Sleep(120); system("cls"); Sleep(120);
    }
    system("cls");
    t = 6;// on\off mode
    while(t--){
      DrawTopPart(n, 0); DrawMiddlePart(n, 0); DrawBottomPart(n, 0);
      Sleep(120);
      system("cls");
      Sleep(120);
    }
    // delay mode
    DrawTopPart(n); DrawMiddlePart(n); DrawBottomPart(n);
    Sleep(300); system("cls"); Sleep(180);
    t = 6;// on\off mode
    while(t--){
      DrawTopPart(n, 0); DrawMiddlePart(n, 0); DrawBottomPart(n, 0);
      Sleep(120);
      if(t) system("cls");
      Sleep(120);
    }
    End("H a p p y  R a m a d a n :) ");
}

int main()
{   srand(time(0));
    char c;
    do {
        system("cls");
        draw_fanoos();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        cout << "\t\t\t\t   Want to try again? (Y/N): ";
        cin >> c;
        if(tolower(c) == 'n') End("  We Hope You Enjoyed It...\n\t\t\t\t\t Anwar & Efraim ");
    } while(tolower(c) != 'n');

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
  return 0;
}

// happy end
void End(string s){
    if(s != "H a p p y  R a m a d a n :) ") cout << "\t\t\t\t   ";
    else cout << string(31, ' ');
    for(auto& i : s){
      int col = 1 + rand() % 14;
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
      Sleep(120);
      cout << i;
    }
    cout << "\n\n";
} //1
