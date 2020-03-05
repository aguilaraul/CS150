# Labs

#### 1. Lab 1
Create a program that asks the user to enter two integer numbers, then tells the
user: the sum of the numbers, the difference of the numbers (first minus
second), the product of the numbers, and the quotient of the numbers
with remainder. Each of these should be output as a separate line and include
the equation.

#### 2. Lab 2
- Ask the user to enter their name, print “Hi [name]” to the screen.

- Ask the user whether they are a CS major or not – print the result to the
screen as “CS Major: [result]” (note that this will display numerically – that
is OK for now).

- Ask the user to enter their favorite punctuation mark – print “Your favorite
punctuation mark is: [result].”

- Ask the user to enter two numbers (store them as integers).
    - Display the result of dividing the first by the second both as a decimal
    and as a value and remainder.

You should clearly communicate to the user what they need to enter
for each input, and what you are displaying for each output.

All of your variables must be of appropriate data types

#### 3. Lab 3
Ask the user to enter the names of three items and their prices, and the tax
rate as a decimal. After they enter this information calculate the subtotal,
tax, and total, and print out a receipt as formatted below. The item names may
contain multiple words (assume they will not overflow). The line of stars is 30
characters long.

#### 4. Lab 4 + Lab 5
* Draw a flowchart for the following program, then code it
* Include a through list of test cases with your flowchart that test __all
branches__ of it.
* Create a program that asks the user to enter an integer.
* If it is even:
    * Print whether or not it is divisible by both 5 and 3.
* If it is odd:
    * Print whether or not it is negative
* Whether it is even or odd print whether it is between -100 and 100 inclusive.
Treat 0 as even.

#### 6. Lab 6
* Ask the user to enter integer
* If it is in the range of 0-10 inclusive print it in words (i.e. 3 > three)
* If it is not in the range of 0-10 inclusive say so.
* Complete this lab by using a switch statement

#### 7. Lab 7
Write a program that prints the numbers from 1 to 100, one per line, but for
multiples of three print "Fizz" instead of the number and for multiples of 5
print "Buzz" instead of the number. For numbers which are multiples of both
three and five instead print "FizzBuzz".

#### 8. Lab 8
Ask the user to enter a positive integer, or -1 to quit. If the user enters a
positive integer repeat it and tell them whether it is even or odd. If the user
enters -1 then tell them how many odd numbers they entered and how many even
numbers they entered. If they entered no numbers, tell them "no numbers were
entered" instead of saying 0 even numbers and 0 odd numbers.

#### 9. Lab 9
Ask the user to enter an integer (positive or negative does not matter). Repeat
the integer given by the user and tell them whether it is even or odd. After the
user enters the first integer, and after each subsequent integer entered, ask
the user if they wish to enter another integer.  If they answer 'Y' or 'y' then
repeat, if they answer 'N' , 'n', or any other character then tell them how many
odd numbers they entered and how many even numbers they entered.

Note that the user should always enter at least one integer, only ask them
if they have another after the first entry.

#### 10. Lab 10
Print the multiplication table from 1-9 similarly to what is shown below,
including the legend on the top and sides. Calculate the values and use nested
loops to complete this lab.

#### 11. Lab 11
Create an array of 1000 __double__ datatype elements, store 7.5 times the array
slot number as the value in each array slot.

__After creating and filling the entire array,__ ask the user to enter an
integer between 0 and 999 - print the value of that element of the array (if the
user entered 121 you would print the contents of array slot 121 which would be
907.5).

Input validation: Do not check of range values! (i.e. do NOT do anything that
may cause a segmentation fault). Instead inform the user that the value is out
of range.

You must use a __named constant__ for the array size of 1000.

#### 12. Lab 12
Modify Lab 10 so that the full contents of the multiplication table is stored
into a two-dimensional array and then printed. Store the size of the array as a
named constant -- test with at least two different sizes. Make your table range
from 0 to size-1.

#### 13. Lab 13
Create a file named sentence.txt and write a sentence the user enters to it
using ofstream.

#### 14. Lab 14
Have the user input a filename to read in ints from. Print each to the screen,
one per line and keep a running total. Print the total at the end. If the file
does not exist say so and do not print the total.
