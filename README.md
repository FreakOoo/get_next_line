_This project has been created as part
of the 42 curriculum by mchopin_

__Description__
This project is supposed to get the next line (\n)
it manages file descriptors correctly and writes to the correct output. It continues with repeated calls in chunks of a defined size (BUFFER_SIZE and this can be changed with -D BUFFER_SIZE=42) when compiling. 
In short the function reads the text pointed to one line at a time. The function returns the rilnes read and if there is nothing left it returns NULL, the returned lines come with a terminating \n except for the final one which has a null terminator. 
The header is get_next_line.h
and all the utility functions are in get_next_line_utils.c

__Instructions__
To use, in get_next_line.c you can uncomment the main and put whatever file descriptor or file you want to read into the read function and in the declaration of fd (for the file descriptor).
by default the file descriptor will handle itself automatically to an extent but you can mess around with it and output to standard output, a file, or whatever else. 
To pick a buffer size add this while compiling
 -D BUFFER_SIZE=42

 __Resources__ 
 If you want more ressources about the topic you can look up more information on how the read and open functions work, look up more information about file descriptors. And euhhhh yeah not much more. The program is  a bit hard to get through your head but there's not much more in terms of ressources to help with that other than some head to keyboard bashing action.

 