#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <array>
#include <sstream>
#include <cstdlib>
#include <ctime>
//#include "VariableClass.h"


using namespace std;



// ------CONTAINS MOST VARIABLES TO MAKE CLASSES CLEANER ----

//DEFINE VariableClass
class VariableClass
{
public:
    //EXIT FUNCTION TO EXIT GAME
    void exitFun()
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout << "                                                  ⎛« 𝓣𝒽𝒶𝓃𝓀𝓈 𝓘ℴ𝓇 𝓟𝓁𝒶𝓎𝒾𝓃ℊ »⎞" << endl;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        exit(EXIT_FAILURE);
    }
    //********************* PRINT GRID FUNCTION  ********************
    void printGrid()
    {
        //STRING GRID DESIGN
        cout << "                  ";
        
        
        cout << setw(82) << "__________________________________________________________________" << endl;
        cout << setw(100) << "|   1     2     3   |   4      5      6    |   7      8      9   |" << endl;
        cout << setw(162) << "|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << endl;
        
        for (int x= 0; x<3; x++)
        {
            cout << setw(40);
            for (int y = 0; y<10; y++)
            {
                cout << gridPrint[x][y] << array[x][y];
            }
            cout << "\n";
            
        }
        //MIDDLE SPLITTER
        cout << setw(162) << "|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << endl;
        for (int x = 3; x<6; x++)
        {
            cout << setw(40);
            for (int y = 0; y<10; y++)
            {
                cout << gridPrint[x][y] << array[x][y];
            }
            cout << "\n";
            
        }
        //MIDDLE SPLITTER
        cout << setw(162) << "|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|" << endl;
        for (int x = 6; x<9; x++)
        {
            cout << setw(40);
            for (int y = 0; y<10; y++)
            {
                cout << gridPrint[x][y] << array[x][y];
            }
            cout << "\n";
        }
        cout << setw(169) << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n\n\n" <<endl<<endl;
        
        //******* PRINT GRID FUNCTION ENDS HERE **********
        
    }
