void func(char *fn)
{
	char buf[1024];
	
	strcpy(buf,"/bin/ls -l ");
	strncat(buf,fn,256);
	
	execl("/bin/sh","sh","-c",buf,0);
	
}