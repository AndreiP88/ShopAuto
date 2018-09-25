#pragma once
#include "MainForm.h"

namespace ShopAuto {

	using namespace System;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ViewForm
	/// </summary>
	public ref class ViewForm : public System::Windows::Forms::Form
	{
	public:
		ViewForm(MainForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  labelStatus;
	private: System::Windows::Forms::Label^  labelPrice;
	private: System::Windows::Forms::Label^  labelMileage;
	private: System::Windows::Forms::Label^  labelYear;
	private: System::Windows::Forms::Label^  labelPower;
	private: System::Windows::Forms::Label^  labelEngineCapacity;
	private: System::Windows::Forms::Label^  labelModel;
	private: System::Windows::Forms::Label^  labelMaker;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  textBoxDetails;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelStation;
	private: System::Windows::Forms::PageSetupDialog^  pageSetupDialog1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;

	public:
	private: MainForm^ parentForm;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ViewForm()
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->labelStatus = (gcnew System::Windows::Forms::Label());
			this->labelPrice = (gcnew System::Windows::Forms::Label());
			this->labelMileage = (gcnew System::Windows::Forms::Label());
			this->labelYear = (gcnew System::Windows::Forms::Label());
			this->labelPower = (gcnew System::Windows::Forms::Label());
			this->labelEngineCapacity = (gcnew System::Windows::Forms::Label());
			this->labelModel = (gcnew System::Windows::Forms::Label());
			this->labelMaker = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDetails = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelStation = (gcnew System::Windows::Forms::Label());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox7->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(247, 211);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(346, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Марка:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(340, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Модель:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(289, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Объём двигателя:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(296, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Мощность (л. с.):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(315, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Год выпуска:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(342, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Пробег:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(353, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Цена:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(325, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Состояние:";
			// 
			// labelStatus
			// 
			this->labelStatus->AutoSize = true;
			this->labelStatus->Location = System::Drawing::Point(389, 193);
			this->labelStatus->Name = L"labelStatus";
			this->labelStatus->Size = System::Drawing::Size(37, 13);
			this->labelStatus->TabIndex = 16;
			this->labelStatus->Text = L"Status";
			// 
			// labelPrice
			// 
			this->labelPrice->AutoSize = true;
			this->labelPrice->Location = System::Drawing::Point(389, 170);
			this->labelPrice->Name = L"labelPrice";
			this->labelPrice->Size = System::Drawing::Size(31, 13);
			this->labelPrice->TabIndex = 15;
			this->labelPrice->Text = L"Price";
			// 
			// labelMileage
			// 
			this->labelMileage->AutoSize = true;
			this->labelMileage->Location = System::Drawing::Point(389, 147);
			this->labelMileage->Name = L"labelMileage";
			this->labelMileage->Size = System::Drawing::Size(44, 13);
			this->labelMileage->TabIndex = 14;
			this->labelMileage->Text = L"Mileage";
			// 
			// labelYear
			// 
			this->labelYear->AutoSize = true;
			this->labelYear->Location = System::Drawing::Point(389, 124);
			this->labelYear->Name = L"labelYear";
			this->labelYear->Size = System::Drawing::Size(29, 13);
			this->labelYear->TabIndex = 13;
			this->labelYear->Text = L"Year";
			// 
			// labelPower
			// 
			this->labelPower->AutoSize = true;
			this->labelPower->Location = System::Drawing::Point(389, 100);
			this->labelPower->Name = L"labelPower";
			this->labelPower->Size = System::Drawing::Size(37, 13);
			this->labelPower->TabIndex = 12;
			this->labelPower->Text = L"Power";
			// 
			// labelEngineCapacity
			// 
			this->labelEngineCapacity->AutoSize = true;
			this->labelEngineCapacity->Location = System::Drawing::Point(389, 74);
			this->labelEngineCapacity->Name = L"labelEngineCapacity";
			this->labelEngineCapacity->Size = System::Drawing::Size(84, 13);
			this->labelEngineCapacity->TabIndex = 11;
			this->labelEngineCapacity->Text = L"Engine Capacity";
			// 
			// labelModel
			// 
			this->labelModel->AutoSize = true;
			this->labelModel->Location = System::Drawing::Point(389, 50);
			this->labelModel->Name = L"labelModel";
			this->labelModel->Size = System::Drawing::Size(36, 13);
			this->labelModel->TabIndex = 10;
			this->labelModel->Text = L"Model";
			// 
			// labelMaker
			// 
			this->labelMaker->AutoSize = true;
			this->labelMaker->Location = System::Drawing::Point(389, 26);
			this->labelMaker->Name = L"labelMaker";
			this->labelMaker->Size = System::Drawing::Size(37, 13);
			this->labelMaker->TabIndex = 9;
			this->labelMaker->Text = L"Maker";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->textBoxDetails);
			this->groupBox7->Location = System::Drawing::Point(12, 229);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(551, 49);
			this->groupBox7->TabIndex = 17;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Подробное описание";
			// 
			// textBoxDetails
			// 
			this->textBoxDetails->Enabled = false;
			this->textBoxDetails->Location = System::Drawing::Point(6, 19);
			this->textBoxDetails->Name = L"textBoxDetails";
			this->textBoxDetails->Size = System::Drawing::Size(537, 20);
			this->textBoxDetails->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(429, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 33);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Продажа";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ViewForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelStation);
			this->groupBox1->Location = System::Drawing::Point(12, 284);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(247, 49);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Станция обслуживания";
			// 
			// labelStation
			// 
			this->labelStation->AutoSize = true;
			this->labelStation->Location = System::Drawing::Point(6, 26);
			this->labelStation->Name = L"labelStation";
			this->labelStation->Size = System::Drawing::Size(40, 13);
			this->labelStation->TabIndex = 0;
			this->labelStation->Text = L"Station";
			// 
			// pageSetupDialog1
			// 
			this->pageSetupDialog1->Document = this->printDocument1;
			// 
			// ViewForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 342);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->labelStatus);
			this->Controls->Add(this->labelPrice);
			this->Controls->Add(this->labelMileage);
			this->Controls->Add(this->labelYear);
			this->Controls->Add(this->labelPower);
			this->Controls->Add(this->labelEngineCapacity);
			this->Controls->Add(this->labelModel);
			this->Controls->Add(this->labelMaker);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"ViewForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Просмотр информации об автомобиле: ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	int index_opened_car;
	String^ ID_Car;
	String^ pic_name_Car;

	public: void AddCarForView(int index)
	{
		index_opened_car = index;
		ID_Car = parentForm->Cars[index]._id;
		pic_name_Car = parentForm->Cars[index]._pic_name;

		this->Text += parentForm->Cars[index]._id;
		labelMaker->Text = parentForm->Cars[index]._maker;
		labelModel->Text = parentForm->Cars[index]._model;
		labelEngineCapacity->Text = parentForm->Cars[index]._engine_capacity;
		labelPower->Text = parentForm->Cars[index]._power;
		labelYear->Text = parentForm->Cars[index]._year;
		labelMileage->Text = parentForm->Cars[index]._mileage;
		labelPrice->Text = parentForm->Cars[index]._price;
		labelStatus->Text = parentForm->Cars[index]._status;
		textBoxDetails->Text = parentForm->Cars[index]._details;
		labelStation->Text = parentForm->Cars[index]._station;
		pictureBox1->ImageLocation = parentForm->base_directory + "\\" + parentForm->base_name + "\\" + parentForm->Cars[index]._pic_name;
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		pageSetupDialog1->ShowDialog();
		parentForm->EditCar(index_opened_car, Convert::ToString(ID_Car), Convert::ToString(labelMaker->Text), Convert::ToString(labelModel->Text),
			Convert::ToString(labelEngineCapacity->Text), Convert::ToString(labelPower->Text), Convert::ToString(labelYear->Text),
			Convert::ToString(labelMileage->Text), Convert::ToString(labelPrice->Text), Convert::ToString("Продано"),
			Convert::ToString(textBoxDetails->Text), Convert::ToString(pic_name_Car), Convert::ToString(labelStation->Text));

		this->Close();

	}

	void document_PrintPage( Object^ /*sender*/, System::Drawing::Printing::PrintPageEventArgs^ e )
	{
	   // Insert code to render the page here.
	   // This code will be called when the control is drawn.
	   // The following code will render a simple
	   // message on the printed document.
	   String^ text = "In document_PrintPage method.";
	   System::Drawing::Font^ printFont = gcnew System::Drawing::Font( "Arial",35,System::Drawing::FontStyle::Regular );

	   // Draw the content.
	   e->Graphics->DrawString( text, printFont, System::Drawing::Brushes::Black, 10, 10 );
	}


};
}
