Using this in Visual Studio:

- Copy DrawLine.c and DrawLine.h into your solution
	- Personally I have no idea how to actually do that, so here's an alternative:
		- Add a .cpp file to your solution, copy paste all the text in DrawLine.c in
		- Add a .h file to your solution, copy paste all the text in DrawLine.h in
		
- Make sure to add #include "DrawLine.h" to your main .cpp file
	- using "lib.h" instead of <lib.h> will make the compiler look for the file in the local directory instead of wherever library files are normally stored

- It probably won't compile, this is because Visual Studio compiles in C++ mode by default and somethingsomething that apparently breaks pointer types or whatever soooo
	- On the top bar go to: Debug > $YOUR_PROJECT Properties...
	- In the window that opens up: C/C++ > Advanced
	- The second entry (Compile As) should say "Default", change it to :"Compile as C Code (/TC)"