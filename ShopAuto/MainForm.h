#pragma once
//#include <list>
#include "Functions.h"

namespace ShopAuto {

	using namespace System;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  CarMaker;

	private: System::Windows::Forms::ColumnHeader^  CarModel;
	private: System::Windows::Forms::ColumnHeader^  CarEngineCapacity;

	private: System::Windows::Forms::ColumnHeader^  CarPower;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  создатьToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитКакToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  закрытьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  выйтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  правкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  добавитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  изменитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  базаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  поискToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  фильтрацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;

	private: System::Windows::Forms::ColumnHeader^  CarPrice;
	private: System::Windows::Forms::ColumnHeader^  CarDetails;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ColumnHeader^  id;

	private: System::Windows::Forms::ToolStripMenuItem^  обновитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вПродажеToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ПроданоToolStripMenuItem;


	private: System::Windows::Forms::ColumnHeader^  CarStatus;
	private: System::Windows::Forms::ColumnHeader^  CarYear;
	private: System::Windows::Forms::ColumnHeader^  CarMileage;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  изменитьToolStripMenuItemContext;

	private: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItemContext;


	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonNewBase;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonOpenBase;
	private: System::Windows::Forms::ToolStripMenuItem^  добавитьToolStripMenuItemContext;



	private: System::Windows::Forms::ToolStripButton^  toolStripButtonSaveBase;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonSaveAsBase;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonCloseBase;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonAddToBase;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonEditSelectedItem;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonDeleteSelectedItem;




	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonFind;

	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
private: System::Windows::Forms::ToolStripMenuItem^  базаСТОToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  безСортировкиToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->id = (gcnew System::Windows::Forms::ColumnHeader());
			this->CarMaker = (gcnew System::Windows::Forms::ColumnHeader());
			this->CarModel = (gcnew System::Windows::Forms::ColumnHeader());
			this->CarEngineCapacity = (gcnew System::Windows::Forms::ColumnHeader());
			this->CarPower = (gcnew System::Windows::Forms::ColumnHeader());
			this->CarYear = (gcnew System::Windows::Forms::ColumnHeader());
			this->CarMileage = (gcnew System::Windows::Forms::ColumnHeader());
			this->CarPrice = (gcnew System::Windows::Forms::ColumnHeader());
			this->CarStatus = (gcnew System::Windows::Forms::ColumnHeader());
			this->CarDetails = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->добавитьToolStripMenuItemContext = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьToolStripMenuItemContext = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItemContext = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закрытьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->правкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->базаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->базаСТОToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поискToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->безСортировкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фильтрацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вПродажеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ПроданоToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButtonNewBase = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonOpenBase = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonSaveBase = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonSaveAsBase = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonCloseBase = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButtonAddToBase = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonEditSelectedItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonDeleteSelectedItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButtonFind = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->contextMenuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(10) {
				this->id, this->CarMaker,
					this->CarModel, this->CarEngineCapacity, this->CarPower, this->CarYear, this->CarMileage, this->CarPrice, this->CarStatus, this->CarDetails
			});
			this->listView1->ContextMenuStrip = this->contextMenuStrip1;
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->listView1->Location = System::Drawing::Point(0, 58);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->ShowItemToolTips = true;
			this->listView1->Size = System::Drawing::Size(1178, 424);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &MainForm::listView1_ColumnClick);
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &MainForm::listView1_DoubleClick);
			// 
			// id
			// 
			this->id->Text = L"id";
			this->id->Width = 91;
			// 
			// CarMaker
			// 
			this->CarMaker->Text = L"Марка";
			this->CarMaker->Width = 104;
			// 
			// CarModel
			// 
			this->CarModel->Text = L"Модель";
			this->CarModel->Width = 85;
			// 
			// CarEngineCapacity
			// 
			this->CarEngineCapacity->Text = L"Объём (л)";
			this->CarEngineCapacity->Width = 91;
			// 
			// CarPower
			// 
			this->CarPower->Text = L"Мощность (л/с)";
			this->CarPower->Width = 127;
			// 
			// CarYear
			// 
			this->CarYear->Text = L"Год выпуска";
			this->CarYear->Width = 113;
			// 
			// CarMileage
			// 
			this->CarMileage->Text = L"Пробег";
			this->CarMileage->Width = 78;
			// 
			// CarPrice
			// 
			this->CarPrice->Text = L"Цена";
			this->CarPrice->Width = 72;
			// 
			// CarStatus
			// 
			this->CarStatus->Text = L"Состояние";
			this->CarStatus->Width = 100;
			// 
			// CarDetails
			// 
			this->CarDetails->Text = L"Подробное описание";
			this->CarDetails->Width = 296;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->добавитьToolStripMenuItemContext,
					this->изменитьToolStripMenuItemContext, this->удалитьToolStripMenuItemContext
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(129, 70);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::contextMenuStrip1_Opening);
			// 
			// добавитьToolStripMenuItemContext
			// 
			this->добавитьToolStripMenuItemContext->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"добавитьToolStripMenuItemContext.Image")));
			this->добавитьToolStripMenuItemContext->Name = L"добавитьToolStripMenuItemContext";
			this->добавитьToolStripMenuItemContext->Size = System::Drawing::Size(128, 22);
			this->добавитьToolStripMenuItemContext->Text = L"Добавить";
			this->добавитьToolStripMenuItemContext->Click += gcnew System::EventHandler(this, &MainForm::добавитьToolStripMenuItemContext_Click);
			// 
			// изменитьToolStripMenuItemContext
			// 
			this->изменитьToolStripMenuItemContext->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"изменитьToolStripMenuItemContext.Image")));
			this->изменитьToolStripMenuItemContext->Name = L"изменитьToolStripMenuItemContext";
			this->изменитьToolStripMenuItemContext->Size = System::Drawing::Size(128, 22);
			this->изменитьToolStripMenuItemContext->Text = L"Изменить";
			this->изменитьToolStripMenuItemContext->Click += gcnew System::EventHandler(this, &MainForm::изменитьToolStripMenuItemContext_Click);
			// 
			// удалитьToolStripMenuItemContext
			// 
			this->удалитьToolStripMenuItemContext->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"удалитьToolStripMenuItemContext.Image")));
			this->удалитьToolStripMenuItemContext->Name = L"удалитьToolStripMenuItemContext";
			this->удалитьToolStripMenuItemContext->Size = System::Drawing::Size(128, 22);
			this->удалитьToolStripMenuItemContext->Text = L"Удалить";
			this->удалитьToolStripMenuItemContext->Click += gcnew System::EventHandler(this, &MainForm::удалитьToolStripMenuItemContext_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 485);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1178, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(188, 17);
			this->toolStripStatusLabel1->Text = L"Просмотр списка автомобилей: ";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(0, 17);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->файлToolStripMenuItem,
					this->правкаToolStripMenuItem, this->базаToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1178, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Click += gcnew System::EventHandler(this, &MainForm::menuStrip1_Click);
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->создатьToolStripMenuItem,
					this->открытьToolStripMenuItem, this->сохранитьToolStripMenuItem, this->сохранитКакToolStripMenuItem, this->закрытьToolStripMenuItem1,
					this->выйтиToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"создатьToolStripMenuItem.Image")));
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->создатьToolStripMenuItem->Text = L"Создать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::создатьToolStripMenuItem_Click);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"открытьToolStripMenuItem.Image")));
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Enabled = false;
			this->сохранитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"сохранитьToolStripMenuItem.Image")));
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::сохранитьToolStripMenuItem_Click);
			// 
			// сохранитКакToolStripMenuItem
			// 
			this->сохранитКакToolStripMenuItem->Enabled = false;
			this->сохранитКакToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"сохранитКакToolStripMenuItem.Image")));
			this->сохранитКакToolStripMenuItem->Name = L"сохранитКакToolStripMenuItem";
			this->сохранитКакToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->сохранитКакToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->сохранитКакToolStripMenuItem->Text = L"Сохранить как";
			this->сохранитКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// закрытьToolStripMenuItem1
			// 
			this->закрытьToolStripMenuItem1->Enabled = false;
			this->закрытьToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"закрытьToolStripMenuItem1.Image")));
			this->закрытьToolStripMenuItem1->Name = L"закрытьToolStripMenuItem1";
			this->закрытьToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->закрытьToolStripMenuItem1->Size = System::Drawing::Size(225, 22);
			this->закрытьToolStripMenuItem1->Text = L"Закрыть базу";
			this->закрытьToolStripMenuItem1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->закрытьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::закрытьToolStripMenuItem1_Click);
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"выйтиToolStripMenuItem.Image")));
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выйтиToolStripMenuItem_Click);
			// 
			// правкаToolStripMenuItem
			// 
			this->правкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->добавитьToolStripMenuItem,
					this->изменитьToolStripMenuItem, this->удалитьToolStripMenuItem
			});
			this->правкаToolStripMenuItem->Name = L"правкаToolStripMenuItem";
			this->правкаToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->правкаToolStripMenuItem->Text = L"Правка";
			// 
			// добавитьToolStripMenuItem
			// 
			this->добавитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"добавитьToolStripMenuItem.Image")));
			this->добавитьToolStripMenuItem->Name = L"добавитьToolStripMenuItem";
			this->добавитьToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->добавитьToolStripMenuItem->Text = L"Добавить";
			this->добавитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::добавитьToolStripMenuItem_Click);
			// 
			// изменитьToolStripMenuItem
			// 
			this->изменитьToolStripMenuItem->Enabled = false;
			this->изменитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"изменитьToolStripMenuItem.Image")));
			this->изменитьToolStripMenuItem->Name = L"изменитьToolStripMenuItem";
			this->изменитьToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->изменитьToolStripMenuItem->Text = L"Изменить";
			this->изменитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::изменитьToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Enabled = false;
			this->удалитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"удалитьToolStripMenuItem.Image")));
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::удалитьToolStripMenuItem_Click);
			// 
			// базаToolStripMenuItem
			// 
			this->базаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->базаСТОToolStripMenuItem,
					this->поискToolStripMenuItem, this->обновитьToolStripMenuItem, this->безСортировкиToolStripMenuItem, this->фильтрацияToolStripMenuItem
			});
			this->базаToolStripMenuItem->Name = L"базаToolStripMenuItem";
			this->базаToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->базаToolStripMenuItem->Text = L"База";
			// 
			// базаСТОToolStripMenuItem
			// 
			this->базаСТОToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"базаСТОToolStripMenuItem.Image")));
			this->базаСТОToolStripMenuItem->Name = L"базаСТОToolStripMenuItem";
			this->базаСТОToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->базаСТОToolStripMenuItem->Text = L"База СТО";
			this->базаСТОToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::базаСТОToolStripMenuItem_Click);
			// 
			// поискToolStripMenuItem
			// 
			this->поискToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"поискToolStripMenuItem.Image")));
			this->поискToolStripMenuItem->Name = L"поискToolStripMenuItem";
			this->поискToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->поискToolStripMenuItem->Text = L"Поиск";
			this->поискToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::поискToolStripMenuItem_Click);
			// 
			// обновитьToolStripMenuItem
			// 
			this->обновитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"обновитьToolStripMenuItem.Image")));
			this->обновитьToolStripMenuItem->Name = L"обновитьToolStripMenuItem";
			this->обновитьToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->обновитьToolStripMenuItem->Text = L"Очистить";
			this->обновитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::обновитьToolStripMenuItem_Click);
			// 
			// безСортировкиToolStripMenuItem
			// 
			this->безСортировкиToolStripMenuItem->Name = L"безСортировкиToolStripMenuItem";
			this->безСортировкиToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->безСортировкиToolStripMenuItem->Text = L"Без сортировки";
			this->безСортировкиToolStripMenuItem->Visible = false;
			this->безСортировкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::безСортировкиToolStripMenuItem_Click);
			// 
			// фильтрацияToolStripMenuItem
			// 
			this->фильтрацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вПродажеToolStripMenuItem,
					this->ПроданоToolStripMenuItem
			});
			this->фильтрацияToolStripMenuItem->Name = L"фильтрацияToolStripMenuItem";
			this->фильтрацияToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->фильтрацияToolStripMenuItem->Text = L"Фильтр";
			// 
			// вПродажеToolStripMenuItem
			// 
			this->вПродажеToolStripMenuItem->Checked = true;
			this->вПродажеToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->вПродажеToolStripMenuItem->Name = L"вПродажеToolStripMenuItem";
			this->вПродажеToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->вПродажеToolStripMenuItem->Text = L"В продаже";
			this->вПродажеToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &MainForm::вПродажеToolStripMenuItem_CheckedChanged);
			this->вПродажеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::вПродажеToolStripMenuItem_Click);
			// 
			// ПроданоToolStripMenuItem
			// 
			this->ПроданоToolStripMenuItem->Checked = true;
			this->ПроданоToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ПроданоToolStripMenuItem->Name = L"ПроданоToolStripMenuItem";
			this->ПроданоToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->ПроданоToolStripMenuItem->Text = L"Продано";
			this->ПроданоToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &MainForm::ПроданоToolStripMenuItem_CheckedChanged);
			this->ПроданоToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ПроданоToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"оПрограммеToolStripMenuItem.Image")));
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::оПрограммеToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Файл базы|*.carbase";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Файл базы|*.carbase";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->toolStripButtonNewBase,
					this->toolStripButtonOpenBase, this->toolStripButtonSaveBase, this->toolStripButtonSaveAsBase, this->toolStripButtonCloseBase,
					this->toolStripSeparator1, this->toolStripButtonAddToBase, this->toolStripButtonEditSelectedItem, this->toolStripButtonDeleteSelectedItem,
					this->toolStripSeparator2, this->toolStripButtonFind, this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1178, 31);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButtonNewBase
			// 
			this->toolStripButtonNewBase->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripButtonNewBase->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonNewBase->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonNewBase.Image")));
			this->toolStripButtonNewBase->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonNewBase->Name = L"toolStripButtonNewBase";
			this->toolStripButtonNewBase->Size = System::Drawing::Size(28, 28);
			this->toolStripButtonNewBase->Text = L"Создать новую базу";
			this->toolStripButtonNewBase->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonNewBase_Click);
			// 
			// toolStripButtonOpenBase
			// 
			this->toolStripButtonOpenBase->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonOpenBase->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonOpenBase.Image")));
			this->toolStripButtonOpenBase->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonOpenBase->Name = L"toolStripButtonOpenBase";
			this->toolStripButtonOpenBase->Size = System::Drawing::Size(28, 28);
			this->toolStripButtonOpenBase->Text = L"Открыть имеющуюся базу";
			this->toolStripButtonOpenBase->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonOpenBase_Click);
			// 
			// toolStripButtonSaveBase
			// 
			this->toolStripButtonSaveBase->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonSaveBase->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonSaveBase.Image")));
			this->toolStripButtonSaveBase->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSaveBase->Name = L"toolStripButtonSaveBase";
			this->toolStripButtonSaveBase->Size = System::Drawing::Size(28, 28);
			this->toolStripButtonSaveBase->Text = L"Сохранить";
			this->toolStripButtonSaveBase->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonSaveBase_Click);
			// 
			// toolStripButtonSaveAsBase
			// 
			this->toolStripButtonSaveAsBase->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonSaveAsBase->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonSaveAsBase.Image")));
			this->toolStripButtonSaveAsBase->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSaveAsBase->Name = L"toolStripButtonSaveAsBase";
			this->toolStripButtonSaveAsBase->Size = System::Drawing::Size(28, 28);
			this->toolStripButtonSaveAsBase->Text = L"Сохранить как...";
			this->toolStripButtonSaveAsBase->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonSaveAsBase_Click);
			// 
			// toolStripButtonCloseBase
			// 
			this->toolStripButtonCloseBase->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonCloseBase->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCloseBase.Image")));
			this->toolStripButtonCloseBase->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCloseBase->Name = L"toolStripButtonCloseBase";
			this->toolStripButtonCloseBase->Size = System::Drawing::Size(28, 28);
			this->toolStripButtonCloseBase->Text = L"Закрыть базу";
			this->toolStripButtonCloseBase->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonCloseBase_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 31);
			// 
			// toolStripButtonAddToBase
			// 
			this->toolStripButtonAddToBase->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonAddToBase->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonAddToBase.Image")));
			this->toolStripButtonAddToBase->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonAddToBase->Name = L"toolStripButtonAddToBase";
			this->toolStripButtonAddToBase->Size = System::Drawing::Size(28, 28);
			this->toolStripButtonAddToBase->Text = L"Добавить новый элемент";
			this->toolStripButtonAddToBase->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonAddToBase_Click);
			// 
			// toolStripButtonEditSelectedItem
			// 
			this->toolStripButtonEditSelectedItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonEditSelectedItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonEditSelectedItem.Image")));
			this->toolStripButtonEditSelectedItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonEditSelectedItem->Name = L"toolStripButtonEditSelectedItem";
			this->toolStripButtonEditSelectedItem->Size = System::Drawing::Size(28, 28);
			this->toolStripButtonEditSelectedItem->Text = L"Редактировать выделенный элемент";
			this->toolStripButtonEditSelectedItem->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonEditSelectedItem_Click);
			// 
			// toolStripButtonDeleteSelectedItem
			// 
			this->toolStripButtonDeleteSelectedItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonDeleteSelectedItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonDeleteSelectedItem.Image")));
			this->toolStripButtonDeleteSelectedItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonDeleteSelectedItem->Name = L"toolStripButtonDeleteSelectedItem";
			this->toolStripButtonDeleteSelectedItem->Size = System::Drawing::Size(28, 28);
			this->toolStripButtonDeleteSelectedItem->Text = L"Удалить выделенный элемент";
			this->toolStripButtonDeleteSelectedItem->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonDeleteSelectedItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 31);
			// 
			// toolStripButtonFind
			// 
			this->toolStripButtonFind->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonFind->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonFind.Image")));
			this->toolStripButtonFind->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonFind->Name = L"toolStripButtonFind";
			this->toolStripButtonFind->Size = System::Drawing::Size(28, 28);
			this->toolStripButtonFind->Text = L"Поиск по базе";
			this->toolStripButtonFind->Click += gcnew System::EventHandler(this, &MainForm::toolStripButtonFind_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(28, 28);
			this->toolStripButton1->Text = L"Очистить результаты поиска";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"action_add.ico");
			this->imageList1->Images->SetKeyName(1, L"action_check.ico");
			this->imageList1->Images->SetKeyName(2, L"action_delete.ico");
			this->imageList1->Images->SetKeyName(3, L"file.ico");
			this->imageList1->Images->SetKeyName(4, L"folder_files.ico");
			this->imageList1->Images->SetKeyName(5, L"save.ico");
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1178, 507);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Автомобильный магазин";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->contextMenuStrip1->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


