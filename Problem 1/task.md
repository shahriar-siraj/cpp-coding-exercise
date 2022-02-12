Suppose, Mr. Rahim is the course instructor of CSE203. He maintains a 2d array to store the
marks of the assignments. The number of students is N. The number of assignments is M. All
the assignments hold 10 marks. If he takes M assignments in a particular semester, he considers
best M-1 assignments and takes the average marks of these M-1 assignments as the final score.
If a student gets more than 4, he adds a comment “Good Work”, otherwise “Not good”. Help Mr.
Rahim to implement this system. The number of students, the number of assignments, the
marks of all assignments will be the input of this system. You have to print all the marks, final
scores, comments and the average of each assignment in a formatted way. Follow the example.
The marks should be in decimal format.
The comment generation must be done in a function named ‘generate_comment’. This function
will take the final score as a parameter, then prints the comment according to the score.
Example:
Input:
Insert the number of students: 2
Insert the number of assignments: 3
The marks of assignment 1 of student 1: 10
The marks of assignment 2 of student 1: 9
The marks of assignment 3 of student 1: 9.5
The marks of assignment 1 of student 2: 5
The marks of assignment 2 of student 2: 2
The marks of assignment 3 of student 2: 3

Output
Student | A1 | A2 | A3 | Final_Score | Comment
1 | 10 | 9 | 9.5 | 9.75 | Good Work
2 | 5 | 2 | 3 | 4 | Not Good
Average of Assignment 1: 7.5
Average of Assignment 2: 5.5
Average of Assignment 3: 6.25
Hints: In the given example, Number of assignments is 3. So best 3-1=2 marks will be
considered. The student 1 gets 10, 9 and 9.5. The best 2 are 10 and 9.5. So, the average of these
two numbers is 9.75.