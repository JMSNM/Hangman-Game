//Muneeb Bin Nasir - 2022463 - CS101B - Project - Task 2

#include <iostream>
#include <time.h>

using namespace std;

int len(string a)
{
	int count = 0;
	while(a[count] != '\0')
		count++;
	
	return count;
}

void design(int x)
{
    switch (x)
	{
    case 0:
		cout << "\t\t\t|--------|" << endl;
		cout << "\t\t\t|       (0)" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|       / \\" << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;

    case 1:
		cout << "\t\t\t|--------|" << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|       / \\" << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;

	case 2:
		cout << "\t\t\t|--------|" << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|         \\" << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 3:
		cout << "\t\t\t|--------|" << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|        |" << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 4:
		cout << "\t\t\t|--------|" << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|       /|\\" << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 5:
		cout << "\t\t\t|--------|" << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|        |\\" << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 6:
		cout << "\t\t\t|--------|" << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|        |  " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 7:
		cout << "\t\t\t|--------|" << endl;
		cout << "\t\t\t|        0" << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	case 8:
		cout << "\t\t\t|--------|" << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|         " << endl;
		cout << "\t\t\t|           " << endl;
		cout << "\t\t\t|" << endl;
		cout << "\t\t\t|_" << endl;
		break;
	default:
		break;
    }
}


int main() 
{
    
	srand(time(NULL));
    string countries[12] = {"china", "pakistan", "oman", "france", "iran", "portugal", "germany", "belgium", "ireland", "spain", "italy", "brazil"};
    int RanIndex = rand() % 12; //Generates random number between 0 and 7

    // Choose city or country
    string Country = countries[RanIndex]; //assigns random country to 'country' variable
    int chances = 8; //initialization
    string guess = ""; 
    int correct = 0; //initialization
    char letter; //declaration
    string guessed;
    bool flag_1 = false; //flags used later
    bool flag_2 = false;

    // Create underscores
    for (int i = 0; i < len(Country); i++)
    {
        guess = guess + "_"; //adds dashes
    }

    
    // Game loop
    while (chances > 0 && correct < len(Country)) //condition
    {
        cout <<"------------------------"<<endl;
        cout << "   Guess a letter: ";
        cin >> letter;
		letter = tolower(letter); //convert to lowercase
        guessed = guessed + letter; //guessed letters stored in string array

        int flag = false; //initialisation of flag

        for(int i = 0; i < len(Country); i++) //incase true
        {
            if (Country[i] == letter) 
                flag = true;
        }
        
        if (flag == true)
        {
            cout << "\nCorrect!" << endl;
            for (int i = 0; i < len(Country); i++)
            {
                if (Country[i] == letter)
                {
                    guess[i] = letter;
                    flag_2 = true;
                }
            }
            if (flag_2 == true)
            {
            correct++; //increments
            }
        }
        else
        {
            cout << "\nIncorrect!" << endl;
            for(int i = 0; i < 8; i++)
            {
                if (guessed[i] != letter) //chances only decrease if the letter guessed was different from previously guessed
                {
                   flag_1 = true;
                }
            }
            if (flag_1 == true)
            {
                chances--; //decrements
            }
            
        }
        design(chances); //calls function
        cout << "Chances remaining: " << chances << endl; //outputs on every entry
        cout << "Current guess: " << guess << endl;
    }

    // Check if player won or lost
    if (correct == len(Country)) 
    {
    cout << "Congratulations! You guessed the country correctly!" << endl;
    }
    else
    {
    cout << "Sorry, you have been hanged. The country was " << Country << "." << endl;
    }

    
    return 0;
}


