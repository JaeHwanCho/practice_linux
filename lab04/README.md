# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

## Lab04

**tty**: let me know my pts (virtual number)

Search Terms -> Wikipedia

Search Method -> Google

### Pipe
Work by creating a new shell

wc : word count
-> It's in line, word, letter order.

grep : Command to find 


**;** : Runs the command before and then the command after

At this point, the previous command executes the command after the error.

**&&** : Runs the command before and then the command after

At this point, it is not run the command after the previous command fails

**|** : It runs simultaneously.

---
	        stdin	stdout/stdin  stdout/stdin   stdout
	 keyboard -> program1 -> program2 -> program3	-> display
	        stderr					-> display
	                        stderr			-> display
	                                  stderr	-> display
---

**ps**: View Background Operations

**jobs** : View process

**fg** : Run process at foreground

**bg**, **&** : Run process at background

**|****&****;**: Parallel work

**kill id** : kill id process

**kill -9 id**: Definitely kills the id process.

**^C** : Interrupt

**^Z** : Suspend Stop working in the foreground and send to the background

**^D** : End of file


**fg %n**		Imported background tasks for n into the foreground
