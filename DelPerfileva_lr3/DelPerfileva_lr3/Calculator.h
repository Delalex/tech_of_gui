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



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ value_previous;
	private: System::Windows::Forms::TextBox^ value_current;
	private: System::Windows::Forms::TextBox^ value_price;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ GifBox;




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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->value_previous = (gcnew System::Windows::Forms::TextBox());
			this->value_current = (gcnew System::Windows::Forms::TextBox());
			this->value_price = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->GifBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GifBox))->BeginInit();
			this->SuspendLayout();
			// 
			// button_calculate
			// 
			this->button_calculate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button_calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_calculate->ForeColor = System::Drawing::Color::White;
			this->button_calculate->Location = System::Drawing::Point(16, 183);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(156, 51);
			this->button_calculate->TabIndex = 0;
			this->button_calculate->Text = L"Рассчитать";
			this->button_calculate->UseVisualStyleBackColor = false;
			this->button_calculate->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Предыдущее показание счетчика:";
			this->label1->Click += gcnew System::EventHandler(this, &Calculator::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(303, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Текущее показание счетчика:";
			this->label2->Click += gcnew System::EventHandler(this, &Calculator::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label3->Location = System::Drawing::Point(12, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Цена в рублях за кВт:";
			// 
			// label_result
			// 
			this->label_result->BackColor = System::Drawing::Color::Transparent;
			this->label_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label_result->Location = System::Drawing::Point(81, 132);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(298, 20);
			this->label_result->TabIndex = 7;
			this->label_result->Text = L"0";
			this->label_result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label4->Location = System::Drawing::Point(12, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 24);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Итог:";
			// 
			// value_previous
			// 
			this->value_previous->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->value_previous->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_previous->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->value_previous->Location = System::Drawing::Point(378, 11);
			this->value_previous->Name = L"value_previous";
			this->value_previous->Size = System::Drawing::Size(318, 29);
			this->value_previous->TabIndex = 12;
			this->value_previous->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->value_previous->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::value_previous_KeyPress);
			// 
			// value_current
			// 
			this->value_current->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->value_current->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_current->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->value_current->Location = System::Drawing::Point(378, 48);
			this->value_current->Name = L"value_current";
			this->value_current->Size = System::Drawing::Size(318, 29);
			this->value_current->TabIndex = 13;
			this->value_current->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->value_current->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::value_current_KeyPress);
			// 
			// value_price
			// 
			this->value_price->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->value_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->value_price->Location = System::Drawing::Point(378, 85);
			this->value_price->Name = L"value_price";
			this->value_price->Size = System::Drawing::Size(318, 29);
			this->value_price->TabIndex = 14;
			this->value_price->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->value_price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::value_price_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label5->Location = System::Drawing::Point(702, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 24);
			this->label5->TabIndex = 15;
			this->label5->Text = L"руб.";
			this->label5->Click += gcnew System::EventHandler(this, &Calculator::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label6->Location = System::Drawing::Point(702, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 24);
			this->label6->TabIndex = 16;
			this->label6->Text = L"кВт";
			this->label6->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label7->Location = System::Drawing::Point(702, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 24);
			this->label7->TabIndex = 17;
			this->label7->Text = L"кВт";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label8->Location = System::Drawing::Point(385, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(170, 24);
			this->label8->TabIndex = 18;
			this->label8->Text = L"рублей к оплате";
			this->label8->Click += gcnew System::EventHandler(this, &Calculator::label8_Click);
			// 
			// GifBox
			// 
			this->GifBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->GifBox->Location = System::Drawing::Point(496, 232);
			this->GifBox->Name = L"GifBox";
			this->GifBox->Size = System::Drawing::Size(272, 178);
			this->GifBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->GifBox->TabIndex = 19;
			this->GifBox->TabStop = false;
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(768, 411);
			this->Controls->Add(this->GifBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->value_price);
			this->Controls->Add(this->value_current);
			this->Controls->Add(this->value_previous);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_calculate);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GifBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		// onFormLoaded
		this->GifBox->Image = Bitmap::FromFile(Application::StartupPath + "\\conveer.gif"); // Загрузка GIF
		this->BackgroundImage = Bitmap::FromFile(Application::StartupPath + "\\rainbow.png"); // Загрузка фона
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
	
		//вывод результата только если показания счетчиков верны
		if (previous_value < current_value)
		{
			label_result->Text = Convert::ToString((current_value - previous_value) * price);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//NO NEED THIS EVENT
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//NO NEED THIS EVENT
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//NO NEED THIS EVENT
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e)  
	{
		//NO NEED THIS EVENT
	}

	// блокировка ввода букв для value_previous, value_current и value_price
	private: System::Void value_previous_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != '\b') && (e->KeyChar != 44))
			e->Handled = true;
	}
	private: System::Void value_current_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != '\b') && (e->KeyChar != 44))
			e->Handled = true;
	}
	private: System::Void value_price_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != '\b') && (e->KeyChar != 44))
			e->Handled = true;
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GifBox_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
