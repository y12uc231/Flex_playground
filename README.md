# Flex_playground

This is a repository consisting of many simple flex files which you can explore.
The final target is to build a lexical analyzer for C.

How to run flex?
Considering the  folder,"s2", from the repo. .We have the following files:-
p1.l : File consisting the rules
p.c : Action file where we access the lexyy() function
test.c : The text file where we apply the rules we wrote in the p1.l file
lex.yy.c: A file containing the "actual" C code to execute the rules on the "test.c" file

Step 1:-
You have to create the lex.yy.c file from the rule file,i.e, ex1.l.

Command : lex ex1.l
You may type "ls" and see if lex.cc.y is created.
Step 2: You need to compile and create a "executable scanner" ,"scan", by typing the following:-
Command: cc lex.yy.c p.c -lfl -o scan
-lfl: Default definition of "yywrap"
This command creates "scan" as executable.

Final Step: To apply the scanner ,scan, type the following :-
Command : ./scan <test

NOTE : Although it is the easiest explanation I can write, it might be difficult for the first time.So please read the whole documentation(info flex) and try applying yourself simultaneously.



