# Decoding_characters

Description:
Write an application that, when given an arbitrary sequence of alphanumeric characters as
input, will convert each character to some cyrillic character and provide a decoding table as part
of the output. Each unique character should be converted to a different cyrillic character. There
should be some way for an user to enter in the random sequence of characters for conversion.
As an example, if the user input the string “aabcdDef6” a potential output string could be
“ДДѮПРФВЛЂ” with the decoding table indicating a=Д, b=Ѯ, c=П, d=Р, D=Ф, e=В, f=Л, 6=Ђ.

Running:
g++ -o assessment assessment.cpp
./assessment
