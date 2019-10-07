#include <iostream>
#include <string>
#include <cctype>

int main()
{
    using namespace std;
    int vowel=0,consonant=0,kind=0;
    cout << "Enter words (q to quit):" << endl;
    string word;
    cin >> word;
    while (word !="q")
    {
        if (isalpha(word[0]))
        {
            if (word[0]=='a' || word[0]=='e' || word[0]=='i' || word[0]=='o' || word[0]=='u'|| word[0]=='A' || word[0]=='E' || word[0]=='I' || word[0]=='O' || word[0]=='U')
                vowel++;
            else
                consonant++;
        }
        else
            kind++;

        cin >> word;
    }
    cin.get();
    cout << vowel << " words beginning with vowels" <<endl;
    cout << consonant << " words beginning with consonant" <<endl;
    cout << kind << " others" <<endl;
}
