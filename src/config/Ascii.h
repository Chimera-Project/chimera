// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information
//Thanks to  arifyan for fixing it
#pragma once

const std::string windowsAsciiArt =
     " _____             _  _  _         _ \n"        
     "|  _  |           (_)| || |       | |\n"        
     "| | | | ___   ___  _ | || |  __ _ | |_   ___ \n"
     "| | | |/ __| / __|| || || | / _` || __| / _ \\\n"
     " \\ \\_/ /\\__ \\| (__ | || || || (_| || |_ |  __/\n"
     "  \\___/ |___/ \\___||_||_||_| \\__,_| \\__| \\___|\n";


const std::string nonWindowsAsciiArt =
     " _____             _  _  _         _ \n"        
     "|  _  |           (_)| || |       | |\n"        
     "| | | | ___   ___  _ | || |  __ _ | |_   ___ \n"
     "| | | |/ __| / __|| || || | / _` || __| / _ \\\n"
     " \\ \\_/ /\\__ \\| (__ | || || || (_| || |_ |  __/\n"
     "  \\___/ |___/ \\___||_||_||_| \\__,_| \\__| \\___|\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
