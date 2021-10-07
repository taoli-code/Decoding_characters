#include <iostream>
#include <cstring>
#include <stack>
#include <queue>
#include <chrono>
#include <unistd.h>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


string decodingTable(const char &s) {
    string x; 
    switch (s)
    {
    case '1':
        x = "Б";
        break;
    case '2':
       x = "Ѷ";
       break;
    case '3':
        x = "Ѱ";
        break;
    case '4':
        x = "Г";
        break;
    case '5':
        x = "Ѩ";
        break;
     case '6':
        x = "Ѫ";
        break;   
    case '7':
        x = "Ѧ";
        break;
    case '8':
        x = "Ꙗ";
        break;
    case '9':
        x = "Ѿ";
        break;
    case 'a':
        x = "Ѯ";
        break;
    case 'b':
        x = "Ҟ";
        break;
    case 'c':
        x = "Ҡ";
        break;
    case 'd':
        x = "Ө";
        break;
    case 'e':
        x = "Ӽ";
        break;
    case 'f':
        x = "Ҳ";
        break;
    case 'g':
        x = "Ҫ";
        break;
    case 'h':
        x = "Ҹ";
        break;
    case 'i':
        x = "Ҵ";
        break;
    case 'j':
        x = "Ҩ";
        break;
    case 'k':
        x = "Ә";
        break;
    case 'l':
        x = "Д";
        break;
    case 'm':
        x = "Ђ";
        break;
    case 'n':
        x = "Ѓ";
        break;
    case 'o':
        x = "Е";
        break; 
    case 'p':
        x = "Ё";
        break;
    case 'q':
        x = "Є";
        break;
    case 'r':
        x = "Ж";
        break;
    case 's':
        x = "З";
        break;
    case 't':
        x = "З́";
        break;
    case 'u':
        x = "І";
        break;
    case 'v':
        x = "Ї";
        break;
    case 'w':
        x = "Й";
        break;
    case 'x':
        x = "К";
        break;
    case 'y':
        x = "Л";
        break;
    case 'z':
        x = "Љ";
        break;
    case 'A':
        x = "М";
        break;
    case 'B':
        x = "Н";
        break;
    case 'C':
        x = "Њ";
        break;
    case 'D':
        x = "О";
        break;
    case 'E':
        x = "П";
        break;
    case 'F':
        x = "Р";
        break;
    case 'G':
        x = "С";
        break;
    case 'H':
        x = "С́";
        break;
    case 'I':
        x = "Т";
        break;
    case 'J':
        x = "Ћ";
        break;
    case 'K':
        x = "Ќ";
        break;
    case 'L':
        x = "У";
        break;
    case 'M':
        x = "Ў";
        break;
    case 'N':
        x = "Ф";
        break;
    case 'O':
        x = "Х";
        break; 
    case 'P':
        x = "Ц";
        break;
    case 'Q':
        x = "Ч";
        break;
    case 'R':
        x = "Џ";
        break;
    case 'S':
        x = "Щ";
        break;
    case 'T':
        x = "Ъ";
        break;
    case 'U':
        x = "Ы";
        break;
    case 'V':
        x = "Ь";
        break;
    case 'W':
        x = "";
        break;
    case 'X':
        x = "Э";
        break;
    case 'Y':
        x = "Ю";
        break;
    case 'Z':
        x = "Я";
        break; 
    default:
        break;
    }

    return x;
}


static void outPut(const std::string &v)
{   
    cout << "output String: ";
    for (int i(0); i != v.size(); ++i){
        cout << decodingTable(v[i]);
        }
    cout << endl;

    cout << "decoding table: ";
    for (int i(0); i != v.size(); ++i){
        bool repetition = false;
        for (int j(0); j != i; ++j){
            if(v[i] ==  v[j]){
                repetition = true;
                break;
            }
        }
        if(!repetition)
            cout << v[i] << " = " << decodingTable(v[i]) << ", ";
    }
    cout << endl;
}

int main(int argc,  char **argv) {
    string s; 
    printf("what's string?\n");
    cin >> s;
    cout << "input string:" << s << endl;
    outPut(s);

    return 0;
}
