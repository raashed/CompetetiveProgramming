#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<bool> isVisited;
vector<bool> isCountable;

int globalCount = 0;

void makeConnected(int n)
{
    isVisited[n] = true;

    for (int i = 0; i < graph[n].size(); i++)
    {
        if (!isVisited[graph[n][i]] && isCountable[graph[n][i]])
        {
            globalCount++;
            makeConnected(graph[n][i]);
        }
    }
}

int charToInt(char i)
{
    if (i == 'A') return 1;
    if (i == 'B') return 2;
    if (i == 'C') return 3;
    if (i == 'D') return 4;
    if (i == 'E') return 5;
    if (i == 'F') return 6;
    if (i == 'G') return 7;
    if (i == 'H') return 8;
    if (i == 'I') return 9;
    if (i == 'J') return 10;
    if (i == 'K') return 11;
    if (i == 'L') return 12;
    if (i == 'M') return 13;
    if (i == 'N') return 14;
    if (i == 'O') return 15;
    if (i == 'P') return 16;
    if (i == 'Q') return 17;
    if (i == 'R') return 18;
    if (i == 'S') return 19;
    if (i == 'T') return 20;
    if (i == 'U') return 21;
    if (i == 'V') return 22;
    if (i == 'W') return 23;
    if (i == 'X') return 24;
    if (i == 'Y') return 25;
    if (i == 'Z') return 26;
    return 0;
}

int main()
{
    //    freopen("/Volumes/HDD-2/Works/programming/in.txt", "r", stdin);
    int testCases;
    string string1;
    string string2;

    cin >> testCases;
    getchar();
    while (testCases--)
    {
        graph.resize(27);
        for (auto &i : graph)
        {
            i.clear();
        }
        isVisited.clear();
        isVisited.resize(27, false);
        isCountable.clear();
        isCountable.resize(27, false);

        while (true)
        {
            getline(cin, string1);
            if (string1[0] == '*')
            {
                break;
            }
            graph[charToInt(string1[1])].emplace_back(charToInt(string1[3]));
            graph[charToInt(string1[3])].emplace_back(charToInt(string1[1]));
        }

        getline(cin, string2);
        for (char i : string2)
        {
            isCountable[charToInt(i)] = true;
        }

        int count1 = 0;
        int count2 = 0;
        for (int i = 1; i < graph.size(); i++)
        {
            if (!isVisited[i] && isCountable[i])
            {
                globalCount = 1;
                makeConnected(i);
                if (globalCount == 1)
                {
                    count2++;
                } else
                {
                    count1++;
                }
            }
        }
        cout << "There are " << count1 << " tree(s) and " << count2 << " acorn(s)." << endl;
    }
    return 0;
}