public: value class Car
{
	public:
		String^ _id;
		String^ _maker;
		String^ _model;
		String^ _engine_capacity;
		String^ _power;
		String^ _year;
		String^ _mileage;
		String^ _price;
		String^ _status;
		String^ _details;
		String^ _pic_name;
		String^ _station;

	Car(String^ &id, String^ &maker, String^ &model, String^ &engine_capacity, String^ &power,
		String^ &year, String^ &mileage, String^ &price, String^ &status, String^ &details, String^ &pic_name, String^ &station)
	{
		this->_id = id;
		this->_maker = maker;
		this->_model = model;
		this->_engine_capacity = engine_capacity;
		this->_power = power;
		this->_year = year;
		this->_mileage = mileage;
		this->_price = price;
		this->_status = status;
		this->_details = details;
		this->_pic_name = pic_name;
		this->_station = station;
	}

	array<ListViewItem^>^ AddCarToListView()
	{
		ListViewItem^ item1 = gcnew ListViewItem(Convert::ToString(_id), 0);
		item1->SubItems->Add(_maker);
		item1->SubItems->Add(_model);
		item1->SubItems->Add(_engine_capacity);
		item1->SubItems->Add(_power);
		item1->SubItems->Add(_year);
		item1->SubItems->Add(_mileage);
		item1->SubItems->Add(_price);
		item1->SubItems->Add(_status);
		item1->SubItems->Add(_details);
		array<ListViewItem^>^temp1 = { item1 };
		return temp1;
	}
};

