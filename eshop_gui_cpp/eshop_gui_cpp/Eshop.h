#pragma once

namespace eshop_gui_cpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Eshop
	/// </summary>
	public ref class Eshop : public System::Windows::Forms::Form
	{
	public:
		Eshop(void)
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
		~Eshop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;




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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 53);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Print Products\' Catalog";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Eshop::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(207, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Print My Shopping Cart";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Eshop::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(399, 27);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 53);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Orders";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Eshop::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(564, 27);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 53);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Logout";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Eshop::button4_Click);
			// 
			// Eshop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 127);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Name = L"Eshop";
			this->Text = L"Eshop";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
