#pragma once
#include "prototypes.h"
#include "BinaryTree.h"
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
	private: System::Windows::Forms::Button^ btn_go_tree;






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
			this->btn_go_tree = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GifBox))->BeginInit();
			this->SuspendLayout();
			// 
			// button_calculate
			// 
			this->button_calculate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button_calculate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_calculate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button_calculate->Location = System::Drawing::Point(21, 225);
			this->button_calculate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(208, 63);
			this->button_calculate->TabIndex = 0;
			this->button_calculate->Text = L"??????????";
			this->button_calculate->UseVisualStyleBackColor = false;
			this->button_calculate->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label1->Location = System::Drawing::Point(16, 17);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(420, 35);
			this->label1->TabIndex = 4;
			this->label1->Text = L"?????????? ????????? ????????:";
			this->label1->Click += gcnew System::EventHandler(this, &Calculator::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label2->Location = System::Drawing::Point(16, 60);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(367, 35);
			this->label2->TabIndex = 5;
			this->label2->Text = L"??????? ????????? ????????:";
			this->label2->Click += gcnew System::EventHandler(this, &Calculator::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label3->Location = System::Drawing::Point(16, 111);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(278, 35);
			this->label3->TabIndex = 6;
			this->label3->Text = L"???? ? ?????? ?? ???:";
			// 
			// label_result
			// 
			this->label_result->BackColor = System::Drawing::Color::Transparent;
			this->label_result->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label_result->Location = System::Drawing::Point(115, 164);
			this->label_result->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(397, 32);
			this->label_result->TabIndex = 7;
			this->label_result->Text = L"0";
			this->label_result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label4->Location = System::Drawing::Point(16, 161);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 35);
			this->label4->TabIndex = 11;
			this->label4->Text = L"????:";
			// 
			// value_previous
			// 
			this->value_previous->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->value_previous->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->value_previous->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->value_previous->Location = System::Drawing::Point(504, 14);
			this->value_previous->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->value_previous->Name = L"value_previous";
			this->value_previous->Size = System::Drawing::Size(423, 34);
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
			this->value_current->Location = System::Drawing::Point(504, 59);
			this->value_current->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->value_current->Name = L"value_current";
			this->value_current->Size = System::Drawing::Size(423, 34);
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
			this->value_price->Location = System::Drawing::Point(504, 105);
			this->value_price->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->value_price->Name = L"value_price";
			this->value_price->Size = System::Drawing::Size(423, 34);
			this->value_price->TabIndex = 14;
			this->value_price->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->value_price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::value_price_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label5->Location = System::Drawing::Point(936, 106);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 35);
			this->label5->TabIndex = 15;
			this->label5->Text = L"???.";
			this->label5->Click += gcnew System::EventHandler(this, &Calculator::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label6->Location = System::Drawing::Point(936, 62);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 35);
			this->label6->TabIndex = 16;
			this->label6->Text = L"???";
			this->label6->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label7->Location = System::Drawing::Point(936, 16);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 35);
			this->label7->TabIndex = 17;
			this->label7->Text = L"???";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->label8->Location = System::Drawing::Point(513, 161);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(213, 35);
			this->label8->TabIndex = 18;
			this->label8->Text = L"?????? ? ??????";
			this->label8->Click += gcnew System::EventHandler(this, &Calculator::label8_Click);
			// 
			// GifBox
			// 
			this->GifBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->GifBox->Location = System::Drawing::Point(796, 391);
			this->GifBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->GifBox->Name = L"GifBox";
			this->GifBox->Size = System::Drawing::Size(363, 219);
			this->GifBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->GifBox->TabIndex = 19;
			this->GifBox->TabStop = false;
			// 
			// btn_go_tree
			// 
			this->btn_go_tree->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btn_go_tree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btn_go_tree->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_go_tree->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_go_tree->Location = System::Drawing::Point(21, 548);
			this->btn_go_tree->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_go_tree->Name = L"btn_go_tree";
			this->btn_go_tree->Size = System::Drawing::Size(208, 63);
			this->btn_go_tree->TabIndex = 20;
			this->btn_go_tree->Text = L"??????";
			this->btn_go_tree->UseVisualStyleBackColor = false;
			this->btn_go_tree->Click += gcnew System::EventHandler(this, &Calculator::button1_Click_1);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1159, 612);
			this->Controls->Add(this->btn_go_tree);
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
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
		this->GifBox->Image = Bitmap::FromFile(Application::StartupPath + "\\conveer.gif"); // ???????? GIF
		this->BackgroundImage = Bitmap::FromFile(Application::StartupPath + "\\rainbow.png"); // ???????? ????
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//onCalculateButtonClick

		//???????? ????? ?????, ?????????????? ?????? ?????????
		int previous_value_lenght = value_previous->Text->Length;
		int current_value_lenght = value_current->Text->Length;
		int price_lenght = value_price->Text->Length;

		int previous_value = 0;
		int current_value = 0;
		int price = 0;

		//????????? ???????? ?? ????????? ?????
		if (previous_value_lenght > 0)
			previous_value = Convert::ToInt32(value_previous->Text);
		if (current_value_lenght > 0)
			current_value = Convert::ToInt32(value_current->Text);
		if (price_lenght > 0)
			price = Convert::ToInt32(value_price->Text);
	
		//????? ?????????? ?????? ???? ????????? ????????? ?????
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

	// ?????????? ????? ???? ??? value_previous, value_current ? value_price
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
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void GifBox_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		// ??????? ? ????????? ??????
	
		BinaryTree^ bt = gcnew BinaryTree();
		bt->Show();
	}
};
}
