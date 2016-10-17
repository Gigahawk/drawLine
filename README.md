Using this in Visual Studio:

- Copy DrawLine.c and DrawLine.h into your solution
	- Personally I have no idea how to actually do that, so here's an alternative:
		- Add a .cpp file to your solution, copy paste all the text in DrawLine.c in
		- Add a .h file to your solution, copy paste all the text in DrawLine.h in
		
- Make sure to add #include "DrawLine.h" to your main .cpp file
	- using "lib.h" instead of \<lib.h\> will make the compiler look for the file in the local directory instead of wherever library files are normally stored
	
- Write ya code
	- Take a look at DrawLine.h to see all the functions this header includes, and let's pretend I can write documentation heh.
	- This implementation is slightly different from how it appears in the worksheets cause I'm lazy and really should've been studying for chem, so just take a look at Example.c to get a hold of how it works.

Usage Guidelines:
- Don't put in negative coordinates, I didn't bother to write a check and I don't think they'll work, most likely you'll just get a segmentation fault and Visual Studio will complain about something. 

- I don't think an implementation of fancyPic() as described by the worksheet would work very well here, but it shouldn't be that hard to make it work (just make the triangles bigger).
