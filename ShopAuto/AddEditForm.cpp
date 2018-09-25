#include "MainForm.h"
#include "AddEditForm.h"

using namespace ShopAuto;

	Void AddEditForm::button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddEditForm::Close();
	}

	Void AddEditForm::AddEditForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		if (EDIT == true) 
		{
			button1->Text = "Изменить";
			Text = "Редактирование информации";
		}
		else
		{
			button1->Text = "Добавить";
			Text = "Добавление автомобиля";
		}
	}

	void AddEditForm::AddCarForEdit(int index)
	{
		String^ image_location;
		name_image_file = parentForm->Cars[index]._pic_name;
		if (File::Exists(name_image_file)) image_location = name_image_file;
		else image_location = parentForm->base_directory + "\\" + parentForm->base_name + "\\" + name_image_file;

		label1->Text = parentForm->Cars[index]._id;
		textBoxMaker->Text = parentForm->Cars[index]._maker;
		textBoxModel->Text = parentForm->Cars[index]._model;
		textBoxEngineCapacity->Text = parentForm->Cars[index]._engine_capacity;
		textBoxPower->Text = parentForm->Cars[index]._power;
		textBoxYear->Text = parentForm->Cars[index]._year;
		textBoxMileage->Text = parentForm->Cars[index]._mileage;
		textBoxPrice->Text = parentForm->Cars[index]._price;
		comboBoxStatus->Text = parentForm->Cars[index]._status;
		textBoxDetails->Text = parentForm->Cars[index]._details;
		comboBoxStations->Text = parentForm->Cars[index]._station;
		pictureBox1->ImageLocation = image_location;
		index_edited = index;
	}

	void AddEditForm::LoadStations()
	{
		for (int i = 0; i < parentForm->Stations->Count; i++) {
			comboBoxStations->Items->Add(parentForm->Stations[i]._name);
		}
	}

	Void AddEditForm::pictureBox1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if (name_image_file != "") 
				parentForm->ListFilesForDelWithSave->Add(Path::GetFileName(pictureBox1->ImageLocation));

			pictureBox1->ImageLocation = openFileDialog1->FileName;
			path_from_copy_image = openFileDialog1->FileName;
			name_image_file = openFileDialog1->SafeFileName;
			PIC = true;
		}
		else PIC = false;

	}

	Void AddEditForm::button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBoxMaker->Text != "" && textBoxModel->Text != "")
		{
			String^ ID = GetID(textBoxMaker->Text, textBoxModel->Text, parentForm->CountBase + 1);

			path_to_new_location_image = parentForm->base_directory + "\\" + parentForm->base_name + "\\" + name_image_file;

			if (PIC == true) name_image_file = CopyFile(path_from_copy_image, path_to_new_location_image, true);

			if (EDIT == true) 
			{
				parentForm->EditCar(index_edited, Convert::ToString(label1->Text), Convert::ToString(textBoxMaker->Text), Convert::ToString(textBoxModel->Text),
					Convert::ToString(textBoxEngineCapacity->Text), Convert::ToString(textBoxPower->Text), Convert::ToString(textBoxYear->Text),
					Convert::ToString(textBoxMileage->Text), Convert::ToString(textBoxPrice->Text), Convert::ToString(comboBoxStatus->Text),
					Convert::ToString(textBoxDetails->Text), Convert::ToString(name_image_file), Convert::ToString(comboBoxStations->Text));
			}
			else
			{
				parentForm->AddCar(Convert::ToString(ID), Convert::ToString(textBoxMaker->Text), Convert::ToString(textBoxModel->Text),
					Convert::ToString(textBoxEngineCapacity->Text), Convert::ToString(textBoxPower->Text), Convert::ToString(textBoxYear->Text),
					Convert::ToString(textBoxMileage->Text), Convert::ToString(textBoxPrice->Text), Convert::ToString(comboBoxStatus->Text),
					Convert::ToString(textBoxDetails->Text), Convert::ToString(name_image_file), Convert::ToString(comboBoxStations->Text));
				parentForm->ListFilesForDelWithNoSave->Add(name_image_file);
				parentForm->CountBase++;
			}
			this->Close();
		}
		else
		{
			MessageBox::Show("Обязательные поля 'Марка' и 'Модель' обязательны для заполнения.\nЗаполните!", "Внимание!");
		}
	}