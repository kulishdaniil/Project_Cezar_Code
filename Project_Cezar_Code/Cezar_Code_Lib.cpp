#include "Cezar_Code_Lib.h"

void encrypt(string &text, int key)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ') continue;
        if (text[i] < 0)
        {
            text[i] = (char)(text[i] + key % 64);
            if (text[i] >= 0) text[i] = (char)(text[i] - 64);

        }
        else
        {
            text[i] = (char)(text[i] + key % 126);
            if (text[i] > 126) text[i] = (char)(text[i] % 126 + 32);

        }
    }
    cout << text << endl;
}

void decrypt(string &text, int key)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ') continue;
        if (text[i] < 0)
        {
            text[i] = (char)(text[i] - key % 64);
            if (text[i] < -64) text[i] = (char)(text[i] + 64);

        }
        else
        {
            text[i] = (char)(text[i] - key % 126);
            if (text[i] < 33) text[i] = (char)(text[i] + 126);

        }
    }
    cout << text << endl;
}

void File_Output(string text)
{
    ofstream f("out_text.txt");
    f << text;
    f.close();
}