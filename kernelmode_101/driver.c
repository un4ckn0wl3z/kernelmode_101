#include "driver.h"

NTSTATUS EntryPoint() 
{
	DbgPrintEx(0, 0, "Driver  Loaded!");

	return STATUS_SUCCESS;

}