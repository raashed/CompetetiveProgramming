#include <bits/stdc++.h>

using namespace std;

int main() {
    bool quotes = 0;
    char c;
    do {
        scanf("%c", &c);
        if (c != '"') {
            printf("%c", c);
        } else {
            quotes = !quotes;
            printf((quotes) ? "``" : "''");
        }
    } while (c != EOF);

    return 0;
}
