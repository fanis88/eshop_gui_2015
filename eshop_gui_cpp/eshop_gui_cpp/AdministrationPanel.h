#pragma once

namespace eshop_gui_cpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdministrationPanel
	/// </summary>
	public ref class AdministrationPanel : public System::Windows::Forms::Form
	{
	public:
		AdministrationPanel(void)
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
		~AdministrationPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create User";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdministrationPanel::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 122);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 53);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Print Products\' Catalog";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdministrationPanel::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(164, 23);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 53);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Add/Remove Product";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdministrationPanel::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(316, 23);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 53);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Update Product";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdministrationPanel::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(468, 23);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 53);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Update Order Status";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdministrationPanel::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(164, 122);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 53);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Print Customers";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdministrationPanel::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(316, 122);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 53);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Print Order Status - Sorted";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AdministrationPanel::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(468, 122);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(112, 53);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Operations\' Cycle";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &AdministrationPanel::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(623, 68);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 53);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Logout";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &AdministrationPanel::button9_Click);
			// 
			// AdministrationPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(775, 225);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"AdministrationPanel";
			this->Text = L"AdministrationPanel";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