protected:
    
    string lineA, aLine, redo, RETURN, R, filename;
    int x, choice1, sum ,looper = 1, loope1 = 1, totalScore = 0, levelChoice = 0, row = 0, column = 0, answer = 0, maybe = 0, mistakes = 0, total = 0 , score = 100 ,colA = 0, rowA = 0, array[10][10] = {{0}};
    
    // Char /
    char backwardSlash = 92;
    
    // ================== SUPER EASY GRIDS START ==================
    int knownSuperEasyGrid123[9][9] =
    {
        {9,2,7,4,5,6,1,3,8},
        {3,5,8,1,7,2,6,9,4},
        {1,6,4,3,9,8,7,2,5},
        {4,1,3,5,2,7,8,6,9},
        {8,7,2,9,6,1,4,5,3},
        {5,9,6,8,4,3,2,7,1},
        {2,3,5,7,8,4,9,1,6},
        {6,4,1,2,3,9,5,8,7},
        {7,8,9,6,1,5,3,4,2}
    };
    
    int knownSuperEasyGrid456[9][9] =
    {
        {7,1,2,9,8,6,4,3,5},
        {5,3,6,4,2,1,7,8,9},
        {8,4,9,7,3,5,2,6,1},
        {4,8,5,3,1,7,9,2,6},
        {2,6,7,8,9,4,1,5,3},
        {3,9,1,5,6,2,8,4,7},
        {9,7,4,6,5,8,3,1,2},
        {2,5,8,2,7,3,6,9,4},
        {6,2,3,1,4,9,5,7,8}
    };
    
    int knownSuperEasyGrid789[9][9] =
    {
        {5,2,8,6,7,4,1,9,3},
        {1,9,6,3,8,5,2,4,7},
        {4,7,3,2,9,1,8,6,5},
        {3,5,7,4,2,9,6,8,1},
        {6,8,9,1,5,7,3,2,4},
        {2,4,1,8,3,6,7,5,9},
        {8,1,2,5,4,3,9,7,6},
        {7,6,5,9,1,2,4,3,8},
        {9,3,4,7,6,8,5,1,2}
    };
    // ================== SUPER EASY GRIDS END ==================
    
    
    
    // ================== EASY GRIDS START ==================
    
    int knownEasyGrid123[9][9] =
    {
        {4,2,3,6,9,7,8,1,5},
        {6,9,1,5,3,8,4,7,2},
        {5,8,7,4,2,1,6,3,9},
        {3,1,9,8,7,5,2,6,4},
        {2,5,6,1,4,9,3,8,7},
        {7,4,8,3,6,2,5,9,1},
        {9,6,4,2,1,3,7,5,8},
        {1,3,5,7,8,4,9,2,6},
        {8,7,2,9,5,6,1,4,3}
    };
    
    int knownEasyGrid456[9][9] =
    {
        {2,4,8,3,9,5,7,1,6},
        {5,7,1,6,2,8,3,4,9},
        {9,3,6,7,4,1,5,8,2},
        {6,8,2,5,3,9,1,7,4},
        {3,5,9,1,7,4,6,2,8},
        {7,1,4,8,6,2,9,5,3},
        {8,6,3,4,1,7,2,9,5},
        {1,9,5,2,8,6,4,3,7},
        {4,2,7,9,5,3,8,6,1}
    };
    int knownEasyGrid789[9][9] =
    {
        {5,6,3,2,4,8,7,9,1},
        {1,7,8,9,5,3,4,2,6},
        {2,4,9,6,1,7,8,5,3},
        {4,8,6,7,2,1,9,3,5},
        {9,3,2,5,6,4,1,7,8},
        {7,5,1,8,3,9,6,4,2},
        {6,9,7,3,8,2,5,1,4},
        {3,1,5,4,9,6,2,8,7},
        {8,2,4,1,7,5,3,6,9}
    };
    // ===================== EASY GRID END =====================
    
    // ===================== MEDIUM GRID END =====================
    int knownMediumGrid123[9][9] =
    {
        {8,4,2,7,3,5,1,6,9},
        {7,3,9,6,1,4,5,2,8},
        {1,6,5,2,8,9,3,7,4},
        {9,8,7,5,2,6,4,3,1},
        {2,1,4,3,9,8,7,5,6},
        {6,5,3,4,7,1,8,9,2},
        {3,9,8,1,6,7,2,4,5},
        {5,2,1,9,4,3,6,8,7},
        {4,7,6,8,5,2,9,1,3}
    };
    
    int knownMediumGrid456[9][9] =
    {
        {5,3,2,1,6,9,7,4,8},
        {6,7,8,5,4,3,1,9,2},
        {4,9,1,2,7,8,5,3,6},
        {3,5,6,7,1,4,2,8,9},
        {2,4,9,3,8,5,6,1,7},
        {1,8,7,6,9,2,3,5,4},
        {7,6,4,8,3,1,9,2,5},
        {9,1,5,4,2,7,8,6,3},
        {8,2,3,9,5,6,4,7,1}
    };
    
    int knownMediumGrid789[9][9] =
    {
        {4,3,1,5,9,7,6,8,2},
        {8,9,6,2,1,3,5,7,4},
        {2,5,7,8,4,6,9,1,3},
        {6,7,2,9,5,8,3,4,1},
        {3,4,9,6,7,1,2,5,8},
        {5,1,8,4,3,2,7,6,9},
        {7,2,4,3,8,5,1,9,6},
        {9,6,5,1,2,4,8,3,7},
        {1,8,3,7,6,9,4,2,5}
    };
    // ===================== MEDIUM GRID END =====================
    
    
    // ===================== HARD GRID START =====================
    int knownHardGrid123[9][9] =
    {
        {2,8,3,7,6,5,4,1,9},
        {1,4,5,9,8,2,6,3,7},
        {9,6,7,3,4,1,8,5,2},
        {6,3,9,5,2,4,7,8,1},
        {7,5,1,8,3,9,2,4,6},
        {8,2,4,1,7,6,3,9,5},
        {3,1,8,6,9,7,5,2,4},
        {5,7,2,4,1,8,9,6,3},
        {4,9,6,2,5,3,1,7,8}
    };
    
    int knownHardGrid456[9][9] =
    {
        {1,7,5,3,6,9,2,8,4},
        {3,2,4,5,7,8,6,1,9},
        {6,9,8,4,2,1,7,3,5},
        {9,3,7,1,5,2,4,6,8},
        {4,1,6,9,8,7,5,2,3},
        {5,8,2,6,4,3,1,9,7},
        {8,6,1,7,9,5,3,4,2},
        {7,4,9,2,3,6,8,5,1},
        {2,5,3,8,1,4,9,7,6}
    };
    
    int knownHardGrid789[9][9] =
    {
        {9,1,4,8,7,5,3,2,6},
        {3,5,2,6,9,1,8,7,4},
        {8,7,6,3,4,2,1,9,5},
        {6,2,8,9,5,4,7,1,3},
        {7,3,9,2,1,6,5,4,8},
        {5,4,1,7,3,8,2,6,9},
        {1,8,5,4,6,7,9,3,2},
        {4,9,7,5,2,3,6,8,1},
        {2,6,3,1,8,9,4,5,7}
    };
    
    // ===================== HARD GRID END =====================
    
    
    
    string gridPrint[9][10] = {
        //ROW 1
        {"⎮  [","]   [","]   [","]  ⎮  [","]    [","]    [","]   ⎮  [","]    [","]    [","]  ⎮  <- "},
        //ROW 2
        {"⎮  [","]   [","]   [","]  ⎮  [","]    [","]    [","]   ⎮  [","]    [","]    [","]  ⎮  <- "},
        //ROW 3
        {"⎮  [","]   [","]   [","]  ⎮  [","]    [","]    [","]   ⎮  [","]    [","]    [","]  ⎮  <- "},
        //ROW 4
        {"⎮  [","]   [","]   [","]  ⎮  [","]    [","]    [","]   ⎮  [","]    [","]    [","]  ⎮  <- "},
        //ROW 5
        {"⎮  [","]   [","]   [","]  ⎮  [","]    [","]    [","]   ⎮  [","]    [","]    [","]  ⎮  <- "},
        //ROW 6
        {"⎮  [","]   [","]   [","]  ⎮  [","]    [","]    [","]   ⎮  [","]    [","]    [","]  ⎮  <- "},
        //ROW 7
        {"⎮  [","]   [","]   [","]  ⎮  [","]    [","]    [","]   ⎮  [","]    [","]    [","]  ⎮  <- "},
        //ROW 8
        {"⎮  [","]   [","]   [","]  ⎮  [","]    [","]    [","]   ⎮  [","]    [","]    [","]  ⎮  <- "},
        //ROW 9
        {"⎮  [","]   [","]   [","]  ⎮  [","]    [","]    [","]   ⎮  [","]    [","]    [","]  ⎮  <- "}};
};

