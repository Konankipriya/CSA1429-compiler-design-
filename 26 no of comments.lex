%{
int c=0;
%}
%%
[//|/*][a-zA-Z0-9]+ {c++;}
%%
int yywrap()
{
}
int main()
{
printf("enter:");
yylex();
printf("number of commnet lines:%d\n",c);
}

