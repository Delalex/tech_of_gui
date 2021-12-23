#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_calculate;
	private: System::Windows::Forms::TextBox^ textBox_last_counter;

	private: System::Windows::Forms::TextBox^ textBox_current_counter;
	private: System::Windows::Forms::TextBox^ textBox_price;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_calculate = (gcnew System::Windows::Forms::Button());
			this->textBox_last_counter = (gcnew System::Windows::Forms::TextBox());
			this->textBox_current_counter = (gcnew System::Windows::Forms::TextBox());
			this->textBox_price = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_calculate
			// 
			this->button_calculate->Location = System::Drawing::Point(15, 137);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(129, 49);
			this->button_calculate->TabIndex = 0;
			this->button_calculate->Text = L"Ðàññ÷èòàòü";
			this->button_calculate->UseVisualStyleBackColor = true;
			this->button_calculate->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox_last_counter
			// 
			this->textBox_last_counter->Location = System::Drawing::Point(199, 30);
			this->textBox_last_counter->Name = L"textBox_last_counter";
			this->textBox_last_counter->Size = System::Drawing::Size(233, 20);
			this->textBox_last_counter->TabIndex = 1;
			// 
			// textBox_current_counter
			// 
			this->textBox_current_counter->Location = System::Drawing::Point(199, 62);
			this->textBox_current_counter->Name = L"textBox_current_counter";
			this->textBox_current_counter->Size = System::Drawing::Size(233, 20);
			this->textBox_current_counter->TabIndex = 2;
			// 
			// textBox_price
			// 
			this->textBox_price->Location = System::Drawing::Point(199, 98);
			this->textBox_price->Name = L"textBox_price";
			this->textBox_price->Size = System::Drawing::Size(233, 20);
			this->textBox_price->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Ïðåäûäóùåå ïîêàçàíèå ñ÷åò÷èêà:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Òåêóùåå ïîêàçàíèå ñ÷åò÷èêà:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Öåíà â ðóáëÿõ çà êÂò:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(595, 380);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_price);
			this->Controls->Add(this->textBox_current_counter);
			this->Controls->Add(this->textBox_last_counter);
			this->Controls->Add(this->button_calculate);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		// onFormLoaded

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//onCalculateButtonClick

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// NO NEED THIS

	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//NO NEED THIS EVENT

	}
};
}