//DEFINE mainMenu Class
class mainMenu : public VariableClass
{
    
public:
    
    void titleMenu()
    {
        //MAIN MENU TITLE SUDOKU
        for (int i = 0; i<100; i++)
        {
            cout << setw(84) <<  "[][][][][][][][][][][][][][][][][][][][]" << endl;
            cout << setw(45) << "|" << setw(1) << backwardSlash << setw(37) << "/" <<setw(1) << "|" << endl;
            cout << setw(45) << "|" << setw(2) << backwardSlash << setw(35) << "/" << setw(2) << "|" << endl;
            cout << setw(45) << "|" << setw(3) << backwardSlash << "____________SUDOKU______________/" << setw(3) << "|" << endl;
            cout << setw(45) << "|" << setw(3) << "/" << setw(33) << backwardSlash << setw(3) << "|" << endl;
            cout << setw(45) << "|" << setw(2) << "/" << setw(35) << backwardSlash << setw(2) << "|" << endl;
            cout << setw(45) << "|" << setw(1) << "/" << setw(37) << backwardSlash << setw(1) << "|" << endl;
            cout << setw(99) <<  "____________[][][][][][][][][][][][][][][][][][][][]____________\n\n\n" << endl << endl;
            
            //MAIN MENU OPTIONS
            cout << setw(68) << "[1] New Game" << endl;
            cout << setw(71) << "[2] How to play" << endl;
            cout << setw(81) << "[3] Print Grid with Rules" << endl;
            cout << setw(75) << "[4] Exit Game \n\n\n\n\n";
            
            cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            
            for (int H = 0; H<1; H++)
            {
                cin >> choice1;
                //VALIDATION
                if (choice1 > 4)
                {
                    cout << "Please choose a valid option. " << endl;
                    H--;
                }
                
                
                //**** OVER WRITE FOR LOOP, END FUNCTION****
            }
            if (choice1 == 1)
            {
                i+=100;
            }
            
            // -------- CHOICE 2 -- HELP BASIC GAME INSTRUCTIONS ----------- //
            if (choice1 == 2)
            {
                cout << "\n\n\n";
                cout << setw(71) << "_______" << endl;
                cout << setw(85) << "|ℝ𝕌𝕃𝔼𝕊|" << endl;
                cout << setw(78) << "¯¯¯¯¯¯¯" <<endl<<endl<<endl<< endl;
                
                cout << setw(102)  << "Each puzzle consists of a 9x9 Sudoku grid containing areas surrounded" <<endl;
                cout << setw(94)  << "by squares filled with number. The object is to fill all " << endl;
                cout << setw(95) << "empty squares with 0s in them so that the numbers 1 to 9 " << endl;
                cout << setw(94) << "appear exactly once in each row, column and 3x3 box." << endl;
                cout << endl<<endl<<endl<<endl<< endl;
                cout << setw(130) << "[M] Main Menu \n\n\n";
                cout << "\n\n\n\n\n\n\n";
                
                //FOR LOOP ----- AN OPTION TO RETURN TO MAIN MENU
                for (int l = 0; l<1; l++)
                { cin >> R;
                    if (R == "m" && R != "M")
                    { i--; }
                    
                    if (R != "m" && R !="M")
                    {cout << "Please enter a valid input. \n\n\n"; l--; } } }
            
            //  ---------------  OPTION 3 -- RULES WITH GRID  -----------
            if (choice1 == 3)
            {
                cout << setw(71) << "_______" << endl;
                cout << setw(85) << "|ℝ𝕌𝕃𝔼𝕊|" << endl;
                cout << setw(78) << "¯¯¯¯¯¯¯" <<endl;
                
                cout << setw(102)  << "Each puzzle consists of a 9x9 Sudoku grid containing areas surrounded" <<endl;
                cout << setw(94)  << "by squares filled with number. The object is to fill all " << endl;
                cout << setw(95) << "empty squares with 0s in them so that the numbers 1 to 9 " << endl;
                cout << setw(94) << "appear exactly once in each row, column and 3x3 box." << endl<<endl;
                
                printGrid();
                
                cout << setw(130) << "[M] Main Menu \n";
                for (int l = 0; l<1; l++)
                { cin >> R;
                    if (R == "m" && R == "M")
                    { i--; }
                    
                    if (R != "m" &&  R != "M")
                    {cout << "Please enter a valid input. \n\n\n"; l--; } } }
            
            //  ---------------  OPTION 4 -- END GAME EXIT FAILURE  -----------
            if (choice1 == 4)
            {
                exitFun();
                
            }
        }
    }
};


