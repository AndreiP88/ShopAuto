#pragma once
#include "MainForm.h"

namespace ShopAuto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для STOForm
	/// </summary>
	public ref class STOForm : public System::Windows::Forms::Form
	{
	public:
		STOForm(MainForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::ListView^  listViewSTO;
	public:

	public:
	private: System::Windows::Forms::ColumnHeader^  columnName;
	private: System::Windows::Forms::ColumnHeader^  columnAddress;

	private: System::Windows::Forms::ColumnHeader^  columnPhones;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxPhones;

	private: System::Windows::Forms::TextBox^  textBoxAddress;

	private: System::Windows::Forms::TextBox^  textBoxName;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  редактироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItem;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button2;

	public:










	private: MainForm^ parentForm;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~STOForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(STOForm::typeid));
			this->listViewSTO = (gcnew System::Windows::Forms::ListView());
			this->columnName = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnAddress = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnPhones = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->редактироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxPhones = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->contextMenuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listViewSTO
			// 
			this->listViewSTO->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listViewSTO->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnName, this->columnAddress,
					this->columnPhones
			});
			this->listViewSTO->ContextMenuStrip = this->contextMenuStrip1;
			this->listViewSTO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listViewSTO->FullRowSelect = true;
			this->listViewSTO->GridLines = true;
			this->listViewSTO->ImeMode = System::Windows::Forms::ImeMode::On;
			this->listViewSTO->Location = System::Drawing::Point(0, 47);
			this->listViewSTO->MultiSelect = false;
			this->listViewSTO->Name = L"listViewSTO";
			this->listViewSTO->ShowItemToolTips = true;
			this->listViewSTO->Size = System::Drawing::Size(841, 286);
			this->listViewSTO->TabIndex = 1;
			this->listViewSTO->UseCompatibleStateImageBehavior = false;
			this->listViewSTO->View = System::Windows::Forms::View::Details;
			this->listViewSTO->DoubleClick += gcnew System::EventHandler(this, &STOForm::listViewSTO_DoubleClick);
			// 
			// columnName
			// 
			this->columnName->Text = L"Название";
			this->columnName->Width = 181;
			// 
			// columnAddress
			// 
			this->columnAddress->Text = L"Адрес";
			this->columnAddress->Width = 387;
			// 
			// columnPhones
			// 
			this->columnPhones->Text = L"Телефоны";
			this->columnPhones->Width = 239;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->редактироватьToolStripMenuItem,
					this->удалитьToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(155, 48);
			// 
			// редактироватьToolStripMenuItem
			// 
			this->редактироватьToolStripMenuItem->Name = L"редактироватьToolStripMenuItem";
			this->редактироватьToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->редактироватьToolStripMenuItem->Text = L"Редактировать";
			this->редактироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &STOForm::редактироватьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &STOForm::удалитьToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBoxPhones);
			this->panel1->Controls->Add(this->textBoxAddress);
			this->panel1->Controls->Add(this->textBoxName);
			this->panel1->Location = System::Drawing::Point(1, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(841, 42);
			this->panel1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->ImageIndex = 2;
			this->button2->ImageList = this->imageList1;
			this->button2->Location = System::Drawing::Point(818, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(20, 20);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &STOForm::button2_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"action_add.png");
			this->imageList1->Images->SetKeyName(1, L"action_check.png");
			this->imageList1->Images->SetKeyName(2, L"action_delete.png");
			// 
			// button1
			// 
			this->button1->ImageIndex = 0;
			this->button1->ImageList = this->imageList1;
			this->button1->Location = System::Drawing::Point(791, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 20);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &STOForm::button1_Click);
			// 
			// textBoxPhones
			// 
			this->textBoxPhones->Location = System::Drawing::Point(549, 10);
			this->textBoxPhones->Name = L"textBoxPhones";
			this->textBoxPhones->Size = System::Drawing::Size(236, 20);
			this->textBoxPhones->TabIndex = 2;
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Location = System::Drawing::Point(172, 10);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(371, 20);
			this->textBoxAddress->TabIndex = 1;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(3, 10);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(163, 20);
			this->textBoxName->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &STOForm::timer1_Tick);
			// 
			// STOForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(842, 334);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listViewSTO);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"STOForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"База СТО";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &STOForm::STOForm_FormClosing);
			this->contextMenuStrip1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		Void STOForm_FormClosing(System::Object ^ sender, System::Windows::Forms::FormClosingEventArgs ^ e);

		Void timer1_Tick(System::Object ^ sender, System::EventArgs ^ e);

		Void редактироватьToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e);

		Void удалитьToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e);

		Void button1_Click(System::Object ^ sender, System::EventArgs ^ e);

		Void button2_Click(System::Object ^ sender, System::EventArgs ^ e);

		Void listViewSTO_DoubleClick(System::Object ^ sender, System::EventArgs ^ e);

		public: void LoadStationsToListView();

		void LoadStationsFromListViewForChange(int index);

		void DeleteSelectedItem();

};
}
