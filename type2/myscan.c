int main(int argc,char *argv[])  
 {  
 yyin=fopen(argv[1],"r");  
 yylex();  
 fclose(yyin);  
 return 0;  
 }  