//SUDOKU GAME CODE -- DERIVED CLASS FROM MAIN MENU
class sudokuCode : public mainMenu
{
    
private:
    //DECLARE VARIABLES
    
    string exit, mainMenu;
    
public:
    
    // -------------------- CONGRATULATIONS CODE BLOCK --------------
    void winScreen()
    {
        
        char c = 92;
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout  <<"          ________________________________________________________________________________________________________________" << endl;
        //TOP Row
        cout << setw(22)<< "  ______ " << setw(10) << "_______" << setw(37) << "________" << setw(10) << "/" <<c << setw(17) << "___________" << setw(20) << "|" <<endl;
        //Second Row
        cout << setw(15)<< " /" << setw(10) << "/" << setw(8) << c << setw(5) << "|" << c << "    |" << "    /¯¯¯¯¯" << c <<setw(6) << "|" <<setw(9) << c << setw(8) << "/" <<setw(3) <<c << setw(11) << "|" << setw(22) <<"/¯¯¯¯¯¯" << c<<setw(8) << "|" <<endl;
        //Third Row
        cout << setw(14) << "|" << setw(10) << "|" << setw(9) << "|" << setw(5) << "|" << setw(2) << c << "   |" << "   |"<<setw(13) << "|" << setw(9) << "|" << setw(7) << "/" <<setw(5) <<c <<setw(10) << "|" << setw(9) << "|" <<setw(16) << "|" <<endl;
        //FOURTH ROW
        cout << setw(14) <<"|" << setw(10) << "|" << setw(9) << "|" << setw(5) << "|" << setw(3) << c << "  |" << "   |"<<setw(13) << "|" << "________" <<"/" << setw(6) << "/"<< "______" << c<< setw(9) << "|" <<setw(10) << c << "______" <<setw(9) << "|" <<endl;
        //FIFTH ROW
        cout <<setw(14) << "|" << setw(10) << "|" << setw(9) << "|" << setw(5) << "|" << setw(4) << c << " |" << "   |"<< "   " <<"¯¯¯¯" << "|" <<setw(5) << "|" << setw(11) << "⎞" << setw(5) << "/" <<setw(9) <<c << setw(8) << "|" << setw(17) << c << setw(8) << "|" <<endl;
        //SIXTH ROW
        cout << setw(14)<<" " << c << setw(10) << c << setw(7) << "/" << setw(6) << "|" << setw(5) << c << "|" << "    " << c  << setw(6) <<"/" <<setw(6) << "|" << setw(9) << "  |" <<setw(4) << "/" <<setw(11) <<c << setw(7) << "|" << setw(17) << "/" <<setw(8) << "|" <<endl;
        //SEVENTH ROW
        cout << setw(28) <<"  ¯¯¯¯¯¯ " << setw(15) << "¯¯¯¯¯¯" << setw(28) << "¯¯¯¯¯" << setw(60) << "¯¯¯¯¯¯" << setw(9) << "o" <<endl;
        cout  <<"          ________________________________________________________________________________________________________________" << endl<<endl<<endl<<endl;
        // ------ CONGRATULATIONS CODE BLOCK END ------
        
        cout << setw(92) <<"« 𝛶𝜊𝜐 ⊥ 𝑊𝒾𝜂 »" << endl;
        cout << "      " << endl;
        printScore();
        
        cout << endl<<  endl<< endl<< endl<< endl;
        cout << "[E] Exit " << setw(105) << "[R] Return Main Menu  ";
        cout << "\n\n\n\n\n\n\n\n";
        cin >> RETURN;
        cout << "\n\n\n\n\n";
        if (RETURN == "R" || RETURN ==  "r")
        {
            titleMenu();
            selectDifficulty();
        }
        if (RETURN == "e" || RETURN == "E")
        {
            cout << "HAVE A GOOD DAY!" << endl << endl;
        }
    }
    
