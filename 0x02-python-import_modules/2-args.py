#!/usr/bin/python3

import sys

if __name__ == "__main__":
    argLen = len(sys.argv)
    if argLen == 1:
        print("{:d} arguments.".format(argLen -1))
    elif argLen == 2:
        print("{:d}: argument:".format(argLen -1, sys.argv))
    else:
        print("{:d}: arguments:".format(argLen -1, sys.argv))
        for i in range(1, argLen):
            print("{:d}: {:d}".format(i, sys.argv[i]))
