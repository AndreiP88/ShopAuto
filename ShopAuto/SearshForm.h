#pragma once
#include "MainForm.h"

namespace ShopAuto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SearshForm
	/// </summary>
	public ref class SearshForm : public System::Windows::Forms::Form
	{
	public:
		SearshForm(MainForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::GroupBox^  groupBox9;
	public:
	private: System::Windows::Forms::CheckBox^  checkBoxMiliage;


	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::CheckBox^  checkBoxYear;



	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::CheckBox^  checkBoxPrice;


	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::CheckBox^  checkBoxEngineCapacity;


	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::CheckBox^  checkBoxPower;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  checkBoxModel;
	private: System::Windows::Forms::TextBox^  textBoxModel;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBoxMaker;
	private: System::Windows::Forms::TextBox^  textBoxMaker;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  textBoxEngineCapacityMax;
	private: System::Windows::Forms::NumericUpDown^  textBoxEngineCapacityMin;
	private: System::Windows::Forms::NumericUpDown^  textBoxPowerMax;
	private: System::Windows::Forms::NumericUpDown^  textBoxPowerMin;
	private: System::Windows::Forms::NumericUpDown^  textBoxMileageMax;
	private: System::Windows::Forms::NumericUpDown^  textBoxMileageMin;
	private: System::Windows::Forms::NumericUpDown^  textBoxYearMax;

	private: System::Windows::Forms::NumericUpDown^  textBoxYearMin;
	private: System::Windows::Forms::NumericUpDown^  textBoxPriceMax;
	private: System::Windows::Forms::NumericUpDown^  textBoxPriceMin;

	public:
	private: MainForm^ parentForm;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SearshForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMileageMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxMileageMin = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBoxMiliage = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxYearMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxYearMin = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBoxYear = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPriceMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxPriceMin = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBoxPrice = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxEngineCapacityMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxEngineCapacityMin = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBoxEngineCapacity = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxPowerMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxPowerMin = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBoxPower = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxModel = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxModel = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxMaker = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxMaker = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxMileageMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxMileageMin))->BeginInit();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxYearMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxYearMin))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPriceMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPriceMin))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxEngineCapacityMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxEngineCapacityMin))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPowerMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPowerMin))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->textBoxMileageMax);
			this->groupBox9->Controls->Add(this->textBoxMileageMin);
			this->groupBox9->Controls->Add(this->checkBoxMiliage);
			this->groupBox9->Location = System::Drawing::Point(164, 66);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(146, 48);
			this->groupBox9->TabIndex = 13;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"     Пробег";
			// 
			// textBoxMileageMax
			// 
			this->textBoxMileageMax->Enabled = false;
			this->textBoxMileageMax->Location = System::Drawing::Point(79, 20);
			this->textBoxMileageMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->textBoxMileageMax->Name = L"textBoxMileageMax";
			this->textBoxMileageMax->Size = System::Drawing::Size(60, 20);
			this->textBoxMileageMax->TabIndex = 4;
			this->textBoxMileageMax->ThousandsSeparator = true;
			// 
			// textBoxMileageMin
			// 
			this->textBoxMileageMin->Enabled = false;
			this->textBoxMileageMin->Location = System::Drawing::Point(7, 20);
			this->textBoxMileageMin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999999, 0, 0, 0 });
			this->textBoxMileageMin->Name = L"textBoxMileageMin";
			this->textBoxMileageMin->Size = System::Drawing::Size(60, 20);
			this->textBoxMileageMin->TabIndex = 3;
			this->textBoxMileageMin->ThousandsSeparator = true;
			// 
			// checkBoxMiliage
			// 
			this->checkBoxMiliage->AutoSize = true;
			this->checkBoxMiliage->Location = System::Drawing::Point(6, 0);
			this->checkBoxMiliage->Name = L"checkBoxMiliage";
			this->checkBoxMiliage->Size = System::Drawing::Size(15, 14);
			this->checkBoxMiliage->TabIndex = 2;
			this->checkBoxMiliage->UseVisualStyleBackColor = true;
			this->checkBoxMiliage->CheckedChanged += gcnew System::EventHandler(this, &SearshForm::checkBoxMiliage_CheckedChanged);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->textBoxYearMax);
			this->groupBox8->Controls->Add(this->textBoxYearMin);
			this->groupBox8->Controls->Add(this->checkBoxYear);
			this->groupBox8->Location = System::Drawing::Point(12, 66);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(146, 48);
			this->groupBox8->TabIndex = 12;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"     Год выпуска";
			// 
			// textBoxYearMax
			// 
			this->textBoxYearMax->Enabled = false;
			this->textBoxYearMax->Location = System::Drawing::Point(79, 20);
			this->textBoxYearMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->textBoxYearMax->Name = L"textBoxYearMax";
			this->textBoxYearMax->Size = System::Drawing::Size(60, 20);
			this->textBoxYearMax->TabIndex = 4;
			// 
			// textBoxYearMin
			// 
			this->textBoxYearMin->Enabled = false;
			this->textBoxYearMin->Location = System::Drawing::Point(7, 20);
			this->textBoxYearMin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->textBoxYearMin->Name = L"textBoxYearMin";
			this->textBoxYearMin->Size = System::Drawing::Size(60, 20);
			this->textBoxYearMin->TabIndex = 3;
			// 
			// checkBoxYear
			// 
			this->checkBoxYear->AutoSize = true;
			this->checkBoxYear->Location = System::Drawing::Point(6, 0);
			this->checkBoxYear->Name = L"checkBoxYear";
			this->checkBoxYear->Size = System::Drawing::Size(15, 14);
			this->checkBoxYear->TabIndex = 2;
			this->checkBoxYear->UseVisualStyleBackColor = true;
			this->checkBoxYear->CheckedChanged += gcnew System::EventHandler(this, &SearshForm::checkBoxYear_CheckedChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBoxPriceMax);
			this->groupBox5->Controls->Add(this->textBoxPriceMin);
			this->groupBox5->Controls->Add(this->checkBoxPrice);
			this->groupBox5->Location = System::Drawing::Point(316, 66);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(146, 48);
			this->groupBox5->TabIndex = 14;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"     Цена";
			// 
			// textBoxPriceMax
			// 
			this->textBoxPriceMax->DecimalPlaces = 2;
			this->textBoxPriceMax->Enabled = false;
			this->textBoxPriceMax->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->textBoxPriceMax->Location = System::Drawing::Point(79, 20);
			this->textBoxPriceMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->textBoxPriceMax->Name = L"textBoxPriceMax";
			this->textBoxPriceMax->Size = System::Drawing::Size(60, 20);
			this->textBoxPriceMax->TabIndex = 8;
			this->textBoxPriceMax->ThousandsSeparator = true;
			// 
			// textBoxPriceMin
			// 
			this->textBoxPriceMin->DecimalPlaces = 2;
			this->textBoxPriceMin->Enabled = false;
			this->textBoxPriceMin->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->textBoxPriceMin->Location = System::Drawing::Point(7, 20);
			this->textBoxPriceMin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->textBoxPriceMin->Name = L"textBoxPriceMin";
			this->textBoxPriceMin->Size = System::Drawing::Size(60, 20);
			this->textBoxPriceMin->TabIndex = 7;
			this->textBoxPriceMin->ThousandsSeparator = true;
			// 
			// checkBoxPrice
			// 
			this->checkBoxPrice->AutoSize = true;
			this->checkBoxPrice->Location = System::Drawing::Point(7, 0);
			this->checkBoxPrice->Name = L"checkBoxPrice";
			this->checkBoxPrice->Size = System::Drawing::Size(15, 14);
			this->checkBoxPrice->TabIndex = 6;
			this->checkBoxPrice->UseVisualStyleBackColor = true;
			this->checkBoxPrice->CheckedChanged += gcnew System::EventHandler(this, &SearshForm::checkBoxPrice_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBoxEngineCapacityMax);
			this->groupBox4->Controls->Add(this->textBoxEngineCapacityMin);
			this->groupBox4->Controls->Add(this->checkBoxEngineCapacity);
			this->groupBox4->Location = System::Drawing::Point(316, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(146, 48);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"     Объём двигателя (л)";
			// 
			// textBoxEngineCapacityMax
			// 
			this->textBoxEngineCapacityMax->DecimalPlaces = 1;
			this->textBoxEngineCapacityMax->Enabled = false;
			this->textBoxEngineCapacityMax->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->textBoxEngineCapacityMax->Location = System::Drawing::Point(79, 20);
			this->textBoxEngineCapacityMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->textBoxEngineCapacityMax->Name = L"textBoxEngineCapacityMax";
			this->textBoxEngineCapacityMax->Size = System::Drawing::Size(60, 20);
			this->textBoxEngineCapacityMax->TabIndex = 7;
			// 
			// textBoxEngineCapacityMin
			// 
			this->textBoxEngineCapacityMin->DecimalPlaces = 1;
			this->textBoxEngineCapacityMin->Enabled = false;
			this->textBoxEngineCapacityMin->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->textBoxEngineCapacityMin->Location = System::Drawing::Point(7, 20);
			this->textBoxEngineCapacityMin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->textBoxEngineCapacityMin->Name = L"textBoxEngineCapacityMin";
			this->textBoxEngineCapacityMin->Size = System::Drawing::Size(60, 20);
			this->textBoxEngineCapacityMin->TabIndex = 6;
			// 
			// checkBoxEngineCapacity
			// 
			this->checkBoxEngineCapacity->AutoSize = true;
			this->checkBoxEngineCapacity->Location = System::Drawing::Point(7, 0);
			this->checkBoxEngineCapacity->Name = L"checkBoxEngineCapacity";
			this->checkBoxEngineCapacity->Size = System::Drawing::Size(15, 14);
			this->checkBoxEngineCapacity->TabIndex = 5;
			this->checkBoxEngineCapacity->UseVisualStyleBackColor = true;
			this->checkBoxEngineCapacity->CheckedChanged += gcnew System::EventHandler(this, &SearshForm::checkBoxEngineCapacity_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBoxPowerMax);
			this->groupBox3->Controls->Add(this->textBoxPowerMin);
			this->groupBox3->Controls->Add(this->checkBoxPower);
			this->groupBox3->Location = System::Drawing::Point(468, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(146, 48);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"     Мощность (л. с.)";
			// 
			// textBoxPowerMax
			// 
			this->textBoxPowerMax->Enabled = false;
			this->textBoxPowerMax->Location = System::Drawing::Point(79, 20);
			this->textBoxPowerMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->textBoxPowerMax->Name = L"textBoxPowerMax";
			this->textBoxPowerMax->Size = System::Drawing::Size(60, 20);
			this->textBoxPowerMax->TabIndex = 6;
			this->textBoxPowerMax->ThousandsSeparator = true;
			// 
			// textBoxPowerMin
			// 
			this->textBoxPowerMin->Enabled = false;
			this->textBoxPowerMin->Location = System::Drawing::Point(7, 20);
			this->textBoxPowerMin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->textBoxPowerMin->Name = L"textBoxPowerMin";
			this->textBoxPowerMin->Size = System::Drawing::Size(60, 20);
			this->textBoxPowerMin->TabIndex = 5;
			this->textBoxPowerMin->ThousandsSeparator = true;
			// 
			// checkBoxPower
			// 
			this->checkBoxPower->AutoSize = true;
			this->checkBoxPower->Location = System::Drawing::Point(6, 0);
			this->checkBoxPower->Name = L"checkBoxPower";
			this->checkBoxPower->Size = System::Drawing::Size(15, 14);
			this->checkBoxPower->TabIndex = 4;
			this->checkBoxPower->UseVisualStyleBackColor = true;
			this->checkBoxPower->CheckedChanged += gcnew System::EventHandler(this, &SearshForm::checkBoxPower_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBoxModel);
			this->groupBox2->Controls->Add(this->textBoxModel);
			this->groupBox2->Location = System::Drawing::Point(164, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(146, 48);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"     Модель";
			// 
			// checkBoxModel
			// 
			this->checkBoxModel->AutoSize = true;
			this->checkBoxModel->Location = System::Drawing::Point(6, 0);
			this->checkBoxModel->Name = L"checkBoxModel";
			this->checkBoxModel->Size = System::Drawing::Size(15, 14);
			this->checkBoxModel->TabIndex = 2;
			this->checkBoxModel->UseVisualStyleBackColor = true;
			this->checkBoxModel->CheckedChanged += gcnew System::EventHandler(this, &SearshForm::checkBoxModel_CheckedChanged);
			// 
			// textBoxModel
			// 
			this->textBoxModel->Enabled = false;
			this->textBoxModel->Location = System::Drawing::Point(6, 19);
			this->textBoxModel->Name = L"textBoxModel";
			this->textBoxModel->Size = System::Drawing::Size(133, 20);
			this->textBoxModel->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBoxMaker);
			this->groupBox1->Controls->Add(this->textBoxMaker);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(146, 48);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"     Марка";
			// 
			// checkBoxMaker
			// 
			this->checkBoxMaker->AutoSize = true;
			this->checkBoxMaker->Location = System::Drawing::Point(6, 0);
			this->checkBoxMaker->Name = L"checkBoxMaker";
			this->checkBoxMaker->Size = System::Drawing::Size(15, 14);
			this->checkBoxMaker->TabIndex = 1;
			this->checkBoxMaker->UseVisualStyleBackColor = true;
			this->checkBoxMaker->CheckedChanged += gcnew System::EventHandler(this, &SearshForm::checkBoxMaker_CheckedChanged);
			// 
			// textBoxMaker
			// 
			this->textBoxMaker->Enabled = false;
			this->textBoxMaker->Location = System::Drawing::Point(6, 19);
			this->textBoxMaker->Name = L"textBoxMaker";
			this->textBoxMaker->Size = System::Drawing::Size(133, 20);
			this->textBoxMaker->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(340, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 36);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearshForm::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(495, 128);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 36);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// SearshForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 176);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"SearshForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Поиск";
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxMileageMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxMileageMin))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxYearMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxYearMin))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPriceMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPriceMin))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxEngineCapacityMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxEngineCapacityMin))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPowerMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->textBoxPowerMin))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



		Void checkBoxMaker_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e);

		Void checkBoxModel_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e);

		Void checkBoxEngineCapacity_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e);

		Void checkBoxPower_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e);

		Void checkBoxYear_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e);

		Void checkBoxMiliage_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e);

		Void checkBoxPrice_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e);

		Void button1_Click(System::Object ^ sender, System::EventArgs ^ e);

		public: void LoadPreviousSearshParameters();

};
}
