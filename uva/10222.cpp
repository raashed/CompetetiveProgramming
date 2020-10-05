#include <iostream>
#include <map>

using namespace std;

map<char, char> charArray;

void makeCharArray() {
    charArray.clear();
    charArray[']'] = 'p';
    charArray['['] = 'o';
    charArray['p'] = 'i';
    charArray['P'] = 'i';
    charArray['o'] = 'u';
    charArray['O'] = 'u';
    charArray['i'] = 'y';
    charArray['I'] = 'y';
    charArray['u'] = 't';
    charArray['U'] = 't';
    charArray['y'] = 'r';
    charArray['Y'] = 'r';
    charArray['t'] = 'e';
    charArray['T'] = 'e';
    charArray['r'] = 'w';
    charArray['R'] = 'w';
    charArray['e'] = 'q';
    charArray['E'] = 'q';
    charArray['\''] = 'l';
    charArray[';'] = 'k';
    charArray['l'] = 'j';
    charArray['L'] = 'j';
    charArray['k'] = 'h';
    charArray['K'] = 'h';
    charArray['j'] = 'g';
    charArray['J'] = 'g';
    charArray['h'] = 'f';
    charArray['H'] = 'f';
    charArray['g'] = 'd';
    charArray['G'] = 'd';
    charArray['f'] = 's';
    charArray['F'] = 's';
    charArray['d'] = 'a';
    charArray['D'] = 'a';
    charArray['/'] = ',';
    charArray['.'] = 'm';
    charArray[','] = 'n';
    charArray['m'] = 'b';
    charArray['M'] = 'b';
    charArray['n'] = 'v';
    charArray['N'] = 'v';
    charArray['b'] = 'c';
    charArray['B'] = 'c';
    charArray['v'] = 'x';
    charArray['V'] = 'x';
    charArray['c'] = 'z';
    charArray['C'] = 'z';
}

string decodeTheMadMan(string string1) {
    int length = string1.length();
    string string2;
    string2.resize(length);
    for (int i = 0; i < length; ++i) {
        char currentChar = string1[i];
        if (charArray.find(currentChar) != charArray.end()) {
            string2[i] = charArray[currentChar];
        } else {
            string2[i] = currentChar;
        }
    }

    return string2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    makeCharArray();

    string string1;
    while (getline(cin, string1)) {
        string answer = decodeTheMadMan(string1);
        cout << answer << endl;
    }


    return 0;
}
