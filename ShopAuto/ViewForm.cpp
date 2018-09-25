#include "MainForm.h"
#include "ViewForm.h"

using namespace ShopAuto;

	int index_opened_car;

	void ViewForm::AddCarForView(int index)
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

		if (parentForm->Cars[index]._status == "Продано")
		{
			button1->Enabled = false;
			button1->Text = "Продано";
		}
		else
		{
			button1->Enabled = true;
			button1->Text = "Продать";
		}
	}


	Void ViewForm::button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (MessageBox::Show("Вы действительно хотиете продать данный автомобиль?", "Продажа автомобиля!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		parentForm->EditCar(index_opened_car, Convert::ToString(ID_Car), Convert::ToString(labelMaker->Text), Convert::ToString(labelModel->Text),
			Convert::ToString(labelEngineCapacity->Text), Convert::ToString(labelPower->Text), Convert::ToString(labelYear->Text),
			Convert::ToString(labelMileage->Text), Convert::ToString(labelPrice->Text), Convert::ToString("Продано"),
			Convert::ToString(textBoxDetails->Text), Convert::ToString(pic_name_Car), Convert::ToString(labelStation->Text));

		this->Close();

	}