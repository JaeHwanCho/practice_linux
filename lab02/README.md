# practical_c

실전코딩 2021 여름 학기

## 이름

조재환, 201923718

## Lab02

### Redirection
---
*
*					 CPU
*					  l
*Input Device	->	Memory	->	Output Deveices
*		        	  l
*			   Storage Devices
*
---
* stdin -> keyboard
* stdout, stderr -> screen

* stdin	: 0< = <
* stdout: 1> = >
* stderr: 2>
* stdout, stderr : &>

### Buffer
* Buffering
	* The file is in the buffer instead of going to the disk

* setvbuf() : Buffer Settings	
	* _IONBF = unbuff
	* _IOLBF = line buff
	* _IOFBF = fully buff
