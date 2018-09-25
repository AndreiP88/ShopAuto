#include "Functions.h"

	void DeleteFile(String^ path_file) {
		if (File::Exists(path_file)) File::Delete(path_file);
	}

	String^ CopyFile(String^ path_file, String^ path_file_new, Boolean NewName) {
		String^ file_name = Path::GetFileName(path_file_new);
		String^ file_directory = Path::GetDirectoryName(path_file_new);
		if (NewName == false)
			if (File::Exists(path_file)) File::Copy(path_file, path_file_new, true);
		if (NewName == true) {
			while (File::Exists(file_directory + "\\" + file_name)) file_name = "n" + file_name;
			path_file_new = file_directory + "\\" + file_name;
			if (File::Exists(path_file)) File::Copy(path_file, path_file_new, true);
		}
		return file_name;
	}

	void CopyDirectory(String^ directory, String^ new_directory) {
		if (Directory::Exists(directory)) {
			array <String^>^ Files = Directory::GetFiles(directory);
			Directory::CreateDirectory(new_directory);
			for (int i = 0; i < Files->GetLength(0); i++) {
				CopyFile(Files[i], new_directory + Path::GetFileName(Files[i]), false);
			}
		}
	}

	bool CompareStr(String^ parentStr, String^ wantedStr) {
		int ind = 0, count = 0;

		while ((ind = parentStr->ToLower()->IndexOf(wantedStr->ToLower(), ind)) >= 0) {
			ind += wantedStr->Length;
			count++;
		}
		if (count > 0) return true;
			else return false;
	}

	bool CompareNumber(String^ in, String^ min, String^ max) {
		Double _in = Convert::ToDouble(in);
		Double _min = Convert::ToDouble(min);
		Double _max = Convert::ToDouble(max);
		if ((_in >= _min) && (_in <= _max)) return true;
		else return false;
	}

	String^ GetID(String^ N1, String^ N2, int number) {
		String^ ID;
		String^ NUM;
		if (number < 10) NUM = "0000" + Convert::ToString(number);
		if ((number >= 10) && (number < 100)) NUM = "000" + Convert::ToString(number);
		if ((number >= 100) && (number < 1000)) NUM = "00" + Convert::ToString(number);
		if ((number >= 1000) && (number < 10000)) NUM = "0" + Convert::ToString(number);
		if (number >= 10000) NUM = Convert::ToString(number);
		ID = Convert::ToString(N1[0].ToString() + N2[0].ToString() + NUM);
		return ID;
	}
