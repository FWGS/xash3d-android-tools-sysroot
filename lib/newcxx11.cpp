// just resolve undefined reference for cxx11-style delete
void operator delete( void *ptr, unsigned int i )
{
	operator delete(ptr);
}