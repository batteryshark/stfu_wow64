# stfuWOW64
### Lacking any simple way to globally disable 32 bit WOW64 emulation support on Windows10 Pro, this is a library to gracefully exit any initalizing process that leverages the WOW64 subsystem.

### Why?
#### Security reasons? Maybe because it's 2019 and unless you have specific use-cases, 32 bit software should no longer exist?

### A Hardcoded Syscall?
#### Yeah, it's not portable like this, maybe I'll change that... this is a POC anyway.   
