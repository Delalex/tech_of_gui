#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� BinaryTree
	/// </summary>
	public ref class BinaryTree : public System::Windows::Forms::Form
	{
	public:
		BinaryTree(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
		this->BackgroundImage = Bitmap::FromFile(Application::StartupPath + "\\rainbow.png"); // �������� ����
	}
	};
}
