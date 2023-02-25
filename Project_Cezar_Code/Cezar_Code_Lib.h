#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <locale.h>

using namespace std;

void encrypt(string &text, int key);
void decrypt(string &text, int key);
void File_Output(string text);