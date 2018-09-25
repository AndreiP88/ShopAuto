#include "STOForm.h"

using namespace ShopAuto;

Boolean EDIT = false;
int edit_index = -1;

	Void STOForm::STOForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		timer1->Enabled = false;
	}

	Void STOForm::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		if (listViewSTO->SelectedItems->Count > 0)
		{
			ðåäàêòèðîâàòüToolStripMenuItem->Enabled = true;
			óäàëèòüToolStripMenuItem->Enabled = true;
		}
		else
		{
			ðåäàêòèðîâàòüToolStripMenuItem->Enabled = false;
			óäàëèòüToolStripMenuItem->Enabled = false;
		}
		if (EDIT == false)
			button1->ImageIndex = 0;
		else
			button1->ImageIndex = 1;
	}

	Void STOForm::ðåäàêòèðîâàòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (listViewSTO->SelectedItems->Count > 0)
		{
			LoadStationsFromListViewForChange(listViewSTO->SelectedIndices[0]);
		}
	}
	Void STOForm::óäàëèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		DeleteSelectedItem();
	}

	Void STOForm::button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBoxName->Text != "" && textBoxAddress->Text != "" && textBoxPhones->Text != "")
			if (EDIT == false) 
			{
				parentForm->AddSTO(textBoxName->Text, textBoxAddress->Text, textBoxPhones->Text);
				LoadStationsToListView();
				button1->ImageIndex = 1;
			}
			else
			{
				parentForm->EditSTO(edit_index, textBoxName->Text, textBoxAddress->Text, textBoxPhones->Text);
				LoadStationsToListView();
				button1->ImageIndex = 0;
			}
		else 
		{
			MessageBox::Show("Íåêîòîðûå ïîëÿ íå çàïîëíåíû!\nÇàïîëíèòå!", "Âíèìàíèå!");
		}
		textBoxName->Text = "";
		textBoxAddress->Text = "";
		textBoxPhones->Text = "";
	}

	Void STOForm::button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		textBoxName->Text = "";
		textBoxAddress->Text = "";
		textBoxPhones->Text = "";
		EDIT = false;
	}

	Void STOForm::listViewSTO_DoubleClick(System::Object^  sender, System::EventArgs^  e)
	{
		if (listViewSTO->SelectedItems->Count > 0)
		{
			LoadStationsFromListViewForChange(listViewSTO->SelectedIndices[0]);
		}
	}

	void STOForm::LoadStationsToListView()
	{
		listViewSTO->Items->Clear();
		for (int i = 0; i < parentForm->Stations->Count; i++)
		{
			listViewSTO->Items->AddRange(parentForm->Stations[i].AddToListView());
		}
		button1->ImageIndex = 0;
		timer1->Enabled = true;
	}

	void STOForm::LoadStationsFromListViewForChange(int index)
	{
		textBoxName->Text = parentForm->Stations[index]._name;
		textBoxAddress->Text = parentForm->Stations[index]._address;
		textBoxPhones->Text = parentForm->Stations[index]._phones;
		edit_index = index;
		EDIT = true;
		button1->ImageIndex = 1;
	}

	void STOForm::DeleteSelectedItem()
	{
		while (listViewSTO->SelectedItems->Count > 0) 
		{
			ListViewItem ^ item = listViewSTO->SelectedItems[0];
			int select = listViewSTO->SelectedIndices[0];
			System::Windows::Forms::DialogResult result;
			result = MessageBox::Show("Âû äåéñòâèòåëüíî õîòèòå óäàëèòü " + parentForm->Stations[select]._name + "?", "Óäàëåíèå", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				listViewSTO->Items->Remove(item);
				parentForm->Stations->RemoveAt(select);
				return;
			}
			else
				return;
		}
	}