    //FUNCTION TO PRINT SCORE AND A STATEMENT
    void printScore()
    {
        
        if(score == 100)
        {
            cout << "Excellent Player! Advance to the next level. \n";
        }
        if (score>90 && score<100)
        {
            cout << "Good player, keep practicing on this level. \n";
        }
        if (80 < score && score < 90)
        {
            cout << "OK player… keep practicing on this level if you dare.\n";
        }
        if (70 < score && score < 80)
        {
            cout << "I suggest trying an easier level. \n";
        }
        if (60 > score)
        {
            cout << "Look at some of the Strategies I have on the Menue\n";
        }
    }
    void userQuestions(int M, int C, int L)
    {
        
        if (maybe == 100)
        {
            exitFun();
        }
        if (maybe == 200)
        {
            titleMenu();
            selectDifficulty();
        }
        // while (array[row-1][col-1] != 0) {} <-- EMPTY SPOTS?
        
        if (maybe == answer)
        {
            array[row-1][column-1] = answer;
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << setw(10) << "[100] Exit " << setw(115) << " [200] Main Menu" <<endl<< endl;
            cout << "GOOD JOB! " << maybe << " was the right number!";
            
            
            if (score == 100)
            {
                cout << setw(89) << "_____________" << endl;
                cout << setw(120) <<"|MISTAKES: " << mistakes << "|" <<endl;
                cout << setw(117) <<"|SCORE: " << score << "%|" <<endl;
                cout << setw(135) << "¯¯¯¯¯¯¯¯¯¯¯¯¯" << endl;
            }
            else
            {
                cout << setw(89) << "_____________" << endl;
                cout << setw(120) <<"|MISTAKES: " << mistakes << "|" <<endl;
                cout << setw(117) <<"|SCORE: " << score << "% |" <<endl;
                cout << setw(135) << "¯¯¯¯¯¯¯¯¯¯¯¯¯" << endl;
            }
        }
        if (maybe != answer)
        {
            score = score - 5;
            mistakes = mistakes + 1;
            cout << maybe << " was incorrect, please try again...";
            if (score == 100)
            {
                cout << setw(89) << "_____________" << endl;
                cout << setw(120) <<"|MISTAKES: " << mistakes << "|" <<endl;
                cout << setw(117) <<"|SCORE: " << score << "%|" <<endl;
                cout << setw(135) << "¯¯¯¯¯¯¯¯¯¯¯¯¯" << endl;
            }
            else
            {
                cout << setw(86) << "_____________" << endl;
                cout << setw(120) <<"|MISTAKES: " << mistakes << "|" <<endl;
                cout << setw(117) <<"|SCORE: " << score << "% |" <<endl;
                cout << setw(135) << "¯¯¯¯¯¯¯¯¯¯¯¯¯" << endl;
            }
            
        }
        
    }
    
