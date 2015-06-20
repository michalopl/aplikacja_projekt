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


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column1;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column2;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column3;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column4;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column5;








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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(576, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Poziom";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(579, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Zmiana poziomu";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(579, 340);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Koniec";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(576, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Imiê";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(579, 160);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"START";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(100, 49);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(253, 253);
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->RowTemplate->Height = 50;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 50;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 561);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
		private: System::Void koniec_okna(System::Object^  sender, System::EventArgs^  e) {
		okno_startowe->Close();
		}
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Aplikacja_poczatek();
		}
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
					 Close();
		}
		public: System::Void latwy_poziom(Void){
							 dataGridView1->ColumnCount = 5;
							 dataGridView1->RowCount = 5;
				 }
		public: System::Int32 latwy_poziom_num(System::Int32 i,System::Int32 j){
					 System::Int32 a2[10][10];
					 System::Char a1[10][10];
					 a2[0][0] = 1;
					 a2[0][1] = 100;
					 a2[0][2] = 1;
					 a2[0][3] = 0;
					 a2[0][4] = 0;
					 a2[1][0] = 1;
					 a2[1][1] = 1;
					 a2[1][2] = 1;
					 a2[1][3] = 1;
					 a2[1][4] = 1;
					 a2[2][0] = 0;
					 a2[2][1] = 1;
					 a2[2][2] = 1;
					 a2[2][3] = 3;
					 a2[2][4] = 100;
					 a2[3][0] = 0;
					 a2[3][1] = 1;
					 a2[3][2] = 100;
					 a2[3][3] = 3;
					 a2[3][4] = 100;
					 a2[4][0] = 0;
					 a2[4][1] = 1;
					 a2[4][2] = 1;
					 a2[4][3] = 2;
					 a2[4][4] = 1;
					 return a2[i][j];
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e){
				 dataGridView1->CurrentCell->Value = latwy_poziom_num(dataGridView1->CurrentCell->RowIndex,dataGridView1->CurrentCell->ColumnIndex);
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Controls->Add(this->dataGridView1);
			latwy_poziom();
			 
}
};
}

