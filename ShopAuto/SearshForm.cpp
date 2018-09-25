#include "MainForm.h"
#include "SearshForm.h"

using namespace ShopAuto;

	Void SearshForm::checkBoxMaker_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		textBoxMaker->Enabled = checkBoxMaker->Checked;
	}

	Void SearshForm::checkBoxModel_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		textBoxModel->Enabled = checkBoxModel->Checked;
	}

	Void SearshForm::checkBoxEngineCapacity_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		textBoxEngineCapacityMin->Enabled = checkBoxEngineCapacity->Checked;
		textBoxEngineCapacityMax->Enabled = checkBoxEngineCapacity->Checked;
	}

	Void SearshForm::checkBoxPower_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		textBoxPowerMin->Enabled = checkBoxPower->Checked;
		textBoxPowerMax->Enabled = checkBoxPower->Checked;
	}

	Void SearshForm::checkBoxYear_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		textBoxYearMin->Enabled = checkBoxYear->Checked;
		textBoxYearMax->Enabled = checkBoxYear->Checked;
	}

	Void SearshForm::checkBoxMiliage_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		textBoxMileageMin->Enabled = checkBoxMiliage->Checked;
		textBoxMileageMax->Enabled = checkBoxMiliage->Checked;
	}

	Void SearshForm::checkBoxPrice_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		textBoxPriceMin->Enabled = checkBoxPrice->Checked;
		textBoxPriceMax->Enabled = checkBoxPrice->Checked;
	}

	Void SearshForm::button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		parentForm->LoadSearshParameters(checkBoxMaker->Checked, checkBoxModel->Checked, checkBoxEngineCapacity->Checked, checkBoxPower->Checked,
			checkBoxYear->Checked, checkBoxMiliage->Checked, checkBoxPrice->Checked,
			textBoxMaker->Text, textBoxModel->Text, textBoxEngineCapacityMin->Text, textBoxEngineCapacityMax->Text, textBoxPowerMin->Text, textBoxPowerMax->Text,
			textBoxYearMin->Text, textBoxYearMax->Text, textBoxMileageMin->Text, textBoxMileageMax->Text, textBoxPriceMin->Text, textBoxPriceMax->Text);
		this->Close();
	}

	void SearshForm::LoadPreviousSearshParameters()
	{
		checkBoxMaker->Checked = parentForm->SearshParameter->_check_maker;
		checkBoxModel->Checked = parentForm->SearshParameter->_check_model;
		checkBoxEngineCapacity->Checked = parentForm->SearshParameter->_check_engine_capacity;
		checkBoxPower->Checked = parentForm->SearshParameter->_check_power;
		checkBoxYear->Checked = parentForm->SearshParameter->_check_year;
		checkBoxMiliage->Checked = parentForm->SearshParameter->_check_mileage;
		checkBoxPrice->Checked = parentForm->SearshParameter->_check_price;

		textBoxMaker->Text = parentForm->SearshParameter->_maker;
		textBoxModel->Text = parentForm->SearshParameter->_model;
		textBoxEngineCapacityMin->Text = parentForm->SearshParameter->_engine_capacity_min;
		textBoxEngineCapacityMax->Text = parentForm->SearshParameter->_engine_capacity_max;
		textBoxPowerMin->Text = parentForm->SearshParameter->_power_min;
		textBoxPowerMax->Text = parentForm->SearshParameter->_power_max;
		textBoxYearMin->Text = parentForm->SearshParameter->_year_min;
		textBoxYearMax->Text = parentForm->SearshParameter->_year_max;
		textBoxMileageMin->Text = parentForm->SearshParameter->_mileage_min;
		textBoxMileageMax->Text = parentForm->SearshParameter->_mileage_max;
		textBoxPriceMin->Text = parentForm->SearshParameter->_price_min;
		textBoxPriceMax->Text = parentForm->SearshParameter->_price_max;
	}