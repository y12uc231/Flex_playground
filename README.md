# Flex_playground

This is a repository consisting of many simple flex files which you can explore.
The final target is to build a lexical analyzer for C.
<br>
How to run flex?<br>
Considering the  folder,"s2", from the repo. .We have the following files:-<br>
p1.l : File consisting the rules<br>
p.c : Action file where we access the lexyy() function<br>
test.c : The text file where we apply the rules we wrote in the p1.l file<br>
lex.yy.c: A file containing the "actual" C code to execute the rules on the "test.c" file<br>
<br>

Step 1:-<br>
You have to create the lex.yy.c file from the rule file,i.e, ex1.l.<br>

Command : lex ex1.l<br>
You may type "ls" and see if lex.cc.y is created.<br>
Step 2: You need to compile and create a "executable scanner" ,"scan", by typing the following:-<br>
Command: cc lex.yy.c p.c -lfl -o scan<br>
-lfl: Default definition of "yywrap"<br>
This command creates "scan" as executable.<br>

Final Step: To apply the scanner ,scan, type the following :-<br>
Command : ./scan <test<br>

NOTE : Although it is the easiest explanation I can write, it might be difficult for the first time.So please read the whole documentation(info flex) and try applying yourself simultaneously.



