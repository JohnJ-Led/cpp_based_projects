8-1 Journal
Project 2 
Summarization: Mini-App that allows end users to view generic investment growth. Similar to a saving account with a fixed interest amount.
Integrating ASCII escape sequences to move the terminal cursor is probably my highlight of this project. 

Towards enhancements:
1. Move interest functions into a signular class.
2. Move Reports into thier own derived class.
3. Create Menu for loop back capabilities.
Above enhancements would make for a good base app that would all for new function creation.
-> Expense/Bill calculations and potentual expendable funds for investing further.
-> Saving Goal Functions. (Save how much for how long to get to X amount)

The biggest obsticule for this project was understanding how the bank wanted it to flow. The Document made it seem like each line needed for the initial input needed to be displayed first and then go line by line filling out the info and updating the variables. Versus print a line get input print next. This is what lead to ASCII Escapes sequeneces.
The ASCII escape sequences are particularly useful as the work in other languages as well.

For maintainance: Sperating out each function was the main goal. This kept the functionality of each based on the variables added to function at call.


**************************************************************************************
Project 2
Author: John Ledbetter
Date 08-02-2020

Pseudocode-Main Process
1.	dataInput() //Data Input Menu
a.	if(statement to loop input)
i.	cursorAdjust() //Move Cursor to top of menu
ii.	updateMenu()
2.	outPutReport1()
3.	outPutReport2()
Pseudocode-Additional Functions
1.	calBandINoAddDeposits(Double openAmt, Double interestRate, int yearCount )
2.	calBandIAddDeposits(Double openAmt, Double depAmt, Double interestRate, int yearCount)
