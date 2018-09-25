#include "MainForm.h"
#include "AddEditForm.h"
#include "ViewForm.h"
#include "SearshForm.h"
#include "STOForm.h"
#include "AboutForm.h"

//#include "Functions.h"

using namespace ShopAuto;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm());

	return 0;
}

void MainForm:: добавитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	AddEditForm^ f2 = gcnew AddEditForm(this);
	f2->LoadStations();
	f2->ShowDialog();
}

void MainForm::изменитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (listView1->SelectedItems->Count>0)
	{
		AddEditForm^ f2 = gcnew AddEditForm(this);
		int select_index = GetIndex(listView1->SelectedIndices[0]);
		f2->EDIT = true;
		f2->LoadStations();
		f2->AddCarForEdit(select_index);
		f2->ShowDialog();
	}
}

void MainForm::listView1_DoubleClick(System::Object^  sender, System::EventArgs^  e)
{
	if (listView1->SelectedItems->Count>0)
	{
		ViewForm^ f3 = gcnew ViewForm(this);
		int select_index = GetIndex(listView1->SelectedIndices[0]);
		f3->AddCarForView(select_index);
		f3->ShowDialog();
	}
}

void MainForm::поискToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	SearshForm^ f4 = gcnew SearshForm(this);
	if (FIND == true)
	{
		f4->LoadPreviousSearshParameters();
		f4->ShowDialog();
	}
	else
		f4->ShowDialog();
}

void MainForm::базаСТОToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	STOForm^ f5 = gcnew STOForm(this);
	f5->LoadStationsToListView();
	f5->ShowDialog();
}

void MainForm::оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	AboutForm^ f6 = gcnew AboutForm(this);
	f6->ShowDialog();
}

