<img src="https://github.com/AM-ML/C/assets/131138888/d15793d5-2b24-4d3e-a8c0-607ff299cba0" width = "408" height="500"/>


# Layout
The general structuring of each folder in rsc/ and proj/ goes like this:
  ## My Custom Library:
    The lib.c and lib.c files contain my custom functions that I use frequently in each program.
    
  ## Main Source File
    The c.c program file that contains all the main code aside from function provided by my custom library.

  ## Makefile
    The 'makefile' file is the main tool that I use to run my code and handle git, it runs multiple custom commands just by calling make executable in the command-line.
