#include <iostream>
using namespace std;

void generate_comment(double finalScore)
{
    if (finalScore > 4) {
        cout << "Good Work";
    } else {
        cout << "Not Good";
    }
}

int main()
{
    int numberOfStudents, numberOfAssignments;

    cout << "Enter the number of students: ";
    cin >> numberOfStudents;

    cout << "Enter the number of assignments: ";
    cin >> numberOfAssignments;

    double marks[numberOfStudents][numberOfAssignments];

    // Take input of the assignment marks of each student
    for (int i = 0; i < numberOfStudents; i++)
    {
        for (int j = 0; j < numberOfAssignments; j++)
        {
            cout << "The marks of assignment " << j + 1 << " of student " << i + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    // Print table heading
    cout << "Student" << " | ";
    for (int i = 0; i < numberOfAssignments; i++) 
    {
        cout << "A" << i + 1 << " | ";
    }
    
    cout << "Final_Score" << " | " << "Comment" << endl;

    double lowestMarks[numberOfStudents];

    // Print assignment marks
    for (int i = 0; i < numberOfStudents; i++)
    {
        double totalMarks = 0.0;

        cout << i + 1 << " | ";

        for (int j = 0; j < numberOfAssignments; j++)
        {
            double currentMark = marks[i][j];

            totalMarks += currentMark;

            if (j == 0) 
            {
                lowestMarks[i] = currentMark;
            }

            if (currentMark < lowestMarks[i])
            {
                lowestMarks[i] = currentMark;
            }

            // Print each assignment mark
            cout << currentMark << " | ";

            if (j == numberOfAssignments - 1)
            {
                // Print final score by calculating the average of the best (numberOfAssignments - 1) assignments
                double finalScore = (totalMarks - lowestMarks[i]) / (numberOfAssignments - 1);
                cout << finalScore << " | ";

                // Print comment on the final score
                generate_comment(finalScore);
            }
        }
        
        cout << endl;
        
    }

    // Print average marks of assignments
    for (int i = 0; i < numberOfAssignments; i++)
    {
        double totalMarks = 0.0;

        for (int j = 0; j < numberOfStudents; j++)
        {
            totalMarks += marks[j][i];
        }

        cout << "Average of Assignment " << i + 1 << ": " << totalMarks / numberOfStudents << endl;
    }
    
    return 0;
}
