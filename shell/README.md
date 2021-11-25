This is the readme for a Shell project at Holberton. 

A process is an instance of an executing program that has a unique process ID. This PID is used bu many functions and syscalls to interact with and manipulate processes.



0x00-pid.c: is a file that gets the user the current process ID.

0x01-ppid.c: is a program that gets the user the parent's process ID.

Why 'echo $$' returns PPID?: It is defined to return the process
ID of the parent in a subshell. 

0x02-max_pid: Gets the maximum vale a process ID can be. It does
this by reading the value on the system in:
 "/proc/sys/kernel/pid_max". However, the maximum PID in Linux
is configurable. The default value for this file is 32768, but
it can be set to up to 2^22, which is aproximately 4 million. 
(PID_MAX_LIMIT, aprox 4 M).
You can read proc(5) man page.

--------------------------------------------------------------
0x03-prt_wo_ac.c: Prints the arguments that come after 
the user calls the program. Eg. "./prtwo 1 2 3" will prt
1
2
3

--------------------------------------------------------------
