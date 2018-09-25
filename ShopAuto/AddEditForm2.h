#pragma once
#include <windows.h>
#include "MainForm.h"

namespace ShopAuto {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddEditForm
	/// </summary>

	public ref class AddEditForm : public System::Windows::Forms::Form
	{
	public:
		AddEditForm(MainForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
			//
			//TODO: добавьте код конструктора
			//
		}

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBoxPower;

	private: System::Windows::Forms::TextBox^  textBoxEngineCapacity;


	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TextBox^  textBoxPrice;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::ComboBox^  comboBoxStatus;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  textBoxDetails;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::TextBox^  textBoxYear;

	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::TextBox^  textBoxMileage;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolTip^  toolTip1;



	public:
	private: MainForm^ parentForm;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddEditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBoxMaker;

	private: System::Windows::Forms::TextBox^  textBoxModel;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddEditForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMaker = (gcnew System::Windows::Forms::TextBox());
			this->textBoxModel = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPower = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxEngineCapacity = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxStatus = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDetails = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMileage = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 295);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddEditForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(441, 295);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 36);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddEditForm::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxMaker);
			this->groupBox1->Location = System::Drawing::Point(265, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(146, 48);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Марка";
			// 
			// textBoxMaker
			// 
			this->textBoxMaker->Location = System::Drawing::Point(6, 19);
			this->textBoxMaker->Name = L"textBoxMaker";
			this->textBoxMaker->Size = System::Drawing::Size(133, 20);
			this->textBoxMaker->TabIndex = 0;
			// 
			// textBoxModel
			// 
			this->textBoxModel->Location = System::Drawing::Point(6, 19);
			this->textBoxModel->Name = L"textBoxModel";
			this->textBoxModel->Size = System::Drawing::Size(133, 20);
			this->textBoxModel->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxModel);
			this->groupBox2->Location = System::Drawing::Point(417, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(146, 48);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Модель";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBoxPower);
			this->groupBox3->Location = System::Drawing::Point(417, 67);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(146, 48);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Мощность (л. с.)";
			// 
			// textBoxPower
			// 
			this->textBoxPower->Location = System::Drawing::Point(6, 19);
			this->textBoxPower->MaxLength = 5;
			this->textBoxPower->Name = L"textBoxPower";
			this->textBoxPower->Size = System::Drawing::Size(132, 20);
			this->textBoxPower->TabIndex = 2;
			this->textBoxPower->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddEditForm::textBoxPower_KeyPress);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBoxEngineCapacity);
			this->groupBox4->Location = System::Drawing::Point(265, 67);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(146, 48);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Объём двигателя (л)";
			// 
			// textBoxEngineCapacity
			// 
			this->textBoxEngineCapacity->Location = System::Drawing::Point(6, 19);
			this->textBoxEngineCapacity->MaxLength = 5;
			this->textBoxEngineCapacity->Name = L"textBoxEngineCapacity";
			this->textBoxEngineCapacity->Size = System::Drawing::Size(132, 20);
			this->textBoxEngineCapacity->TabIndex = 3;
			this->textBoxEngineCapacity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddEditForm::textBoxEngineCapacity_KeyPress);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 211);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox1, L"Двойной щелчок для загрузки нового изображения");
			this->pictureBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddEditForm::pictureBox1_MouseDoubleClick);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBoxPrice);
			this->groupBox5->Location = System::Drawing::Point(265, 175);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(146, 48);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Цена";
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(7, 19);
			this->textBoxPrice->MaxLength = 9;
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(132, 20);
			this->textBoxPrice->TabIndex = 4;
			this->textBoxPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddEditForm::textBoxPrice_KeyPress);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->comboBoxStatus);
			this->groupBox6->Location = System::Drawing::Point(417, 175);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(146, 48);
			this->groupBox6->TabIndex = 7;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Состояние";
			// 
			// comboBoxStatus
			// 
			this->comboBoxStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"новый", L"с пробегом" });
			this->comboBoxStatus->Location = System::Drawing::Point(7, 18);
			this->comboBoxStatus->Name = L"comboBoxStatus";
			this->comboBoxStatus->Size = System::Drawing::Size(132, 21);
			this->comboBoxStatus->TabIndex = 5;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->textBoxDetails);
			this->groupBox7->Location = System::Drawing::Point(12, 229);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(551, 48);
			this->groupBox7->TabIndex = 8;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Подробное описание";
			// 
			// textBoxDetails
			// 
			this->textBoxDetails->Location = System::Drawing::Point(6, 19);
			this->textBoxDetails->Name = L"textBoxDetails";
			this->textBoxDetails->Size = System::Drawing::Size(537, 20);
			this->textBoxDetails->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 299);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"car3750001";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxYear);
			this->groupBox8->Location = System::Drawing::Point(265, 121);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(146, 48);
			this->groupBox8->TabIndex = 4;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Год выпуска";
			// 
			// textBoxYear
			// 
			this->textBoxYear->Location = System::Drawing::Point(6, 19);
			this->textBoxYear->MaxLength = 4;
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(132, 20);
			this->textBoxYear->TabIndex = 0;
			this->textBoxYear->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddEditForm::textBoxYear_KeyPress);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->textBoxMileage);
			this->groupBox9->Location = System::Drawing::Point(417, 121);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(146, 48);
			this->groupBox9->TabIndex = 5;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Пробег";
			// 
			// textBoxMileage
			// 
			this->textBoxMileage->Location = System::Drawing::Point(6, 19);
			this->textBoxMileage->MaxLength = 8;
			this->textBoxMileage->Name = L"textBoxMileage";
			this->textBoxMileage->Size = System::Drawing::Size(132, 20);
			this->textBoxMileage->TabIndex = 0;
			this->textBoxMileage->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddEditForm::textBoxMileage_KeyPress);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Фалы изображений|*.bmp; *.jpg; *.jpeg; *.gif; *.png";
			// 
			// AddEditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 342);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"AddEditForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Добавление автомобиля";
			this->Load += gcnew System::EventHandler(this, &AddEditForm::AddEditForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ path_to_exe_folder = Path::GetDirectoryName(Application::ExecutablePath);
	String^ path_from_copy_image = "";
	String^ name_image_file = "";
	String^ path_to_new_location_image = "";
	int index_edited;
	Boolean PIC = false;
	public: Boolean EDIT = false;

	public: void AddCarForEdit(int index)
	{
		String^ image_location;
		name_image_file = parentForm->Cars[index]._pic_name;
		if (File::Exists(name_image_file)) image_location = name_image_file;
		else image_location = parentForm->base_directory + parentForm->base_name + name_image_file;

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
		pictureBox1->ImageLocation = image_location;
		index_edited = index;
	}

	private: System::Void AddEditForm_Load(System::Object^  sender, System::EventArgs^  e) 
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

	private: void CopyFile(String^ path_file, String^ path_file_new, Boolean NewName) {
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

	private: System::Void pictureBox1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if (name_image_file != "") parentForm->ListFilesForDelWithSave->Add(Path::GetFileName(pictureBox1->ImageLocation));
			
			pictureBox1->ImageLocation = openFileDialog1->FileName;
			path_from_copy_image = openFileDialog1->FileName;
			name_image_file = openFileDialog1->SafeFileName;
			PIC = true;
		}
		else PIC = false;

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		path_to_new_location_image = parentForm->base_directory + parentForm->base_name + name_image_file;
		if (PIC == true) name_image_file = CopyFile(path_from_copy_image, path_to_new_location_image, true);
		if (EDIT == true)
		{
			parentForm->EditCar(index_edited, Convert::ToString(label1->Text), Convert::ToString(textBoxMaker->Text), Convert::ToString(textBoxModel->Text),
				Convert::ToString(textBoxEngineCapacity->Text), Convert::ToString(textBoxPower->Text), Convert::ToString(textBoxYear->Text),
				Convert::ToString(textBoxMileage->Text), Convert::ToString(textBoxPrice->Text), Convert::ToString(comboBoxStatus->Text),
				Convert::ToString(textBoxDetails->Text), Convert::ToString(name_image_file));
			//parentForm->ListFilesForDelWithNoSave->Add(parentForm->base_directory + parentForm->base_name + name_image_file);
		}
		else
		{
			parentForm->AddCar(Convert::ToString(label1->Text), Convert::ToString(textBoxMaker->Text), Convert::ToString(textBoxModel->Text),
				Convert::ToString(textBoxEngineCapacity->Text), Convert::ToString(textBoxPower->Text), Convert::ToString(textBoxYear->Text),
				Convert::ToString(textBoxMileage->Text), Convert::ToString(textBoxPrice->Text), Convert::ToString(comboBoxStatus->Text),
				Convert::ToString(textBoxDetails->Text), Convert::ToString(name_image_file));
			parentForm->ListFilesForDelWithNoSave->Add(name_image_file);
		}
		//parentForm->AddCarToListViewFromList();
		this->Close();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Close();
	}

	private: System::Void textBoxEngineCapacity_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if (Char::IsDigit(e->KeyChar))
			return;
		if ((e->KeyChar == (char)Keys::Back) || (e->KeyChar == (char)'.') || (e->KeyChar == (char)','))
			return;
		e->Handled = true;
	}
	private: System::Void textBoxPower_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if (Char::IsDigit(e->KeyChar))
			return;
		if (e->KeyChar == (char)Keys::Back)
			return;
		e->Handled = true;
	}
	private: System::Void textBoxPrice_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if (Char::IsDigit(e->KeyChar))
			return;
		if ((e->KeyChar == (char)Keys::Back) || (e->KeyChar == (char)'.') || (e->KeyChar == (char)','))
			return;
		e->Handled = true;
	}
	private: System::Void textBoxYear_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if (Char::IsDigit(e->KeyChar))
			return;
		if (e->KeyChar == (char)Keys::Back)
			return;
		e->Handled = true;
	}
	private: System::Void textBoxMileage_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if (Char::IsDigit(e->KeyChar))
			return;
		if (e->KeyChar == (char)Keys::Back)
			return;
		e->Handled = true;
	}

};
}
