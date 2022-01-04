#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BinaryTree
	/// </summary>
	public ref class BinaryTree : public System::Windows::Forms::Form
	{
	public:
		BinaryTree(void)
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
		~BinaryTree()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// BinaryTree
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1298, 546);
			this->Name = L"BinaryTree";
			this->Text = L"BinaryTree";
			this->Load += gcnew System::EventHandler(this, &BinaryTree::BinaryTree_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BinaryTree_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		this->BackgroundImage = Bitmap::FromFile(Application::StartupPath + "\\rainbow.png"); // Загрузка фона
	}
	};
}
