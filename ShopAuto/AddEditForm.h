#pragma once

//#include <windows.h>
//#include "MainForm.h"

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







	private: System::Windows::Forms::GroupBox^  groupBox5;


	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::ComboBox^  comboBoxStatus;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  textBoxDetails;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox8;



	private: System::Windows::Forms::GroupBox^  groupBox9;


	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::NumericUpDown^  textBoxEngineCapacity;
	private: System::Windows::Forms::NumericUpDown^  textBoxPower;
	private: System::Windows::Forms::NumericUpDown^  textBoxPrice;

	private: System::Windows::Forms::NumericUpDown^  textBoxYear;
	private: System::Windows::Forms::NumericUpDown^  textBoxMileage;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::ComboBox^  comboBoxStations;






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
			this->textBoxPower = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxEngineCapacity = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxStatus = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDetails = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxYear = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMileage = (gcnew System::Windows::Forms::NumericUpDown());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxStations = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPower))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxEngineCapacity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPrice))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxYear))->BeginInit();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxMileage))->BeginInit();
			this->groupBox10->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddEditForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(441, 290);
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
			this->textBoxPower->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->textBoxPower->Name = L"textBoxPower";
			this->textBoxPower->Size = System::Drawing::Size(132, 20);
			this->textBoxPower->TabIndex = 12;
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
			this->textBoxEngineCapacity->DecimalPlaces = 1;
			this->textBoxEngineCapacity->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->textBoxEngineCapacity->Location = System::Drawing::Point(7, 19);
			this->textBoxEngineCapacity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->textBoxEngineCapacity->Name = L"textBoxEngineCapacity";
			this->textBoxEngineCapacity->Size = System::Drawing::Size(132, 20);
			this->textBoxEngineCapacity->TabIndex = 11;
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
			this->textBoxPrice->DecimalPlaces = 2;
			this->textBoxPrice->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->textBoxPrice->Location = System::Drawing::Point(7, 19);
			this->textBoxPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(132, 20);
			this->textBoxPrice->TabIndex = 13;
			this->textBoxPrice->ThousandsSeparator = true;
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
			this->comboBoxStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxStatus->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->comboBoxStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"В продаже", L"Продано" });
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
			this->label1->Size = System::Drawing::Size(0, 24);
			this->label1->TabIndex = 10;
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
			this->textBoxYear->Location = System::Drawing::Point(6, 20);
			this->textBoxYear->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(133, 20);
			this->textBoxYear->TabIndex = 13;
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
			this->textBoxMileage->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->textBoxMileage->Name = L"textBoxMileage";
			this->textBoxMileage->Size = System::Drawing::Size(132, 20);
			this->textBoxMileage->TabIndex = 13;
			this->textBoxMileage->ThousandsSeparator = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Фалы изображений|*.bmp; *.jpg; *.jpeg; *.gif; *.png";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->comboBoxStations);
			this->groupBox10->Location = System::Drawing::Point(12, 283);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(247, 47);
			this->groupBox10->TabIndex = 11;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Станция обслуживания";
			// 
			// comboBoxStations
			// 
			this->comboBoxStations->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxStations->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->comboBoxStations->Location = System::Drawing::Point(8, 16);
			this->comboBoxStations->Name = L"comboBoxStations";
			this->comboBoxStations->Size = System::Drawing::Size(233, 21);
			this->comboBoxStations->TabIndex = 6;
			// 
			// AddEditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 342);
			this->Controls->Add(this->groupBox10);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPower))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxEngineCapacity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPrice))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxYear))->EndInit();
			this->groupBox9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxMileage))->EndInit();
			this->groupBox10->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//String^ path_to_exe_folder = Path::GetDirectoryName(Application::ExecutablePath);
		String^ path_from_copy_image = "";
		String^ name_image_file = "";
		String^ path_to_new_location_image = "";
		int index_edited;
		Boolean PIC = false;
public: Boolean EDIT = false;
	

		Void button2_Click(System::Object ^ sender, System::EventArgs ^ e);

		Void AddEditForm_Load(System::Object ^ sender, System::EventArgs ^ e);

		void AddCarForEdit(int index);

		void LoadStations();

		Void pictureBox1_MouseDoubleClick(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e);

		Void button1_Click(System::Object ^ sender, System::EventArgs ^ e);

};
}
