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
			Aplikacja_poczatek();
			
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

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label2;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(805, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(778, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Zmiana poziomu";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(778, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Koniec";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(357, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(372, 83);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(805, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"label2";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: Form^ okno_startowe;
				 void Aplikacja_poczatek(void){
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
					 wstep3->TabIndex = 0;
					 wstep1->Text = "Witam w mojej grze 'gra':)";
					 wstep2->Text = "||";
					 wstep3->Text = "Wpisz imiê oraz wybierz poziom trudnoœci:";
					 //koniec labelow
					 //radio
					 RadioButton^ r1 = gcnew RadioButton;
					 RadioButton^ r2 = gcnew RadioButton;
					 RadioButton^ r3 = gcnew RadioButton;
					 r1->AutoSize = true;
					 r1->Location = System::Drawing::Point(200, 100);
					 r1->Size = System::Drawing::Size(85, 17);
					 r1->TabIndex = 1;
					 r1->TabStop = true;
					 r1->Text = L"£atwy poziom";
					 r1->UseVisualStyleBackColor = true;
					 r1->Checked = true;
					 r2->AutoSize = true;
					 r2->Location = System::Drawing::Point(200, 120);
					 r2->Size = System::Drawing::Size(85, 17);
					 r2->TabIndex = 2;
					 r2->TabStop = true;
					 r2->Text = L"Œredni poziom";
					 r2->UseVisualStyleBackColor = true; 
					 r3->AutoSize = true;
					 r3->Location = System::Drawing::Point(200, 140);
					 r3->Size = System::Drawing::Size(85, 17);
					 r3->TabIndex = 3;
					 r3->TabStop = true;
					 r3->Text = L"Trudny poziom";
					 r3->UseVisualStyleBackColor = true;
					 //koniec radio
					 //buttony, textboxy
					 TextBox^ imie = gcnew TextBox;
					 imie->Location = System::Drawing::Point(200, 50);
					 imie->Name = L"Imiê...";
					 imie->Size = System::Drawing::Size(100, 20);
					 imie->TabIndex = 5;
					 imie->AutoSize = true;
					 Button^ koniec = gcnew Button;
					 koniec->Location = System::Drawing::Point(200, 160);
					 koniec->Size = System::Drawing::Size(100, 50);
					 koniec->TabIndex = 4;
					 koniec->Text = L"OK";
					 koniec->UseVisualStyleBackColor = true;
					 koniec->Click += gcnew EventHandler(this,  &Form1::koniec_okna);
					 //koniec
					 okno_startowe->Controls->Add(wstep1);
					 okno_startowe->Controls->Add(wstep2);
					 okno_startowe->Controls->Add(wstep3);
					 okno_startowe->Controls->Add(imie);
					 okno_startowe->Controls->Add(koniec);
					 okno_startowe->Controls->Add(r1);
					 okno_startowe->Controls->Add(r2);
					 okno_startowe->Controls->Add(r3);
					 okno_startowe->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
					 okno_startowe->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					 okno_startowe->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					 okno_startowe->ClientSize = System::Drawing::Size(500, 300);
					 okno_startowe->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
					 okno_startowe->ControlBox = false;
					 koniec->DialogResult = System::Windows::Forms::DialogResult::OK;
					 okno_startowe->ShowDialog();
					 if (r1->Checked)
						 label1->Text = "Poziom: £atwy";
					 else if (r2->Checked)
						 label1->Text = "Poziom: Œredni";
					 else if (r3->Checked)
						 label1->Text = "Poziom: Trudny";
					 else
						 label1->Text = "Poziom: Brak";
					 label2->Text = "Gracz: "+imie->Text;
				 }
#pragma endregion
		System::Void koniec_okna(System::Object^  sender, System::EventArgs^  e) {
		okno_startowe->Close();
		}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Aplikacja_poczatek();
		}
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
					 Close();
		}

};
}

