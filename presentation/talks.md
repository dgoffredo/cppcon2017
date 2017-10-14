Talks Attended
--------------
1. Learning and Teaching Modern C++
    - Bjarne Stroustrup
	- boring
	
2. Coroutines: What can't they do?
    - Toby Allsopp
	- introduction to C++ coroutines
	- hey look: type erasure with coroutines
	
3. The landscape of parallel programming models: is it still hard or just OK?
    - Paul E. McKenney, Maged Michael, Michael Wong
	- boring, lots of ideas but without much organization
	- takeaway: parallel programming is easy
	- I disagree
	
4. From security to performance to GPU programming: exploring modern allocators
    - Sergey Zubkov
	- allocators can allow you to do magic in legacy situations
	- memory pools can prevent fragmentation in long-running programs
	
5. dynamic_cast From Scratch
    - Arthur O'Dwyer
	- inheritance is cuckoo bananas
	
6. Using Functional Programming Patterns to build a clean and simple HTTP routing API
    - Jeremy Demeule, Quentin Duval
	- use expression templates to define DSLs in your API
	
7. Agent based class design, C++ with a robot glue gun
    - Odin Holmes
	- something about publishing capabilities of agents at compile-time
	- this guy is a few steps ahead of me
	
8. Using IncludeOS to Write Fast and Secure Web Applications
    - Lukas Bergdoll
	- link a tiny operating system into your web server
	
9. Meta: Thoughts on generative C++
    - Herb Sutter
	- I'm not turning C++ into lisp, I promise!
	- I'm just simplifying things we already do! Promise!
	
10. Language support for compile-time reflection
    - Andrew Sutton
	- Andrew does compilers
	
11. Reader-Writer Lock versus Mutex - Understanding a Lost Bet
    - Jeffrey Mendelsohn
	- Just use a mutex
	- Always label your axes, and benchmark in isolation
	
12. An Interesting Lock-free Queue - Part 2 of N
    - Tony Van Eerd
	- Lock-free queues are interesting
	- You should never use one
	
13. Objects, Lifetimes, and References, oh my: the C++ Object Model, and Why it Matters to You
    - Nicole Mazzuca
	- References should be rebindable, at least when nested
	- value/object relationship

14. C++ and Persistent Memory Technologies, Like Intel's 3D-XPoint
    - Tomasz Kapela
	- Intel is not good a creating C++ APIs
	- persistent memory is not worth the trouble
	
15. So, you inherited a large code base...
    - David Sankel
	- this guy
	
16. Going Nowhere Faster
    - Chandler Carruth
	- x86 machine code is compiled into microcode
	- microcode is pipelined, scheduled, etc. in surprising ways
	- code does not do what you think
	
17. Unbolting the Compiler's Lid: What Has My Compiler Done for Me Lately?
    - Matt Godbolt
	- www.godbolt.com is cool
	- Matt is cool
	- the -O3 optimization setting is cool
	
18. My Little Object File: How Linkers Implement C++
    - Michael Spencer
	- linkers are not simple

Impressions
-----------
- Reflection/Generation as language features
    - It probably does not belong in C++, but what we want is macros.
- Meta-programming to build more domain-tailored libraries
    - templates, SFINAE, constexpr, traits, constexpr if...
	- what we want is macros
- Make everything go faster
    - easy to forget measurement
	- measurement is assumed but how often forgotten?
- Concurrency still treated as a niche rather than as the rule
    - No more free lunch, blah blah blah coroutines threads blah blah
	- The future is many cores, blah blah blah
	- Still doesn't seem to be the focus