Void MainForm::MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	if (DialogCloseAndExit("Выход из приложения", "Вы действительно хотите выйти?", "Некоторые данные не сохранены!\n\nСохранить перед выходом?") == true)
		return;
	else
		e->Cancel = true;
}

	Void MainForm::toolStripButtonAddToBase_Click(System::Object^  sender, System::EventArgs^  e)
	{
		добавитьToolStripMenuItem->PerformClick();
	}
	Void MainForm::добавитьToolStripMenuItemContext_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		добавитьToolStripMenuItem->PerformClick();
	}

	Void MainForm::toolStripButtonEditSelectedItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		изменитьToolStripMenuItem->PerformClick();
	}

	Void MainForm::изменитьToolStripMenuItemContext_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		изменитьToolStripMenuItem->PerformClick();
	}

	Void MainForm::toolStripButtonFind_Click(System::Object^  sender, System::EventArgs^  e)
	{
		поискToolStripMenuItem->PerformClick();
	}

	Void MainForm::удалитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		DeleteSelectedItemFromListView(Cars);
	}
	Void MainForm::удалитьToolStripMenuItemContext_Click(System::Object^  sender, System::EventArgs^  e)
	{
		DeleteSelectedItemFromListView(Cars);
	}
	Void MainForm::toolStripButtonDeleteSelectedItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		DeleteSelectedItemFromListView(Cars);
	}

	Void MainForm::toolStripButtonNewBase_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		CreatBaseDialog();
	}

	Void MainForm::создатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CreatBaseDialog();
	}

	Void MainForm::toolStripButtonOpenBase_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenBaseFromFileDialog();
	}

	Void MainForm::открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		OpenBaseFromFileDialog();
	}

	Void MainForm::toolStripButtonSaveBase_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		SaveBaseToFile(base_file_path);
		SAVED = true;
	}

	Void MainForm::сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		SaveBaseToFile(base_file_path);
		SAVED = true;
	}

	Void MainForm::toolStripButtonSaveAsBase_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		SaveAsBaseToFile();
	}

	Void MainForm::сохранитьКакToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		SaveAsBaseToFile();
	}

	Void MainForm::toolStripButtonCloseBase_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (DialogCloseAndExit("Закрытие базы", "Вы действительно хотите закрыть базу?", "Некоторые данные не сохранены!\n\nСохранить перед закрытием?") == true)
			CloseBase();
	}

	Void MainForm::закрытьToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (DialogCloseAndExit("Закрытие базы", "Вы действительно хотите закрыть базу?", "Некоторые данные не сохранены!\n\nСохранить перед закрытием?") == true)
			CloseBase();
	}

	Void MainForm::обновитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClearSearshResult();
	}

	Void MainForm::toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ClearSearshResult();
	}

	Void MainForm::выйтиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MainForm::Close();
	}

	Void MainForm::menuStrip1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ChangeEnabledButton();
	}

	Void MainForm::contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e)
	{
		//
	}

	Void MainForm::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		ChangeEnabledButton();
	}

	Void MainForm::вПродажеToolStripMenuItem_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (FIND == true)
			SearshCarByParameters(SearshParameter);
		else
			AddCarToListViewFromList(Cars);
	}

	Void MainForm::ПроданоToolStripMenuItem_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (FIND == true) 
			SearshCarByParameters(SearshParameter);
		else
			AddCarToListViewFromList(Cars);
	}

	Void MainForm::безСортировкиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		MainForm::listView1->ListViewItemSorter = nullptr;

	}

	Void MainForm::вПродажеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (MainForm::вПродажеToolStripMenuItem->Checked == true) 
			MainForm::вПродажеToolStripMenuItem->Checked = false;
		else
			MainForm::вПродажеToolStripMenuItem->Checked = true;
	}

	System::Void MainForm::ПроданоToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (ПроданоToolStripMenuItem->Checked == true)
			ПроданоToolStripMenuItem->Checked = false;
		else
			ПроданоToolStripMenuItem->Checked = true;
	}

	void MainForm::ChangeEnabledButton() 
	{
		Boolean StatusMenuItem;
		if (listView1->SelectedItems->Count > 0)
			StatusMenuItem = true;
		else
			StatusMenuItem = false;

		удалитьToolStripMenuItem->Enabled = StatusMenuItem;
		изменитьToolStripMenuItem->Enabled = StatusMenuItem;

		toolStripButtonDeleteSelectedItem->Enabled = StatusMenuItem;
		toolStripButtonEditSelectedItem->Enabled = StatusMenuItem;

		удалитьToolStripMenuItemContext->Enabled = StatusMenuItem;
		изменитьToolStripMenuItemContext->Enabled = StatusMenuItem;

		toolStripButtonFind->Enabled = OPENED;
		поискToolStripMenuItem->Enabled = OPENED;
		базаСТОToolStripMenuItem->Enabled = OPENED;

		toolStripButton1->Enabled = FIND;
		обновитьToolStripMenuItem->Enabled = FIND;

		добавитьToolStripMenuItem->Enabled = OPENED;
		toolStripButtonAddToBase->Enabled = OPENED;
		добавитьToolStripMenuItemContext->Enabled = OPENED;

		сохранитьToolStripMenuItem->Enabled = OPENED;
		сохранитКакToolStripMenuItem->Enabled = OPENED;
		закрытьToolStripMenuItem1->Enabled = OPENED;
		toolStripButtonSaveBase->Enabled = OPENED;
		toolStripButtonSaveAsBase->Enabled = OPENED;
		toolStripButtonCloseBase->Enabled = OPENED;
	}



			 ref class ListViewItemComparer : public System::Collections::IComparer
			 {
				private: int col;
				private: SortOrder order;

				public: ListViewItemComparer() 
				{
					 col = 0;
					 order = SortOrder::Ascending;
				}

				public: ListViewItemComparer(int col, SortOrder order) 
				{
					this->col = col;
					this->order = order;
				}

				public: virtual int Compare(Object ^x, Object ^y)
				{
					int return_val = -1;
					return_val = String::Compare((dynamic_cast<ListViewItem^>(x))->SubItems[col]->Text,
						(dynamic_cast<ListViewItem^>(y))->SubItems[col]->Text);

					if (order == SortOrder::Descending)
						return_val *= -1;

					return return_val;
				}
			};

			ref class LVIntItemComparer : public System::Collections::IComparer {
				private: int col;
				private: SortOrder order;
				private: CaseInsensitiveComparer cmp;

				public: LVIntItemComparer() {
					col = 0;
					order = SortOrder::Ascending;
					CaseInsensitiveComparer ^cmp = gcnew CaseInsensitiveComparer();
				}
					
				public: LVIntItemComparer(int column, SortOrder order)
				{
					this->col = column;
					this->order = order;
				}
				public: virtual int Compare(Object ^x, Object ^y)
				{
					int returnVal;
			
					returnVal = cmp.Compare(((ListViewItem^)x)->SubItems[col]->Text, ((ListViewItem^)y)->SubItems[col]->Text);

					if (order == SortOrder::Ascending) 
					{
						return returnVal;
					}
					else if (order == SortOrder::Descending) 
					{
						return (-returnVal);
					}
					else
					{
						return 0;
					}
				}
			};

			 ref class LVIItemComparer : public System::Collections::IComparer
			 {
				 private: int col;
				 private: SortOrder order;

				 public: LVIItemComparer()
				 {
					 col = 0;
					 order = SortOrder::Ascending;
				 }

				 public: LVIItemComparer(int column, SortOrder order)
				 {

					 this->col = column;
					 this->order = order;
				 }

				 public: virtual int Compare(Object ^x, Object ^y)
				 {
					 int returnVal;

					 try 
					 {
						 System::Decimal first = Decimal::Parse(((ListViewItem^)x)->SubItems[col]->Text);
						 System::Decimal second = Decimal::Parse(((ListViewItem^)y)->SubItems[col]->Text);

						 returnVal = Decimal::Compare(first, second);
					 }
					 catch (...) 
					 {
						 returnVal = String::Compare(((ListViewItem^)x)->SubItems[col]->Text, ((ListViewItem^)y)->SubItems[col]->Text);
					 }

					 if (order == SortOrder::Descending)
						 returnVal *= -1;

					 return returnVal;
				 }
			 };

	Void MainForm::listView1_ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) 
	{
		if (e->Column != last_sorted_column) 
		{
			if (last_sorted_column != -1)
				listView1->Columns[last_sorted_column]->Text = listView1->Columns[last_sorted_column]->Text->Substring(2);

			listView1->Columns[e->Column]->Text = L"▲ " + listView1->Columns[e->Column]->Text;
			last_sorted_column = e->Column;
			listView1->Sorting = SortOrder::Ascending;
			last_sort_order = listView1->Sorting;
		}
		else 
		{
			if (listView1->Sorting == SortOrder::Ascending) {
				listView1->Columns[e->Column]->Text = L"▼ " + listView1->Columns[e->Column]->Text->Substring(2);
				listView1->Sorting = SortOrder::Descending;
				last_sort_order = listView1->Sorting;
			}
			else
			{
				listView1->Columns[e->Column]->Text = L"▲ " + listView1->Columns[e->Column]->Text->Substring(2);
				listView1->Sorting = SortOrder::Ascending;
				last_sort_order = listView1->Sorting;
			}
		}

		listView1->Sort();
		//listView1->ListViewItemSorter = gcnew ListViewItemComparer(e->Column, listView1->Sorting);
		listView1->ListViewItemSorter = gcnew LVIntItemComparer(e->Column, listView1->Sorting);
		//listView1->ListViewItemSorter = gcnew LVIItemComparer(e->Column, listView1->Sorting);
	}


	bool MainForm::DialogCloseAndExit(String^ CaptionDialog, String^ TextDialog1, String^ TextDialog2)
	{
		System::Windows::Forms::DialogResult result;
		if (SAVED == true) 
		{
			result = MessageBox::Show(TextDialog1, CaptionDialog, MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes)
				return true;
			else
				return false;
		}
		else 
		{
			result = MessageBox::Show(TextDialog2, CaptionDialog, MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				SaveBaseToFile(base_file_path);
				return true;
			}
			else
				if (result == System::Windows::Forms::DialogResult::No)
					return true;
				else
					return false;
		}
	}

	void MainForm::OpenBaseFromFileDialog() 
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			CloseBase();
			OpenBaseFromFile(openFileDialog1->FileName);
		}
	}

	void MainForm::OpenBaseFromFile(String^ path)
	{
		base_file_path = path;
		base_directory = Path::GetDirectoryName(base_file_path);
		base_file = Path::GetFileName(base_file_path);

		base_name = Path::GetFileNameWithoutExtension(base_file_path);

		LoadCarBaseFromFileToList(base_file_path);
		LoadSTOBaseFromFileToList(base_directory + "\\" + base_name + ".stobase");
		toolStripStatusLabel2->Text = base_file_path;

		OPENED = true;
		SAVED = true;
	}

	void MainForm::LoadCarBaseFromFileToList(String^ path_base) 
	{
		StreamReader^ Stream = gcnew StreamReader(path_base);
		CountBase = Convert::ToInt32(Stream->ReadLine());
		while ((Stream->ReadLine()) != nullptr)
		{
			AddCar(Stream->ReadLine(), Stream->ReadLine(), Stream->ReadLine(), Stream->ReadLine(), Stream->ReadLine(), Stream->ReadLine(), Stream->ReadLine(),
				Stream->ReadLine(), Stream->ReadLine(), Stream->ReadLine(), Stream->ReadLine(), Stream->ReadLine());
		}
		Stream->Close();
		AddCarToListViewFromList(Cars);
	}

	void MainForm::LoadSTOBaseFromFileToList(String^ path_base)
	{
		StreamReader^ Stream = gcnew StreamReader(path_base);
		while ((Stream->ReadLine()) != nullptr) {
			AddSTO(Stream->ReadLine(), Stream->ReadLine(), Stream->ReadLine());
		}
		Stream->Close();
	}

	void MainForm::CreatBaseDialog() {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			CloseBase();
			CreatBase(saveFileDialog1->FileName);
		}
	}

	void MainForm::CreatBase(String^ path)
	{
		base_file_path = path;
		base_directory = Path::GetDirectoryName(base_file_path);
		base_file = Path::GetFileName(base_file_path);
		base_name = Path::GetFileNameWithoutExtension(base_file_path);
		String^ sto_base_file_path = base_directory + "\\" + base_name + ".stobase";

		toolStripStatusLabel2->Text = base_file_path;
		FileStream^ StreamCar = gcnew FileStream(base_file_path, FileMode::Append, FileAccess::Write, FileShare::Write);
		StreamCar->Close();
		FileStream^ StreamSTO = gcnew FileStream(sto_base_file_path, FileMode::Append, FileAccess::Write, FileShare::Write);
		StreamSTO->Close();
		Directory::CreateDirectory(base_directory + "\\" + base_name + "\\");
		OPENED = true;
	}

	void MainForm::CloseBase()
	{
		base_file_path = "";
		base_directory = "";
		base_file = "";
		toolStripStatusLabel2->Text = base_file_path;
		OPENED = false;
		SAVED = true;
		CountBase = 0;
		Clear(Cars);

		DeleteFilesAfterCloseBase();
	}

	void MainForm::Clear(System::Collections::Generic::List <Car> ^_list)
	{
		listView1->Items->Clear();
		_list->Clear();
	}

	void MainForm::SaveBaseToFile(String^ path_base) 
	{
		String^ sto_base_file_path = Path::GetDirectoryName(path_base) + "\\" + Path::GetFileNameWithoutExtension(path_base) + ".stobase";

		StreamWriter^ StreamCar = gcnew StreamWriter(path_base, false, Encoding::Unicode);
		StreamCar->Write(Convert::ToString(CountBase) + "\n");
		for (int i = 0; i < Cars->Count; i++) 
		{
			StreamCar->Write(Convert::ToString(i) + "\n" + Cars[i]._id + "\n" + Cars[i]._maker + "\n" + Cars[i]._model + "\n" + Cars[i]._engine_capacity + "\n" +
				Cars[i]._power + "\n" + Cars[i]._year + "\n" + Cars[i]._mileage + "\n" + Cars[i]._price + "\n" + Cars[i]._status + "\n" + Cars[i]._details + "\n" +
				Cars[i]._pic_name + "\n" + Cars[i]._station + "\n");
		}
		StreamCar->Close();

		StreamWriter^ StreamSTO = gcnew StreamWriter(sto_base_file_path, false, Encoding::Unicode);
		for (int i = 0; i < Stations->Count; i++)
		{
			StreamSTO->Write(Convert::ToString(i) + "\n" + Stations[i]._name + "\n" + Stations[i]._address + "\n" + Stations[i]._phones + "\n");
		}
		StreamSTO->Close();

		DeleteFilesAfterSaveBase();
	}

	void MainForm::SaveAsBaseToFile()
	{
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ base_directory_old = base_directory;
			String^ base_name_old = base_name;
			CreatBase(saveFileDialog1->FileName);
			SaveBaseToFile(base_file_path);
			CopyDirectory(base_directory_old + "\\" + base_name_old + "\\", base_directory + "\\" + base_name + "\\");
			OPENED = true;
		}
	}

	void MainForm::DeleteFilesAfterSaveBase() 
	{
		for (int i = 0; i < ListFilesForDelWithSave->Count; i++)
			DeleteFile(ListFilesForDelWithSave[i]);
		ListFilesForDelWithSave->Clear();
		ListFilesForDelWithNoSave->Clear();
	}

	void MainForm::DeleteFilesAfterCloseBase()
	{
		for (int i = 0; i < ListFilesForDelWithNoSave->Count; i++)
			DeleteFile(ListFilesForDelWithNoSave[i]);
		ListFilesForDelWithSave->Clear();
		ListFilesForDelWithNoSave->Clear();
	}

	void MainForm::AddCarToListViewFromList(List <Car> ^_list)
	{
		listView1->ListViewItemSorter = nullptr;

		listView1->Items->Clear();
		for (int i = 0; i < _list->Count; i++) {
			if (вПродажеToolStripMenuItem->Checked == true)
				if (_list[i]._status == "В продаже")
					listView1->Items->AddRange(_list[i].AddCarToListView());
			if (ПроданоToolStripMenuItem->Checked == true)
				if (_list[i]._status == "Продано")
					listView1->Items->AddRange(_list[i].AddCarToListView());
		}

		if (last_sorted_column != -1)
			listView1->ListViewItemSorter = gcnew ListViewItemComparer(last_sorted_column, last_sort_order);
	}

	void MainForm::DeleteSelectedItemFromListView(List <Car> ^_list)
	{
		while (listView1->SelectedItems->Count>0)
		{
			ListViewItem ^ item = listView1->SelectedItems[0];
			int select = GetIndex(listView1->SelectedIndices[0]);
			System::Windows::Forms::DialogResult result;
			result = MessageBox::Show("Вы действительно хотите удалить " + _list[select]._maker + " " + _list[select]._model + "?", "Удаление", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				ListFilesForDelWithSave->Add(_list[select]._pic_name);
				listView1->Items->Remove(item);
				_list->RemoveAt(select);
				return;
			}
			else
				return;
		}
	}

	bool MainForm::Searsh(Car ^ _list, SearshParameters ^ SearshParameter)
	{
		int CountChecked = 0, CountPositiveResults = 0;
		if (SearshParameter->_check_maker == true) 
		{
			CountChecked++;
			if (CompareStr(_list->_maker, SearshParameter->_maker) == true)
				CountPositiveResults++;
		}
		if (SearshParameter->_check_model == true) 
		{
			CountChecked++;
			if (CompareStr(_list->_model, SearshParameter->_model) == true)
				CountPositiveResults++;
		}
		if (SearshParameter->_check_engine_capacity == true) 
		{
			CountChecked++;
			if (CompareNumber(_list->_engine_capacity, SearshParameter->_engine_capacity_min, SearshParameter->_engine_capacity_max) == true)
				CountPositiveResults++;
		}
		if (SearshParameter->_check_power == true) 
		{
			CountChecked++;
			if (CompareNumber(_list->_power, SearshParameter->_power_min, SearshParameter->_power_max) == true)
				CountPositiveResults++;
		}
		if (SearshParameter->_check_year == true) 
		{
			CountChecked++;
			if (CompareNumber(_list->_year, SearshParameter->_year_min, SearshParameter->_year_max) == true)
				CountPositiveResults++;
		}
		if (SearshParameter->_check_mileage == true)
		{
			CountChecked++;
			if (CompareNumber(_list->_mileage, SearshParameter->_mileage_min, SearshParameter->_mileage_max) == true)
				CountPositiveResults++;
		}
		if (SearshParameter->_check_price == true) 
		{
			CountChecked++;
			if (CompareNumber(_list->_price, SearshParameter->_price_min, SearshParameter->_price_max) == true)
				CountPositiveResults++;
		}

		if (CountChecked == CountPositiveResults) return true;
		else return false;
	}

	void MainForm::LoadSearshParameters(Boolean check_maker, Boolean check_model, Boolean check_engine_capacity, Boolean check_power,
		Boolean check_year, Boolean check_mileage, Boolean check_price,
		String^ maker, String^ model, String^ engine_capacity_min, String^ engine_capacity_max, String^ power_min, String^ power_max,
		String^ year_min, String^ year_max, String^ mileage_min, String^ mileage_max, String^ price_min, String^ price_max) 
	{

		SearshParameter->_check_maker = check_maker;
		SearshParameter->_check_model = check_model;
		SearshParameter->_check_engine_capacity = check_engine_capacity;
		SearshParameter->_check_power = check_power;
		SearshParameter->_check_year = check_year;
		SearshParameter->_check_mileage = check_mileage;
		SearshParameter->_check_price = check_price;
		SearshParameter->_maker = maker;
		SearshParameter->_model = model;
		SearshParameter->_engine_capacity_min = engine_capacity_min;
		SearshParameter->_engine_capacity_max = engine_capacity_max;
		SearshParameter->_power_min = power_min;
		SearshParameter->_power_max = power_max;
		SearshParameter->_year_min = year_min;
		SearshParameter->_year_max = year_max;
		SearshParameter->_mileage_min = mileage_min;
		SearshParameter->_mileage_max = mileage_max;
		SearshParameter->_price_min = price_min;
		SearshParameter->_price_max = price_max;

		FIND = true;

		SearshCarByParameters(SearshParameter);
	}

	void MainForm::SearshCarByParameters(SearshParameters^ SearshParameter) 
	{

		Clear(SearshResult);

		for (int i = 0; i < Cars->Count; i++) 
		{
			if (Searsh(Cars[i], SearshParameter) == true) SearshResult->Add(Cars[i]);
		}
		AddCarToListViewFromList(SearshResult);
	}

	void MainForm::ClearSearshResult()
	{
		FIND = false;
		Clear(SearshResult);
		AddCarToListViewFromList(Cars);
	}

	int MainForm::GetIndex(int index_selected_item) 
	{
		 int select_index = 0;
		 for (int i = 0; i < Cars->Count; i++)
		 if ((CompareStr(Cars[i]._id, listView1->Items[index_selected_item]->Text)) == true) 
		 {
			 select_index = i;
			 break;
		 }
		 return select_index;
	 }

	void MainForm::AddCar(String^ id, String^ maker, String^ model, String^ engine_capacity, String^ power,
		String^ year, String^ mileage, String^ price, String^ status, String^ details, String^ pic_name, String^ station)
	{
		Cars->Add(Car(id, maker, model, engine_capacity, power, year, mileage, price, status, details, pic_name, station));
		if (FIND == true) SearshCarByParameters(SearshParameter);
		else
			AddCarToListViewFromList(Cars);
		SAVED = false;
	}

	void MainForm::EditCar(int index, String^ id, String^ maker, String^ model, String^ engine_capacity, String^ power,
		String^ year, String^ mileage, String^ price, String^ status, String^ details, String^ pic_name, String^ station)
	{

		ListFilesForDelWithNoSave->Add(pic_name);

		Cars->RemoveAt(index);
		Cars->Insert(index, Car(id, maker, model, engine_capacity, power, year, mileage, price, status, details, pic_name, station));
		if (FIND == true) SearshCarByParameters(SearshParameter);
		else
			AddCarToListViewFromList(Cars);
		SAVED = false;
	}

	void MainForm::AddSTO(String^ name, String^ address, String^ phones)
	{
		Stations->Add(Station(name, address, phones));
		SAVED = false;
	}

	void MainForm::EditSTO(int index, String^ name, String^ address, String^ phones)
	{

		Stations->RemoveAt(index);
		Stations->Insert(index, Station(name, address, phones));

		SAVED = false;
	}

