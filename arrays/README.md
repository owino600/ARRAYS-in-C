ARRAYS
take an instance of you computer motherboard
there are bite hardwares that are used in the storing of the computer data and any data that goes around the computer .
#example
having data of value int which is ussually four bites its going to occupy 4 bites of the total bites in the memory . memory is like a canvas where you can move data in and out and to diffrent locations.

in our program we are going discuss the creation of an array, storing data in an array back to back in a computer memory in a way you can access each individual member easily

to declare an array in a computer we use the [] notations e.g int scores[3] this is an array that would store data of size three, that means the scores entered cannot exeed 3

In our array_1.c we are to get the average of three scores
declare a constant int at the top prevent repetative creation of arrays and also to make it a constant such that we can only change the value 3 to maybe 4,5,6,56,100 but the value N remains constant
representing the size of the array hence no need of using the value of the size allove the code and and have to go through the whole code changing the value incase needed to incease or decrease the
size of the array
		hence : const int N = 3;
	represent an array of type integer and size 3 . we can now change the value of int N from 3->5 or ->20 or ->100 or even ->1000 and the program will work out the average of the scores

float average (array[]) is a function that when our program when runned in the main() will be called to perform the function average and give output of the three
i have to include the function at the top because C studies a code systematicaly from up to down, hence f it meets the it will put it in mind and when the compiling gets to printf stage the program
will remember I saw a function to return the average at the top so uses it there to peform the execution.

the last code execution is a code telling the function float average(array[]) how to work out the sum of the scores and come up with the averege. so when we call the function inside the main(void) it
already knows that it has to calculate the sum of scores in array N and divide them with the size of the aray N  which is equal to the total number of scores  and gives out an average .