    void selectDifficulty()
    {
        
        //SELECT DIFFICULTY
        cout << setw(113) << "- [200] Main Menu" <<endl;
        cout << setw(110) << "- [100] Exit \n";
        
        
        for (int l = 0; l<1; l++)
        {
            
            cout << setw(115) << "_____________________________________________________________________________________________\n\n\n\n";
            cout << setw(103) << "〖𝟙〗 𝞭𝞾𝞺𝞮℞ 𝜮𝞪𝞭ℽ" << endl;
            cout << setw(83) << "【𝟚】 𝜮𝞪𝞭ℽ" << endl;
            cout << setw(92) << "〖𝟛〗 𝞛𝞮𝕕𝜄𝝊𝕞" << endl;
            cout << setw(84) << "【𝟜】 𝚮𝞪𝘳𝕕" << endl;
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cin >> levelChoice;
            
            if (levelChoice == 100)
            {
                exitFun();
            }
            
            if (levelChoice == 200)
            {
                titleMenu();
                selectDifficulty();
            }
            if (levelChoice != 100 && levelChoice != 1 && levelChoice != 2 && levelChoice != 3 & levelChoice != 4)
            {
                cout << "Please enter a valid option: " << endl;
                l++;
            }
            
            
            //========= BEGIN CODE BLOCK FOR SUPER EASY =========
            //========= BEGIN CODE BLOCK FOR SUPER EASY =========
            //========= BEGIN CODE BLOCK FOR SUPER EASY =========
            //========= BEGIN CODE BLOCK FOR SUPER EASY =========
            if (levelChoice == 1)
            {
                
                srand(time(0));
                int randomize = rand()%2+1;
                
                //GAME 1
                if (randomize == 1 )
                {
                    ifstream fileIN; srand(time(0)); fileIN.open("1"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9) { cout << "Please enter a number 1-9. \n\n\n\n\n\n"; i++; }
                        else { cout << "Select Column Number: ";  cin >> column;
                            if (column < 1 || column > 9 )  { cout << "Please enter a number 1-9. \n\n\n\n\n\n"; i++; }
                            else {  cout << "Input answer: "; cin >> maybe;
                                if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9. \n\n\n\n\n\n"; i++; }
                                else{ answer = knownSuperEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                    if (maybe == answer)
                                    { totalScore = totalScore+1;
                                        if (totalScore == 15) { winScreen();} }
                                    i++; } } } } }
                
                //GAME 2
                if (randomize == 2 )
                {
                    
                    ifstream fileIN; srand(time(0)); fileIN.open("2"); if (fileIN.fail()){cerr << "File you are trying to access cannot be foundor opened. \n";  } while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else { cout << "Select Column Number: ";  cin >> column;
                            if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else {  cout << "Input answer: "; cin >> maybe;
                                if ( maybe < 1 || maybe > 9 && maybe == 100 && maybe == 20)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                                else{ answer = knownSuperEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                    if (maybe == answer)
                                    { totalScore = totalScore+1;
                                        if (totalScore == 15) { winScreen();} }
                                    i++; } } } } }
                //GAME 3
                if (randomize == 3 )
                {
                    ifstream fileIN; srand(time(0)); fileIN.open("3"); if (fileIN.fail()){cerr << "File you are trying to access cannot be foundor opened. \n";  } while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" << endl;
                    cout << "\n\n";
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else { cout << "Select Column Number: ";  cin >> column;
                            if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else {  cout << "Input answer: "; cin >> maybe;
                                if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                                else{ answer = knownSuperEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                    if (maybe == answer)
                                    { totalScore = totalScore+1;
                                        if (totalScore == 15) { winScreen();} }
                                    i++; } } } } }
                //GAME 4
                if (randomize == 4 )
                {
                    
                    ifstream fileIN; srand(time(0)); fileIN.open("4"); if (fileIN.fail()){cerr << "File you are trying to access cannot be foundor opened. \n";  } while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                    
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9)
                        { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                       
                        else { cout << "Select Column Number: ";
                                cin >> column;
                           
                            if (column < 1 || column > 9)
                            { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            
                            else {  cout << "Input answer: "; cin >> maybe;
                               
                                if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)
                                
                                { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                                
                                else{ answer = knownSuperEasyGrid123[row-1][column-1];
                                    userQuestions(row, column, maybe);
                                    
                                    if (maybe == answer)
                                    
                                    { totalScore = totalScore+1;
                                        
                                        if (totalScore == 15) { winScreen();} }
                                    
                                    i++; } } } } }
                
                
                //GAME 5
                if (randomize == 5 )
                {
                    
                    ifstream fileIN; srand(time(0)); fileIN.open("5"); if (fileIN.fail()){cerr << "File you are trying to access cannot be foundor opened. \n";  } while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                    
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else { cout << "Select Column Number: ";  cin >> column;
                            if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else {  cout << "Input answer: "; cin >> maybe;
                                if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                                else{ answer = knownSuperEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                    if (maybe == answer)
                                    { totalScore = totalScore+1;
                                        if (totalScore == 15) { winScreen();} }
                                    i++; } } } } }
                //GAME 6
                if (randomize == 6 )
                {
                    
                    ifstream fileIN; srand(time(0)); fileIN.open("6"); if (fileIN.fail()){cerr << "File you are trying to access cannot be foundor opened. \n";  } while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                    
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else { cout << "Select Column Number: ";  cin >> column;
                            if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else {  cout << "Input answer: "; cin >> maybe;
                                if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                                else{ answer = knownSuperEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                    if (maybe == answer)
                                    { totalScore = totalScore+1;
                                        if (totalScore == 15) { winScreen();} }
                                    i++; } } } } }
                //GAME 7
                if (randomize == 7 )
                {
                    
                    ifstream fileIN; srand(time(0)); fileIN.open("7"); if (fileIN.fail()){cerr << "File you are trying to access cannot be foundor opened. \n";  } while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                    
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else { cout << "Select Column Number: ";  cin >> column;
                            if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else {  cout << "Input answer: "; cin >> maybe;
                                if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                                else{ answer = knownSuperEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                    if (maybe == answer)
                                    { totalScore = totalScore+1;
                                        if (totalScore == 15) { winScreen();} }
                                    i++; } } } } }
                //GAME 8
                if (randomize == 8)
                {
                    
                    ifstream fileIN; srand(time(0)); fileIN.open("8"); if (fileIN.fail()){cerr << "File you are trying to access cannot be foundor opened. \n";  } while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                    
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else { cout << "Select Column Number: ";  cin >> column;
                            if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else {  cout << "Input answer: "; cin >> maybe;
                                if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                                else{ answer = knownSuperEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                    if (maybe == answer)
                                    { totalScore = totalScore+1;
                                        if (totalScore == 15) { winScreen();} }
                                    i++; } } } } }
                //GAME 9
                if (randomize == 9 )
                {
                    
                    ifstream fileIN; srand(time(0)); fileIN.open("9"); if (fileIN.fail()){cerr << "File you are trying to access cannot be foundor opened. \n";  } while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                    
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else { cout << "Select Column Number: ";  cin >> column;
                            if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else {  cout << "Input answer: "; cin >> maybe;
                                if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                                else{ answer = knownSuperEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                    if (maybe == answer)
                                    { totalScore = totalScore+1;
                                        if (totalScore == 15) { winScreen();} }
                                    i++; } } } } }
                //GAME 10
                if (randomize == 10 )
                {
                    srand(time(0));
                    ifstream fileIN;  fileIN.open("10"); if (fileIN.fail()){cerr << "File you are trying to access cannot be foundor opened. \n";  } while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                    
                    cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                    
                    for (int i = 0; i<999; i++)
                    {
                        cout << setw(104) << " ⋎ 𝑺𝑼𝑷𝑬𝑹 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                        cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                        printGrid();
                        
                        //NESTED IF / ELSE
                        cout << "Select Row Number: "; cin >> row;
                        if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else { cout << "Select Column Number: ";  cin >> column;
                            if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else {  cout << "Input answer: "; cin >> maybe;
                                if (maybe < 1 || maybe > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                                else{ answer = knownSuperEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                    if (maybe == answer)
                                    { totalScore = totalScore+1;
                                        if (totalScore == 15) { winScreen();} }
                                    i++; } } } } } } }
        
        //============= BEGIN CODE BLOCK FOR EASY =============
        //============= BEGIN CODE BLOCK FOR EASY =============
        //============= BEGIN CODE BLOCK FOR EASY =============
        //============= BEGIN CODE BLOCK FOR EASY =============
        //============= BEGIN CODE BLOCK FOR EASY =============
        
        if (levelChoice == 2) {
            srand(time(0));
            int randomize = rand()%10+1;
            //GAME 1
            if (randomize == 1 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("11"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } }
            
            //GAME 2
            if (randomize == 2 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("12"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } }
            //GAME 3
            if (randomize == 3 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("13"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } }
            
            //GAME 4
            if (randomize == 4 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("14"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid456[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } }
            //GAME 5
            if (randomize == 5 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("15"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid456[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } }
            //GAME 6
            if (randomize == 6 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("16"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } }
            //GAME 7
            if (randomize == 7 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("17"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } }
            //GAME 18
            if (randomize == 8 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("18"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } }
            //GAME 9
            if (randomize == 9 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("19"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } }
            //GAME 10
            if (randomize == 10 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("20"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(86) << " ⋎ 𝑬𝑨𝑺𝒀  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownEasyGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 18) { winScreen();} }
                                i++; } } } } } }
        
        
        //=========== BEGIN CODE BLOCK FOR MEDIUM ============
        //=========== BEGIN CODE BLOCK FOR MEDIUM ============
        //=========== BEGIN CODE BLOCK FOR MEDIUM ============
        //=========== BEGIN CODE BLOCK FOR MEDIUM ============
        //=========== BEGIN CODE BLOCK FOR MEDIUM ============
        //=========== BEGIN CODE BLOCK FOR MEDIUM ============
        
        if (levelChoice == 3)
        {
            srand(time(0));
            int randomize = rand()%10+1;
            
            //GAME 1
            if (randomize == 1 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("21"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } }
            
            //GAME 2
            if (randomize == 2 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("22"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } }
            //GAME 3
            if (randomize == 3 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("23"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } }
            //GAME 4
            if (randomize == 4 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("24"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid456[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } }
            //GAME 5
            if (randomize == 5 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("25"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid456[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } }
            //GAME 6
            if (randomize == 6 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("24"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid456[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } }
            //GAME 7
            if (randomize == 7 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("27"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid789[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } }
            //GAME 8
            if (randomize == 8 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("28"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid789[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } }
            //GAME 9
            if (randomize == 9 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("29"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid789[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } }
            //GAME 10
            if (randomize == 10 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("29"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(93) << " ⋎ 𝗠𝗘𝗗𝗜𝗨𝗠  ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownSuperEasyGrid789[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 24) { winScreen();} }
                                i++; } } } } } }
        
        // ================ BEGIN CODE BLOCK FOR HARD ==============
        // ================ BEGIN CODE BLOCK FOR HARD ==============
        // ================ BEGIN CODE BLOCK FOR HARD ==============
        // ================ BEGIN CODE BLOCK FOR HARD ==============
        
        if (levelChoice == 4)
        {
            srand(time(0));
            int randomize = rand()%2+1;
            
            //GAME 1
            if (randomize == 1 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("31"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } }
            //GAME 2
            if (randomize == 2 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("32"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } }
            //GAME 3
            if (randomize == 3 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("33"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } }
            //GAME 4
            if (randomize == 4 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("34"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } }
            //GAME 5
            if (randomize == 5 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("35"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } }
            //GAME 6
            if (randomize == 6 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("36"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } }
            //GAME 7
            if (randomize == 7 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("37"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } }
            //GAME 8
            if (randomize == 8 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("38"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } }
            //GAME 9
            if (randomize == 9 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("39"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } }
            //GAME 10
            if (randomize == 10 )
            {
                
                ifstream fileIN; srand(time(0)); fileIN.open("39"); while (fileIN.good()) { while (getline(fileIN, lineA)) { istringstream streamA(lineA); colA = 0; while (streamA >> x) { array[rowA][colA] = x; colA++; } rowA++; } }
                
                cout << setw(10) << "[100] Exit " << setw(115) << " [200] New Game" <<endl<<endl <<endl;
                
                for (int i = 0; i<999; i++)
                {
                    cout << setw(85) << " ⋎ 𝗛𝗔𝗥𝗗 ⋎" <<endl;
                    cout << setw(87) << "⊤⊤⊤⊤⊤⊤⊤⊤⊤" <<endl<<endl;
                    printGrid();
                    
                    //NESTED IF / ELSE
                    cout << "Select Row Number: "; cin >> row;
                    if (row < 1 || row > 9) { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                    else { cout << "Select Column Number: ";  cin >> column;
                        if (column < 1 || column > 9)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                        else {  cout << "Input answer: "; cin >> maybe;
                            if (maybe < 1 || maybe > 9 && maybe == 100 && maybe == 200)  { cout << "Please enter a number 1-9 \n\n\n\n\n\n"; i++; }
                            else{ answer = knownMediumGrid123[row-1][column-1]; userQuestions(row, column, maybe);
                                if (maybe == answer)
                                { totalScore = totalScore+1;
                                    if (totalScore == 27) { winScreen();} }
                                i++; } } } } } } } };

//DEFINE START GAME CLASS -- FINAL CLASS
class startGame : public sudokuCode
{
public:
    void StartGAME() {      titleMenu();     selectDifficulty();     }
};


int main()
{
    //DECALRE INSTANCE OF A CLASS
    startGame S1;
    
    //USE DOT NOTATION
    S1.StartGAME();
}