public:	value class Station
{
	public:
		String^ _name;
		String^ _address;
		String^ _phones;

	Station(String^ &name, String^ &address, String^ &phones)
	{
		this->_name = name;
		this->_address = address;
		this->_phones = phones;
	}

	array<ListViewItem^>^ AddToListView()
	{
		ListViewItem^ item1 = gcnew ListViewItem(Convert::ToString(_name), 0);
		item1->SubItems->Add(_address);
		item1->SubItems->Add(_phones);
		array<ListViewItem^>^temp1 = { item1 };
		return temp1;
	}

};

public: value class SearshParameters
{
	public:
		Boolean _check_maker;
		Boolean _check_model;
		Boolean _check_engine_capacity;
		Boolean _check_power;
		Boolean _check_year;
		Boolean _check_mileage;
		Boolean _check_price;
		String^ _maker;
		String^ _model;
		String^ _engine_capacity_min;
		String^ _engine_capacity_max;
		String^ _power_min;
		String^ _power_max;
		String^ _year_min;
		String^ _year_max;
		String^ _mileage_min;
		String^ _mileage_max;
		String^ _price_min;
		String^ _price_max;

	SearshParameters(Boolean &check_maker, Boolean &check_model, Boolean &check_engine_capacity, Boolean &check_power,
		Boolean &check_year, Boolean &check_mileage, Boolean &check_price,
		String^ &maker, String^ &model, String^ &engine_capacity_min, String^ &engine_capacity_max, String^ &power_min, String^ &power_max,
		String^ &year_min, String^ &year_max, String^ &mileage_min, String^ &mileage_max, String^ &price_min, String^ &price_max)
	{
		this->_check_maker = check_maker;
		this->_check_model = check_model;
		this->_check_engine_capacity = check_engine_capacity;
		this->_check_power = check_power;
		this->_check_year = check_year;
		this->_check_mileage = check_mileage;
		this->_check_price = check_price;
		this->_maker = maker;
		this->_model = model;
		this->_engine_capacity_min = engine_capacity_min;
		this->_engine_capacity_max = engine_capacity_max;
		this->_power_min = power_min;
		this->_power_max = power_max;
		this->_year_min = year_min;
		this->_year_max = year_max;
		this->_mileage_min = mileage_min;
		this->_mileage_max = mileage_max;
		this->_price_min = price_min;
		this->_price_max = price_max;
	}
};

	public: String^ base_directory = "";
	String^ base_file_path = "";
	String^ base_file = "";
	String^ base_name = "";
	public: int CountBase = 0;
	Boolean OPENED = false;
	Boolean SAVED = true;
	Boolean FIND = false;
	int last_sorted_column = -1; // Номер последнего отсортированного столбца
	SortOrder last_sort_order; // Порядок последней сортировки

	List <Car> ^Cars = gcnew List <Car>();
	List <Car> ^SearshResult = gcnew List <Car>();
	List <Station> ^Stations = gcnew List <Station>();
	SearshParameters ^SearshParameter = gcnew SearshParameters();

	public: List <String^> ^ListFilesForDelWithSave = gcnew List <String^>();
	public: List <String^> ^ListFilesForDelWithNoSave = gcnew List <String^>();

	private: System::Void добавитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void изменитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void listView1_DoubleClick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void поискToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void базаСТОToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void toolStripButtonAddToBase_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void добавитьToolStripMenuItemContext_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButtonEditSelectedItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void изменитьToolStripMenuItemContext_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButtonFind_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void удалитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void удалитьToolStripMenuItemContext_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButtonDeleteSelectedItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButtonNewBase_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void создатьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButtonOpenBase_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void открытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButtonSaveBase_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButtonSaveAsBase_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButtonCloseBase_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void закрытьToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void обновитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void выйтиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void menuStrip1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e);
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void вПродажеToolStripMenuItem_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ПроданоToolStripMenuItem_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void безСортировкиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void вПродажеToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e);
	private: System::Void ПроданоToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e);
	private: System::Void listView1_ColumnClick(System::Object ^ sender, System::Windows::Forms::ColumnClickEventArgs ^ e);
	private: bool DialogCloseAndExit(String ^ CaptionDialog, String ^ TextDialog1, String ^ TextDialog2);
	private: void ChangeEnabledButton();
	void OpenBaseFromFileDialog();
	void OpenBaseFromFile(String ^ path);
	void LoadCarBaseFromFileToList(String ^ path_base);
	void LoadSTOBaseFromFileToList(String ^ path_base);
	void CreatBaseDialog();
	void CreatBase(String ^ path);
	void CloseBase();
	void Clear(System::Collections::Generic::List<Car>^ _list);
	void SaveBaseToFile(String ^ path_base);
	void SaveAsBaseToFile();
	void DeleteFilesAfterSaveBase();
	void DeleteFilesAfterCloseBase();
	void AddCarToListViewFromList(List<Car>^ _list);
	void DeleteSelectedItemFromListView(List<Car>^ _list);
	bool Searsh(Car ^ _list, SearshParameters ^ SearshParameter);
	public: void LoadSearshParameters(Boolean check_maker, Boolean check_model, Boolean check_engine_capacity, Boolean check_power, Boolean check_year, Boolean check_mileage, Boolean check_price, String ^ maker, String ^ model, String ^ engine_capacity_min, String ^ engine_capacity_max, String ^ power_min, String ^ power_max, String ^ year_min, String ^ year_max, String ^ mileage_min, String ^ mileage_max, String ^ price_min, String ^ price_max);
	void SearshCarByParameters(SearshParameters ^ SearshParameter);
	void ClearSearshResult();
	int GetIndex(int index_selected_item);
	public: void AddCar(String ^ id, String ^ maker, String ^ model, String ^ engine_capacity, String ^ power, String ^ year, String ^ mileage, String ^ price, String ^ status, String ^ details, String ^ pic_name, String ^ station);
	public: void EditCar(int index, String ^ id, String ^ maker, String ^ model, String ^ engine_capacity, String ^ power, String ^ year, String ^ mileage, String ^ price, String ^ status, String ^ details, String ^ pic_name, String ^ station);
	public: void AddSTO(String ^ name, String ^ address, String ^ phones);
	public: void EditSTO(int index, String ^ name, String ^ address, String ^ phones);

};

}

