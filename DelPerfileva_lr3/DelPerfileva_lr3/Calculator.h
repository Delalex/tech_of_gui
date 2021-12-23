#pragma once
#include "prototypes.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
		}

	protected:
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_calculate;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label_result;
	private: System::Windows::Forms::NumericUpDown^ value_current;
	private: System::Windows::Forms::NumericUpDown^ value_previous;
	private: System::Windows::Forms::NumericUpDown^ value_price;
	private: System::Windows::Forms::Label^ label4;

	protected:

	protected:

	protected:

	protected:

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->button_calculate = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->value_current = (gcnew System::Windows::Forms::NumericUpDown());
			this->value_previous = (gcnew System::Windows::Forms::NumericUpDown());
			this->value_price = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->value_current))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->value_previous))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->value_price))->BeginInit();
			this->SuspendLayout();
			// 
			// button_calculate
			// 
			this->button_calculate->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button_calculate->Location = System::Drawing::Point(15, 164);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(129, 49);
			this->button_calculate->TabIndex = 0;
			this->button_calculate->Text = L"Рассчитать";
			this->button_calculate->UseVisualStyleBackColor = false;
			this->button_calculate->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Предыдущее показание счетчика:";
			this->label1->Click += gcnew System::EventHandler(this, &Calculator::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Текущее показание счетчика:";
			this->label2->Click += gcnew System::EventHandler(this, &Calculator::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Цена в рублях за кВт:";
			// 
			// label_result
			// 
			this->label_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->Location = System::Drawing::Point(51, 142);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(335, 20);
			this->label_result->TabIndex = 7;
			this->label_result->Text = L"0";
			// 
			// value_current
			// 
			this->value_current->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->value_current->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_current->Location = System::Drawing::Point(234, 63);
			this->value_current->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->value_current->Name = L"value_current";
			this->value_current->Size = System::Drawing::Size(233, 20);
			this->value_current->TabIndex = 8;
			// 
			// value_previous
			// 
			this->value_previous->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->value_previous->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_previous->Location = System::Drawing::Point(234, 31);
			this->value_previous->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->value_previous->Name = L"value_previous";
			this->value_previous->Size = System::Drawing::Size(233, 20);
			this->value_previous->TabIndex = 9;
			// 
			// value_price
			// 
			this->value_price->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->value_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_price->Location = System::Drawing::Point(234, 98);
			this->value_price->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->value_price->Name = L"value_price";
			this->value_price->Size = System::Drawing::Size(233, 20);
			this->value_price->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Итог:";
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(485, 380);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->value_price);
			this->Controls->Add(this->value_previous);
			this->Controls->Add(this->value_current);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_calculate);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->value_current))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->value_previous))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->value_price))->EndInit();
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

		//проверка длины полей, предотвращение вылета программы
		int previous_value_lenght = value_previous->Text->Length;
		int current_value_lenght = value_current->Text->Length;
		int price_lenght = value_price->Text->Length;

		int previous_value = 0;
		int current_value = 0;
		int price = 0;

		//получение значений из текстовых полей
		if (previous_value_lenght > 0)
			previous_value = Convert::ToInt32(value_previous->Text);
		if (current_value_lenght > 0)
			current_value = Convert::ToInt32(value_current->Text);
		if (price_lenght > 0)
			price = Convert::ToInt32(value_price->Text);
	
		//вывод результата
		label_result->Text = Convert::ToString((current_value - previous_value) * price);
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
