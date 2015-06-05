#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(431, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(402, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(412, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->AutoSize = true;
			this->button1->TabIndex = 2;
			this->button1->Text = L"Zmiana poziomu";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(402, 117);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(350, 168);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(3, 16);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Aplikacja_poczatek( sender,  e);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 int n=0;
				 Graphics^ graph = this->CreateGraphics();
				 Image^ obrazek = Image::FromFile("l1.jpg");
				 graph->DrawImage(obrazek, n, n);
				 Pen^ pioro = gcnew Pen(System::Drawing::Color::AntiqueWhite);
				 graph->DrawRectangle(pioro, 10, 10, 150, 150);
	}
			 private: Form^ okno_startowe;
	System::Void Aplikacja_poczatek(System::Object^ sender, System::EventArgs^ e){
						  okno_startowe = gcnew Form;
						  okno_startowe->Text = "Start";
						  Label^ wstep1 = gcnew Label;
						  Label^ wstep2 = gcnew Label;
						  Label^ wstep3 = gcnew Label;
						  //w³aœciwoœci labelów
						  wstep1->AutoSize = true;
						  wstep1->Location = System::Drawing::Point(200, 10);
						  wstep2->AutoSize = true;
						  wstep1->Location = System::Drawing::Point(210, 10);
						  wstep3->Location = System::Drawing::Point(210, 30);
						  wstep2->Location = System::Drawing::Point(250, 20);
						  wstep1->Size = System::Drawing::Size(33, 33);
						  wstep3->AutoSize = true;
						  wstep1->Text = "Witam w mojej grze 'gra':)";
						  wstep2->Text = "||";
						  wstep3->Text = "Proszê wybraæ poziom trudnoœci:";
						  //koniec labelow
						  //radiobuttony
						  RadioButton^ r1 = gcnew RadioButton;
						  RadioButton^ r2 = gcnew RadioButton;
						  RadioButton^ r3 = gcnew RadioButton;
						  r1->AutoSize = true;
						  r1->Location = System::Drawing::Point(160, 55);
						  r1->Text = L"£atwy poziom";
						  r1->TabIndex = 1;
						  r1->UseVisualStyleBackColor = true;
						  r2->AutoSize = true;
						  r2->Location = System::Drawing::Point(160, 75);
						  r2->Text = L"Œredni poziom";
						  r2->UseVisualStyleBackColor = true;
						  r3->AutoSize = true;
						  r3->Location = System::Drawing::Point(160, 95);
						  r3->Text = L"Trudny poziom";
						  r3->UseVisualStyleBackColor = true;
						  //koniec radio
						  //button
						  Button^ koniec = gcnew Button;
						  koniec->Location = System::Drawing::Point(200, 120);
						  koniec->Size = System::Drawing::Size(75, 23);
						  koniec->TabIndex = 2;
						  koniec->Text = L"OK";
						  koniec->UseVisualStyleBackColor = true;
						  koniec->Click += gcnew EventHandler(this, &Form1::koniec_okna);
						  okno_startowe->Controls->Add(wstep1);
						  okno_startowe->Controls->Add(wstep2);
						  okno_startowe->Controls->Add(wstep3);
						  okno_startowe->Controls->Add(r1);
						  okno_startowe->Controls->Add(r2);
						  okno_startowe->Controls->Add(r3);
						  okno_startowe->Controls->Add(koniec);
						  okno_startowe->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
						  okno_startowe->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
						  okno_startowe->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
						  okno_startowe->ClientSize = System::Drawing::Size(500, 300);
						  okno_startowe->ShowDialog();
					  }
					  
System::Void koniec_okna(System::Object^  sender, System::EventArgs^  e) {
	okno_startowe->Close();
	}
};
}

