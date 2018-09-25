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
	/// ������ ��� AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(MainForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
			//
			//TODO: �������� ��� ������������
			//
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public:
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: MainForm^ parentForm;
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(181, 270);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(199, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(459, 270);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 295);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AboutForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"� ���������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
