<h1>Introducing C's program control statement</h1><br>
<p>In this section, i will learn about two of C's most important program control statements: <b>if</b> and <b>for</b>. In general, program control statements determine your program's flow of execution. As such, they form the backbone of programs. In addition to these, i will also learn about blocks of code, the relational and logical operators, and more about the <b>printf()</b> function.</p><br>
 <b>Topic 1. Become familiar with the if.</b><br>
  <p>The if statement is one of C's selection statements (sometimes its called conditional statements). Its operation is governed by the outcome of a conditional test that evaluates to either true or false.. Simply put, selection statements make decisions based upon the outcome of some condition.</p></br>
  <b>Problem</b> --- (1.c) This program forms the basis for an addition drill. It displays two numbers and asks the user what the answer is. The program then tells the user if the answer is right or wrong.<br>
  <b>Problem</b>--- (2.c) This program converts either feet to meters or meters to feet, depending upon what the user requests.<br>
  <b>Problem</b>--- (3.c) Write a program that asks the user for an integer and then tells the user if that number is even or odd. (Hint, use C's modulus operator %.)
  <br><br>
  
  
  <b>Topic 2. Add the else.</b><br>
  <p>If the expression is true, then the target of the <b>if</b> will execute, and the <b>else</b> portion will be skippes. However, if the expression is false, then the target of the <b>if</b> is bypassed, and the target of the <b>else</b> will execute. Under no circumstances will both statements execute. Thus, the addition of the <b>else</b> provides a two-way decision path.</p><br>
  
  <b>Problem</b>--- (4.c) You can use the <b>else</b> to create more efficient code in some cases. For example, here the <b>else</b> is used in place of a second if in the program from the preceding section, which determines whether a number is negative or non-negative.<br>
  <b>Problem</b>--- (5.c) This program prompts the user for two numbers divides the first by the second, and display the result. However division by zero is undefined, so the program uses an <b>if</b> and an <b>else</b> statement to prevent division by zero from occurring.<br>
  <b>Problem</b>--- (6.c) Write a program that requests two numbers and then displays either their sum or product, depending on what the user selects.<br><br>
  
  
  <b>Topic 3. Create blocks of code.</b>
  <p>In C, you can link two or more statements together, This is called a <b>block of code or a code block</b>. To create a block of code, you surround the statements in the block with opening and closing curly braces. Once this is done, the statements form one logical unit, which may be used anywhere that a single statement may.</p><br>
  
  <b>Problem</b>--- (7.c) This program is an improved version of the feet-to-meters, meters-to-feet conversion program. Notice how the use of code blocks allows the program to prompt specifically for each unit.<br>
 <b>Problem</b>--- (8.c) Using code blocks, we can improve the addition drill program so that it also prints the correct answer when the user makes a mistake.<br>
 <b>Problem</b>--- (9.c) Write a program that either adds or subtracts two integers. First, prompt the user to choose an operation; then prompt for the two numbers and display the result.<br>
  
  
  
  
  
  
  
  
  
  4. Use the foor loop.<br>
  5. Substitute C's ncrement and decrement operators.<br>
  6. expand printf()'s capability.<br>
  7. Program with C;s relational and logical operators.<br>

