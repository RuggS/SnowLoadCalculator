#pragma once
#include <string> 
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

namespace SnowLoad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	bool selected[7] = { false };
	bool all = false;
	double pg;
	double angle;
	double ce;
	double ct;
	double is;
	double pf;
	double cs;
	double ps;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		public:
			MyForm(void)
			{
				InitializeComponent();
				//
				//TODO: Add the constructor code here
				//
			}

		protected:
			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^ PgLabel;
		protected:

		private: System::Windows::Forms::TextBox^ Pgbox;
		private: System::Windows::Forms::Label^ CeLabel;
		private: System::Windows::Forms::ComboBox^ Terrain;



		private: System::Windows::Forms::ComboBox^ CtDrop;
		private: System::Windows::Forms::Label^ CtLabel;
		private: System::Windows::Forms::TextBox^ AngleBox;
		private: System::Windows::Forms::Label^ AngelLabel;


		private: System::Windows::Forms::Label^ deg;
	private: System::Windows::Forms::Label^ SlipLabel;

		private: System::Windows::Forms::ComboBox^ CsDrop;
		private: System::Windows::Forms::Label^ IsLabel;
		private: System::Windows::Forms::ComboBox^ IsDrop;



		private: System::Windows::Forms::Button^ Submit;
		private: System::Windows::Forms::Label^ Output;
		private: System::Windows::Forms::RadioButton^ radioFull;

		private: System::Windows::Forms::RadioButton^ radioPart;

		private: System::Windows::Forms::RadioButton^ radioSheltered;


		





		protected:

		protected:

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				this->PgLabel = (gcnew System::Windows::Forms::Label());
				this->Pgbox = (gcnew System::Windows::Forms::TextBox());
				this->CeLabel = (gcnew System::Windows::Forms::Label());
				this->Terrain = (gcnew System::Windows::Forms::ComboBox());
				this->CtDrop = (gcnew System::Windows::Forms::ComboBox());
				this->CtLabel = (gcnew System::Windows::Forms::Label());
				this->AngleBox = (gcnew System::Windows::Forms::TextBox());
				this->AngelLabel = (gcnew System::Windows::Forms::Label());
				this->deg = (gcnew System::Windows::Forms::Label());
				this->SlipLabel = (gcnew System::Windows::Forms::Label());
				this->CsDrop = (gcnew System::Windows::Forms::ComboBox());
				this->IsLabel = (gcnew System::Windows::Forms::Label());
				this->IsDrop = (gcnew System::Windows::Forms::ComboBox());
				this->Submit = (gcnew System::Windows::Forms::Button());
				this->Output = (gcnew System::Windows::Forms::Label());
				this->radioFull = (gcnew System::Windows::Forms::RadioButton());
				this->radioPart = (gcnew System::Windows::Forms::RadioButton());
				this->radioSheltered = (gcnew System::Windows::Forms::RadioButton());
				this->SuspendLayout();
				// 
				// PgLabel
				// 
				this->PgLabel->AccessibleDescription = L"";
				this->PgLabel->AutoSize = true;
				this->PgLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->PgLabel->Location = System::Drawing::Point(63, 54);
				this->PgLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->PgLabel->Name = L"PgLabel";
				this->PgLabel->Size = System::Drawing::Size(26, 17);
				this->PgLabel->TabIndex = 0;
				this->PgLabel->Text = L"Pg";
				// 
				// Pgbox
				// 
				this->Pgbox->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Pgbox->Location = System::Drawing::Point(142, 44);
				this->Pgbox->Margin = System::Windows::Forms::Padding(4);
				this->Pgbox->Name = L"Pgbox";
				this->Pgbox->Size = System::Drawing::Size(148, 24);
				this->Pgbox->TabIndex = 1;
				this->Pgbox->TextChanged += gcnew System::EventHandler(this, &MyForm::Pgbox_TextChanged);
				this->Pgbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Pgbox_KeyPress);
				// 
				// CeLabel
				// 
				this->CeLabel->AccessibleDescription = L"";
				this->CeLabel->AutoSize = true;
				this->CeLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->CeLabel->Location = System::Drawing::Point(63, 127);
				this->CeLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->CeLabel->Name = L"CeLabel";
				this->CeLabel->Size = System::Drawing::Size(26, 17);
				this->CeLabel->TabIndex = 2;
				this->CeLabel->Text = L"Ce";
				// 
				// Terrain
				// 
				this->Terrain->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Terrain->FormattingEnabled = true;
				this->Terrain->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
					L"B", L"C", L"D", L"Above treeling in windswept mountainous areas",
						L"In Alaska, in areas where there are no trees within 2 miles"
				});
				this->Terrain->Location = System::Drawing::Point(142, 127);
				this->Terrain->Margin = System::Windows::Forms::Padding(4);
				this->Terrain->Name = L"Terrain";
				this->Terrain->Size = System::Drawing::Size(832, 25);
				this->Terrain->TabIndex = 3;
				this->Terrain->Text = L"Terraing Catagory";
				this->Terrain->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::Terrain_SelectionChangeCommitted);
				this->Terrain->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Drop_MouseClick);
				// 
				// CtDrop
				// 
				this->CtDrop->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->CtDrop->FormattingEnabled = true;
				this->CtDrop->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
					L"All structures except indicated below", L"Structures kept above freezing",
						L"Unheatd open air structures", L"Structures kept intentionally kept below freezing", L"Continuously heated greenhouses"
				});
				this->CtDrop->Location = System::Drawing::Point(142, 305);
				this->CtDrop->Margin = System::Windows::Forms::Padding(4);
				this->CtDrop->Name = L"CtDrop";
				this->CtDrop->Size = System::Drawing::Size(486, 25);
				this->CtDrop->TabIndex = 5;
				this->CtDrop->Text = L"Thermal Condition";
				this->CtDrop->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::CtDrop_SelectionChangeCommitted);
				this->CtDrop->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Drop_MouseClick);
				// 
				// CtLabel
				// 
				this->CtLabel->AccessibleDescription = L"";
				this->CtLabel->AutoSize = true;
				this->CtLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->CtLabel->Location = System::Drawing::Point(63, 310);
				this->CtLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->CtLabel->Name = L"CtLabel";
				this->CtLabel->Size = System::Drawing::Size(26, 17);
				this->CtLabel->TabIndex = 4;
				this->CtLabel->Text = L"Ct";
				// 
				// AngleBox
				// 
				this->AngleBox->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->AngleBox->Location = System::Drawing::Point(142, 382);
				this->AngleBox->Margin = System::Windows::Forms::Padding(4);
				this->AngleBox->Name = L"AngleBox";
				this->AngleBox->Size = System::Drawing::Size(148, 24);
				this->AngleBox->TabIndex = 7;
				this->AngleBox->TextChanged += gcnew System::EventHandler(this, &MyForm::AngleBox_TextChanged);
				this->AngleBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::AngleBox_KeyPress);
				// 
				// AngelLabel
				// 
				this->AngelLabel->AccessibleDescription = L"";
				this->AngelLabel->AutoSize = true;
				this->AngelLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->AngelLabel->Location = System::Drawing::Point(63, 391);
				this->AngelLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->AngelLabel->Name = L"AngelLabel";
				this->AngelLabel->Size = System::Drawing::Size(53, 17);
				this->AngelLabel->TabIndex = 6;
				this->AngelLabel->Text = L"Angle";
				// 
				// deg
				// 
				this->deg->AccessibleDescription = L"";
				this->deg->AutoSize = true;
				this->deg->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->deg->Location = System::Drawing::Point(302, 382);
				this->deg->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->deg->Name = L"deg";
				this->deg->Size = System::Drawing::Size(17, 17);
				this->deg->TabIndex = 8;
				this->deg->Text = L"°";
				// 
				// SlipLabel
				// 
				this->SlipLabel->AccessibleDescription = L"";
				this->SlipLabel->AutoSize = true;
				this->SlipLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->SlipLabel->Location = System::Drawing::Point(63, 471);
				this->SlipLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->SlipLabel->Name = L"SlipLabel";
				this->SlipLabel->Size = System::Drawing::Size(80, 17);
				this->SlipLabel->TabIndex = 9;
				this->SlipLabel->Text = L"Slippery";
				// 
				// CsDrop
				// 
				this->CsDrop->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->CsDrop->FormattingEnabled = true;
				this->CsDrop->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Slippery Roof", L"Non Slippery Roof" });
				this->CsDrop->Location = System::Drawing::Point(142, 471);
				this->CsDrop->Margin = System::Windows::Forms::Padding(4);
				this->CsDrop->Name = L"CsDrop";
				this->CsDrop->Size = System::Drawing::Size(210, 25);
				this->CsDrop->TabIndex = 10;
				this->CsDrop->Text = L"Surface";
				this->CsDrop->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::CsDrop_SelectionChangeCommitted);
				this->CsDrop->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Drop_MouseClick);
				// 
				// IsLabel
				// 
				this->IsLabel->AccessibleDescription = L"";
				this->IsLabel->AutoSize = true;
				this->IsLabel->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->IsLabel->Location = System::Drawing::Point(63, 535);
				this->IsLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->IsLabel->Name = L"IsLabel";
				this->IsLabel->Size = System::Drawing::Size(26, 17);
				this->IsLabel->TabIndex = 11;
				this->IsLabel->Text = L"Is";
				// 
				// IsDrop
				// 
				this->IsDrop->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->IsDrop->FormattingEnabled = true;
				this->IsDrop->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"I", L"II", L"III", L"IV" });
				this->IsDrop->Location = System::Drawing::Point(142, 535);
				this->IsDrop->Margin = System::Windows::Forms::Padding(4);
				this->IsDrop->Name = L"IsDrop";
				this->IsDrop->Size = System::Drawing::Size(179, 25);
				this->IsDrop->TabIndex = 12;
				this->IsDrop->Text = L"Importance Factor";
				this->IsDrop->SelectionChangeCommitted += gcnew System::EventHandler(this, &MyForm::IsDrop_SelectionChangeCommitted);
				this->IsDrop->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Drop_MouseClick);
				// 
				// Submit
				// 
				this->Submit->Enabled = false;
				this->Submit->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Submit->Location = System::Drawing::Point(68, 596);
				this->Submit->Margin = System::Windows::Forms::Padding(4);
				this->Submit->Name = L"Submit";
				this->Submit->Size = System::Drawing::Size(154, 30);
				this->Submit->TabIndex = 14;
				this->Submit->Text = L"Calculate";
				this->Submit->UseVisualStyleBackColor = true;
				this->Submit->Click += gcnew System::EventHandler(this, &MyForm::Submit_Click);
				// 
				// Output
				// 
				this->Output->AutoSize = true;
				this->Output->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Output->Location = System::Drawing::Point(63, 662);
				this->Output->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->Output->Name = L"Output";
				this->Output->Size = System::Drawing::Size(0, 17);
				this->Output->TabIndex = 15;
				// 
				// radioFull
				// 
				this->radioFull->AutoSize = true;
				this->radioFull->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->radioFull->Location = System::Drawing::Point(142, 183);
				this->radioFull->Margin = System::Windows::Forms::Padding(4);
				this->radioFull->Name = L"radioFull";
				this->radioFull->Size = System::Drawing::Size(143, 21);
				this->radioFull->TabIndex = 16;
				this->radioFull->TabStop = true;
				this->radioFull->Text = L"Fully Exposed";
				this->radioFull->UseVisualStyleBackColor = true;
				this->radioFull->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioFull_CheckedChanged);
				// 
				// radioPart
				// 
				this->radioPart->AutoSize = true;
				this->radioPart->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->radioPart->Location = System::Drawing::Point(142, 218);
				this->radioPart->Margin = System::Windows::Forms::Padding(4);
				this->radioPart->Name = L"radioPart";
				this->radioPart->Size = System::Drawing::Size(179, 21);
				this->radioPart->TabIndex = 17;
				this->radioPart->TabStop = true;
				this->radioPart->Text = L"Partially Exposed";
				this->radioPart->UseVisualStyleBackColor = true;
				this->radioPart->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioPart_CheckedChanged);
				// 
				// radioSheltered
				// 
				this->radioSheltered->AutoSize = true;
				this->radioSheltered->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->radioSheltered->Location = System::Drawing::Point(142, 254);
				this->radioSheltered->Margin = System::Windows::Forms::Padding(4);
				this->radioSheltered->Name = L"radioSheltered";
				this->radioSheltered->Size = System::Drawing::Size(107, 21);
				this->radioSheltered->TabIndex = 18;
				this->radioSheltered->TabStop = true;
				this->radioSheltered->Text = L"Sheltered";
				this->radioSheltered->UseVisualStyleBackColor = true;
				this->radioSheltered->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioSheltered_CheckedChanged);
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(9, 17);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(981, 708);
				this->Controls->Add(this->radioSheltered);
				this->Controls->Add(this->radioPart);
				this->Controls->Add(this->radioFull);
				this->Controls->Add(this->Output);
				this->Controls->Add(this->Submit);
				this->Controls->Add(this->IsDrop);
				this->Controls->Add(this->IsLabel);
				this->Controls->Add(this->CsDrop);
				this->Controls->Add(this->SlipLabel);
				this->Controls->Add(this->deg);
				this->Controls->Add(this->AngleBox);
				this->Controls->Add(this->AngelLabel);
				this->Controls->Add(this->CtDrop);
				this->Controls->Add(this->CtLabel);
				this->Controls->Add(this->Terrain);
				this->Controls->Add(this->CeLabel);
				this->Controls->Add(this->Pgbox);
				this->Controls->Add(this->PgLabel);
				this->Font = (gcnew System::Drawing::Font(L"Courier New", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Margin = System::Windows::Forms::Padding(4);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion

		private: System::Void Pgbox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			//accept only one possible '.'
			if (e->KeyChar == '.') {
				if (this->Pgbox->Text->Contains(".") && !this->Pgbox->SelectedText->Contains(".")) {
					e->Handled  = true;//its done and needs no more handling (bypass key reaching text box)
				}
			}//accept digits and backspace
			else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
				e->Handled = true;
			}
			
		}

		private: System::Void Pgbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			//check if contains a valid number
			if (Pgbox->Text->Length == 1 && !Pgbox->Text->Contains(".")) {
				selected[0] = true;
			}
			else if (Pgbox->Text->Length >= 2) {
				selected[0] = true;
			}
			else {
				selected[0] = false;
			}


			//check if all are selected
			all = selected[0];
			for (int i = 1; i < 7 && all; i++) {
				all = selected[i];
			}

			Submit->Enabled = all;

			if (selected[0]) {
				std::string s = msclr::interop::marshal_as<std::string>(Pgbox->Text);
				pg = std::stod(s);
			}
		}		

		private: System::Void Terrain_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
			if (Terrain->SelectedItem == "Above treeling in windswept mountainous areas" || Terrain->SelectedItem == "In Alaska, in areas where there are no trees within 2 miles") {
				radioSheltered->Enabled = false;
				if (radioSheltered->Checked) {
					radioSheltered->Checked = false;
					selected[2] = false;
					all = false;
				}
				
			}
			else {
				radioSheltered->Enabled = true;
			}

			selected[1] = true;
			//check if all are selected
			all = selected[0];
			for (int i = 1; i < 7 && all; i++) {
				all = selected[i];
			}

			Submit->Enabled = all;

		}

		private: System::Void radioFull_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (radioFull->Checked || radioPart->Checked || radioSheltered->Checked) {
				selected[2] = true;
				//check if all are selected
				all = selected[0];
				for (int i = 1; i < 7 && all; i++) {
					all = selected[i];
				}

				Submit->Enabled = all;
			}
		}

		private: System::Void radioPart_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (radioFull->Checked || radioPart->Checked || radioSheltered->Checked) {
				selected[2] = true;
				//check if all are selected
				all = selected[0];
				for (int i = 1; i < 7 && all; i++) {
					all = selected[i];
				}

				Submit->Enabled = all;
			}
		}

		private: System::Void radioSheltered_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (radioFull->Checked || radioPart->Checked || radioSheltered->Checked) {
				selected[2] = true;
				//check if all are selected
				all = selected[0];
				for (int i = 1; i < 7 && all; i++) {
					all = selected[i];
				}

				Submit->Enabled = all;
			}
		}

		private: System::Void CtDrop_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
			selected[3] = true;
			//check if all are selected
			all = selected[0];
			for (int i = 1; i < 7 && all; i++) {
				all = selected[i];
			}

			Submit->Enabled = all;
		}

		private: System::Void AngleBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			//accept only one possible '.'
			if (e->KeyChar == '.') {
				if (this->AngleBox->Text->Contains(".") && !this->AngleBox->SelectedText->Contains(".")) {
					e->Handled = true;//its done and needs no more handling (bypass key reaching text box)
				}
			}//accept digits and backspace
			else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
				e->Handled = true;
			}
		}

		private: System::Void AngleBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			//check if contains a valid number
			if (AngleBox->Text->Length == 1 && !AngleBox->Text->Contains(".")) {
				selected[4] = true;
			}
			else if (AngleBox->Text->Length >= 2) {
				selected[4] = true;
			}
			else {
				selected[4] = false;
			}


			//check if all are selected
			all = selected[4];
			for (int i = 1; i < 7 && all; i++) {
				all = selected[i];
			}

			Submit->Enabled = all;

			if (selected[4]) {
				std::string s = msclr::interop::marshal_as<std::string>(AngleBox->Text);
				angle = std::stod(s);
			}
		}

		private: System::Void CsDrop_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
			selected[5] = true;
			//check if all are selected
			all = selected[0];
			for (int i = 1; i < 7 && all; i++) {
				all = selected[i];
			}

			Submit->Enabled = all;
		}

		private: System::Void IsDrop_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
			selected[6] = true;
			//check if all are selected
			all = selected[0];
			for (int i = 1; i < 7 && all; i++) {
				all = selected[i];
			}

			Submit->Enabled = all;
		}

		private: System::Void Drop_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			safe_cast<ComboBox^>(sender)->DroppedDown = true;
		}

		private: System::Void Submit_Click(System::Object^ sender, System::EventArgs^ e) {
			//exposure factor (Ce) Calculations
			int terraincat = Terrain->SelectedIndex;
			switch (terraincat) {
				case 0:
					//terrain category B
					if (radioFull->Checked) {
						//fully exposed
						ce = 0.9;
					} else if (radioPart->Checked) {
						//partially exposed
						ce = 1.0;
					} else {
						//Sheltered
						ce = 1.2;
					}
					break;
				case 1:
					//terrain category C
					if (radioFull->Checked) {
						//fully exposed
						ce = 0.9;
					} else if (radioPart->Checked) {
						//partially exposed
						ce = 1.0;
					} else {
						//Sheltered
						ce = 1.1;
					}
					break;
				case 2:
					//terrain category D
					if (radioFull->Checked) {
						//fully exposed
						ce = 0.8;
					} else if (radioPart->Checked) {
						//partially exposed
						ce = 0.9;
					} else {
						//Sheltered
						ce = 1.0;
					}
					break;
				case 3:
					//terrain category above treeline
					if (radioFull->Checked) {
						//fully exposed
						ce = 0.7;
					} else {
						//partially exposed
						ce = 0.8;
					}
					break;
				default:
					//terrain category alaska
					if (radioFull->Checked) {
						//fully exposed
						ce = 0.7;
					} else {
						//partially exposed
						ce = 0.8;
					}
					break;
			}

			//Thermal Factor (Ct) calculations
			int thermalcondition = CtDrop->SelectedIndex;
			switch (thermalcondition) {
				case 0:
					//all other structures
					ct = 1.0;
					break;
				case 1:
					//heated
					ct = 1.1;
					break;
				case 2:
					//unheated
					ct = 1.2;
					break;
				case 3:
					//intentionally cold
					ct = 1.3;
					break;
				default:
					//greenhouses
					ct = 0.85;
					break;
			}

			//Importance factor (Is) calculations
			int importance = IsDrop->SelectedIndex;
			switch (importance) {
			case 0:
				//I
				is = 0.8;
				break;
			case 1:
				//II
				is = 1.0;
				break;
			case 2:
				//III
				is = 1.1;
				break;
			default:
				//IV
				is = 1.2;
				break;
			}
			//Pf calculations
			pf = 0.7 * ce * ct * is * pg;

			//Cs calculations
			
			//slippery roof
			bool slip;
			slip = (CsDrop->SelectedIndex == 0);

			//warm roofs
			if (ct <= 1.0) {
				if (slip) {//slippery
					if (angle <= 5) {
						cs = 1.0;
					} else if (angle < 70) {
						cs = 1.0 - ((angle - 5) / 65);
					} else {
						cs = 0;
					}
				} else {//non slippery
					if (angle <= 30) {
						cs = 1.0;
					} else if (angle < 70) {
						cs = 1.0 - ((angle - 30) / 40);
					} else {
						cs = 0;
					}
				}
			} else if (ct == 1.1) {//sort of cold roofs
				if (slip) {//slippery
					if (angle <= 10) {
						cs = 1.0;
					} else if (angle < 70) {
						cs = 1.0 - ((angle - 10) / 60);
					} else {
						cs = 0;
					}
				} else {//non slippery
					if (angle <= 37.5) {
						cs = 1.0;
					} else if (angle < 70) {
						cs = 1.0 - ((angle - 37.5) / 32.5);
					} else {
						cs = 0;
					}
				}
			} else {//cold roofs (ct >= 1.2
				if (slip) {//slippery
					if (angle <= 15) {
						cs = 1.0;
					} else if (angle < 70) {
						cs = 1.0 - ((angle - 15) / 55);
					} else {
						cs = 0;
					}
				} else {//non slippery
					if (angle <= 45) {
						cs = 1.0;
					} else if (angle < 70) {
						cs = 1.0 - ((angle - 45) / 25);
					} else {
						cs = 0;
					}
				}
			}

			ps = cs * pf;
			std::string out = "Pf = ";
			std::string a = std::to_string(pf);
			out += a;
			out += '\n';
			a = std::to_string(ps);
			out += "Ps = ";
			out += a;
			out += '\n';
			String^ s = msclr::interop::marshal_as <String^>(out);
			Output->Text = s;
		}
	};
}
