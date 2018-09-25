//#pragma once

	using namespace System;
	using namespace System::IO;
	using namespace System::Windows::Forms;


#ifndef     Functions_h
#define     Functions_h

	void DeleteFile(String^);
	String^ CopyFile(String^, String^, Boolean);
	void CopyDirectory(String^, String^);
	bool CompareStr(String^, String^);
	bool CompareNumber(String^, String^, String^);
	String^ GetID(String^, String^, int);
	

#endif