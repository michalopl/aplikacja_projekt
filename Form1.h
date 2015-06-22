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
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column1;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column2;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column3;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column4;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column5;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column21;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column22;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column23;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column24;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column25;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column26;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column27;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column28;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column31;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column32;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column33;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column34;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column35;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column36;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column37;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column38;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column39;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column310;







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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());

			this->Column21 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());

			this->Column31 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column33 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column36 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column37 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column38 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column39 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column310 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
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
			this->label2->Text = L"Imie";
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
			this->dataGridView1->Location = System::Drawing::Point(50, 50);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->RowTemplate->Height = 50;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			this->dataGridView1->ColumnCount = 5;
			this->dataGridView1->RowCount = 5;
			this->dataGridView1->Size = System::Drawing::Size(253, 253);
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"BadaBoom BB", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column21,
					this->Column22, this->Column23, this->Column24, this->Column25, this->Column26, this->Column27, this->Column28
			});
			this->dataGridView2->Location = System::Drawing::Point(50, 50);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->RowTemplate->Height = 50;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView2_CellContentClick);
			this->dataGridView2->ColumnCount = 8;
			this->dataGridView2->Size = System::Drawing::Size(403, 403);
			this->dataGridView2->RowCount = 8;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column31,
					this->Column32, this->Column33, this->Column34, this->Column35, this->Column36, this->Column37, this->Column38, this->Column39, this->Column310
			});
			this->dataGridView3->Location = System::Drawing::Point(50, 50);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->RowTemplate->Height = 50;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView3_CellContentClick);
			this->dataGridView3->ColumnCount = 10;
			this->dataGridView3->RowCount = 10;
			this->dataGridView3->Size = System::Drawing::Size(503, 503);
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
			// Column21
			// 
			this->Column21->HeaderText = L"Column21";
			this->Column21->Name = L"Column21";
			this->Column21->Width = 50;
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"Column22";
			this->Column22->Name = L"Column22";
			this->Column22->Width = 50;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"Column23";
			this->Column23->Name = L"Column23";
			this->Column23->Width = 50;
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"Column24";
			this->Column24->Name = L"Column24";
			this->Column24->Width = 50;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Column25";
			this->Column25->Name = L"Column25";
			this->Column25->Width = 50;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Column26";
			this->Column26->Name = L"Column26";
			this->Column26->Width = 50;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"Column27";
			this->Column27->Name = L"Column27";
			this->Column27->Width = 50;
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"Column28";
			this->Column28->Name = L"Column28";
			this->Column28->Width = 50;
			// 
			// Column31
			// 
			this->Column31->HeaderText = L"Column31";
			this->Column31->Name = L"Column31";
			this->Column31->Width = 50;
			// 
			// Column32
			// 
			this->Column32->HeaderText = L"Column32";
			this->Column32->Name = L"Column32";
			this->Column32->Width = 50;
			// 
			// Column33
			// 
			this->Column33->HeaderText = L"Column33";
			this->Column33->Name = L"Column33";
			this->Column33->Width = 50;
			// 
			// Column34
			// 
			this->Column34->HeaderText = L"Column34";
			this->Column34->Name = L"Column34";
			this->Column34->Width = 50;
			// 
			// Column35
			// 
			this->Column35->HeaderText = L"Column35";
			this->Column35->Name = L"Column35";
			this->Column35->Width = 50;
			// 
			// Column36
			// 
			this->Column36->HeaderText = L"Column36";
			this->Column36->Name = L"Column36";
			this->Column36->Width = 50;
			// 
			// Column37
			// 
			this->Column37->HeaderText = L"Column37";
			this->Column37->Name = L"Column37";
			this->Column37->Width = 50;
			// 
			// Column38
			// 
			this->Column38->HeaderText = L"Column38";
			this->Column38->Name = L"Column38";
			this->Column38->Width = 50;
			// 
			// Column39
			// 
			this->Column39->HeaderText = L"Column39";
			this->Column39->Name = L"Column39";
			this->Column39->Width = 50;
			// 
			// Column310
			// 
			this->Column310->HeaderText = L"Column310";
			this->Column310->Name = L"Column310";
			this->Column310->Width = 50;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 600);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Das Saper";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: Form^ okno_startowe;
	private: Form^ bomba;
	private: Form^ wygrana;
			 void Aplikacja_poczatek(void){
				 okno_startowe = gcnew Form;
				 okno_startowe->Text = "Start";
				 Label^ wstep1 = gcnew Label;
				 Label^ wstep2 = gcnew Label;
				 Label^ wstep3 = gcnew Label;
				 //właściwości labelów
				 wstep1->AutoSize = true;
				 wstep2->AutoSize = true;
				 wstep1->Location = System::Drawing::Point(50, 10);
				 wstep3->Location = System::Drawing::Point(110, 50);
				 wstep2->Location = System::Drawing::Point(10, 90);
				 wstep1->Size = System::Drawing::Size(33, 33);
				 wstep3->AutoSize = true;
				 wstep3->TabIndex = 0;
				 wstep1->Font = (gcnew System::Drawing::Font(L"FunSized", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 wstep2->Font = (gcnew System::Drawing::Font(L"FunSized", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 wstep3->Font = (gcnew System::Drawing::Font(L"FunSized", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 wstep1->Text = "Witam w mojej grze !!!";
				 wstep2->Text = "wybierz poziom trudnosci:";
				 wstep3->Text = "Wpisz imie oraz";
				 //koniec labelow
				 //radio
				 RadioButton^ r1 = gcnew RadioButton;
				 RadioButton^ r2 = gcnew RadioButton;
				 RadioButton^ r3 = gcnew RadioButton;
				 r1->AutoSize = true;
				 r1->Location = System::Drawing::Point(200, 165);
				 r1->Size = System::Drawing::Size(85, 17);
				 r1->TabIndex = 1;
				 r1->TabStop = true;
				 r1->Text = L"Łatwy poziom";
				 r1->UseVisualStyleBackColor = true;
				 r1->Checked = true;
				 r2->AutoSize = true;
				 r2->Location = System::Drawing::Point(200, 185);
				 r2->Size = System::Drawing::Size(85, 17);
				 r2->TabIndex = 2;
				 r2->TabStop = true;
				 r2->Text = L"Średni poziom";
				 r2->UseVisualStyleBackColor = true;
				 r3->AutoSize = true;
				 r3->Location = System::Drawing::Point(200, 205);
				 r3->Size = System::Drawing::Size(85, 17);
				 r3->TabIndex = 3;
				 r3->TabStop = true;
				 r3->Text = L"Trudny poziom";
				 r3->UseVisualStyleBackColor = true;
				 //koniec radio
				 //buttony, textboxy
				 TextBox^ imie = gcnew TextBox;
				 imie->Location = System::Drawing::Point(200, 140);
				 imie->Name = L"Imię...";
				 imie->Size = System::Drawing::Size(100, 20);
				 imie->TabIndex = 5;
				 imie->AutoSize = true;
				 Button^ koniec = gcnew Button;
				 koniec->Location = System::Drawing::Point(200, 230);
				 koniec->Size = System::Drawing::Size(100, 50);
				 koniec->TabIndex = 4;
				 koniec->Text = L"OK";
				 koniec->UseVisualStyleBackColor = true;
				 koniec->Click += gcnew EventHandler(this, &Form1::koniec_okna);
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
					 label1->Text = "Poziom: Łatwy";
				 else if (r2->Checked)
					 label1->Text = "Poziom: Średni";
				 else if (r3->Checked)
					 label1->Text = "Poziom: Trudny";
				 else
					 label1->Text = "Poziom: Brak";

				 label2->Text = "Gracz: " + imie->Text;
				 Graphics^ graph = this->CreateGraphics();
				 Image^ obrazek_tyt = Image::FromFile("tytul1.jpg");
				 graph->DrawImage(obrazek_tyt, 0, 0);
			 }
			 void Bomba_okno(void){
				 {
					 bomba = gcnew Form;
					 bomba->Text = "BOMBA!!!";
					 Label^ tekst1 = gcnew Label;
					 Label^ tekst2 = gcnew Label;
					 //właściwości labelów
					 tekst1->AutoSize = true;
					 tekst2->AutoSize = true;
					 tekst1->Font = (gcnew System::Drawing::Font(L"FunSized", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 tekst2->Font = (gcnew System::Drawing::Font(L"FunSized", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 tekst1->Location = System::Drawing::Point(80, 20);
					 tekst2->Location = System::Drawing::Point(140, 80);
					 tekst1->Size = System::Drawing::Size(33, 33);
					 tekst1->Text = "Trafiles na bombe!";
					 tekst2->Text = "Przegrales !!!";
					 //koniec labelow
					 Button^ restart = gcnew Button;
					 restart->Location = System::Drawing::Point(200, 160);
					 restart->Size = System::Drawing::Size(100, 50);
					 restart->TabIndex = 4;
					 restart->Text = L"RESTART";
					 restart->UseVisualStyleBackColor = true;
					 restart->Click += gcnew EventHandler(this, &Form1::restart);
					 //koniec

					 Graphics^ graph1 = bomba->CreateGraphics();
					 Image^ obrazek_bom = Image::FromFile("bomb.jpg");
					 graph1->DrawImage(obrazek_bom, 0, 0);

					 bomba->Controls->Add(tekst1);
					 bomba->Controls->Add(tekst2);
					 bomba->Controls->Add(restart);
					 bomba->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
					 bomba->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					 bomba->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					 bomba->ClientSize = System::Drawing::Size(500, 300);
					 bomba->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
					 bomba->ControlBox = false;
					 bomba->DialogResult = System::Windows::Forms::DialogResult::OK;
					 bomba->ShowDialog();
				 }
			 }
			 void Wygrana(void) {
				 wygrana = gcnew Form;
				 wygrana->Text = "GRATULACJE!!!";
				 Label^ tekst11 = gcnew Label;
				 Label^ tekst22 = gcnew Label;
				 //właściwości labelów
				 tekst11->AutoSize = true;
				 tekst22->AutoSize = true;
				 tekst11->Font = (gcnew System::Drawing::Font(L"FunSized", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 tekst22->Font = (gcnew System::Drawing::Font(L"FunSized", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 tekst11->Location = System::Drawing::Point(140, 20);
				 tekst22->Location = System::Drawing::Point(150, 80);
				 tekst11->Size = System::Drawing::Size(33, 33);
				 tekst11->Text = "Udalo Ci sie!";
				 tekst22->Text = "Wygrales !!";
				 //koniec labelow
				 Button^ ok = gcnew Button;
				 ok->Location = System::Drawing::Point(200, 160);
				 ok->Size = System::Drawing::Size(100, 50);
				 ok->TabIndex = 4;
				 ok->Text = L"OK";
				 ok->UseVisualStyleBackColor = true;
				 ok->Click += gcnew EventHandler(this, &Form1::ok);
				 //koniec
				 wygrana->Controls->Add(tekst11);
				 wygrana->Controls->Add(tekst22);
				 wygrana->Controls->Add(ok);
				 wygrana->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 wygrana->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 wygrana->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 wygrana->ClientSize = System::Drawing::Size(500, 300);
				 wygrana->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 wygrana->ControlBox = false;
				 wygrana->DialogResult = System::Windows::Forms::DialogResult::OK;
				 wygrana->ShowDialog();
			 }
#pragma endregion
			 System::Int32 ilosc = 0;
	private: System::Void koniec_okna(System::Object^  sender, System::EventArgs^  e) {
				 okno_startowe->Close();
				 Graphics^ graph = this->CreateGraphics();
				 Image^ obrazek_tyt = Image::FromFile("tytul1.jpg");
				 graph->DrawImage(obrazek_tyt, 0, 0);
	}
	private: System::Void restart(System::Object^  sender, System::EventArgs^  e) {
				 bomba->Close();
				 Reset();
				 button3_Click(sender, e);
	}
	private: System::Void ok(System::Object^  sender, System::EventArgs^  e) {
				 for (System::Int32 i = 0; i < 5; i++){
					 for (System::Int32 j = 0; j < 5; j++){
						 if (poziom_num(i, j) == 100){ dataGridView1->Rows[i]->Cells[j]->Value = "•"; }
					 }
				 }
				 for (System::Int32 i = 0; i < 8; i++){
					 for (System::Int32 j = 0; j < 8; j++){
						 if (poziom_num(i, j) == 100){ dataGridView2->Rows[i]->Cells[j]->Value = "•"; }
					 }
				 }
				 for (System::Int32 i = 0; i < 10; i++){
					 for (System::Int32 j = 0; j < 10; j++){
						 if (poziom_num(i, j) == 100){ dataGridView3->Rows[i]->Cells[j]->Value = "•"; }
					 }
				 }
				 wygrana->Close();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Aplikacja_poczatek();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
	}
	private: System::Void Reset(Void){
				 ilosc = 0;
				 System::Int32 m = 5;
				 for (System::Int32 i = 0; i < m; i++){
					 for (System::Int32 j = 0; j < m; j++){
						 dataGridView1->Rows[i]->Cells[j]->Value = " ";
					 }
				 }
				 m = 8;
				 for (System::Int32 i = 0; i < m; i++){
					 for (System::Int32 j = 0; j < m; j++){
						 dataGridView2->Rows[i]->Cells[j]->Value = " ";
					 }
				 }
				 m = 10;
				 for (System::Int32 i = 0; i < m; i++){
					 for (System::Int32 j = 0; j < m; j++){
						 dataGridView3->Rows[i]->Cells[j]->Value = " ";
					 }
				 }


	}
	private: System::Int32 poziom_num(System::Int32 i, System::Int32 j){
				 System::Int32 a2[10][10], b2[10][10], c2[10][10];
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
				 b2[0][1] = b2[0][2] = b2[0][6] = b2[0][7] = 1;
				 b2[0][0] = b2[0][4] = 100;
				 b2[0][3] = b2[0][5] = 2;
				 b2[1][0] = b2[1][1] = b2[1][2] = b2[1][4] = b2[1][5] = 2;
				 b2[1][3] = b2[1][6] = 100;
				 b2[1][7] = 1;
				 b2[2][0] = 1;
				 b2[2][1] = 100;
				 b2[2][2] = b2[2][4] = b2[2][6] = 3;
				 b2[2][3] = b2[2][5] = b2[2][7] = 2;
				 b2[3][0] = b2[3][1] = 1;
				 b2[3][2] = b2[3][4] = b2[3][6] = 2;
				 b2[3][3] = b2[3][5] = b2[3][7] = 100;
				 b2[4][0] = b2[4][1] = 0;
				 b2[4][2] = b2[4][5] = 1;
				 b2[4][3] = b2[4][6] = b2[4][7] = 2;
				 b2[4][4] = 3;
				 b2[5][0] = b2[5][1] = b2[5][5] = 1;
				 b2[5][2] = b2[5][4] = b2[5][6] = 2;
				 b2[5][3] = b2[5][7] = 100;
				 b2[6][0] = b2[6][3] = b2[6][7] = 1;
				 b2[6][1] = b2[6][5] = 100;
				 b2[6][2] = b2[6][4] = b2[6][6] = 2;
				 b2[7][0] = b2[7][1] = b2[7][2] = b2[7][4] = b2[7][5] = b2[7][6] = 1;
				 b2[7][3] = b2[7][7] = 0;
				 c2[0][0] = c2[0][1] = c2[0][4] = c2[0][5] = 1;
				 c2[0][2] = c2[0][8] = 2;
				 c2[0][3] = c2[0][7] = 100;
				 c2[0][9] = 0;
				 c2[0][6] = 3;
				 c2[1][0] = c2[1][3] = 2;
				 c2[1][2] = c2[1][4] = c2[1][6] = c2[1][8] = 3;
				 c2[1][9] = 1;
				 c2[1][1] = c2[1][5] = c2[1][7] = 100;
				 c2[2][0] = c2[2][3] = c2[2][9] = 100;
				 c2[2][1] = c2[2][2] = c2[2][6] = c2[2][8] = 3;
				 c2[2][4] = c2[2][7] = 2;
				 c2[2][5] = 1;
				 c2[3][0] = c2[3][5] = 1;
				 c2[3][1] = c2[3][3] = c2[3][4] = c2[3][6] = c2[3][9] = 2;
				 c2[3][2] = c2[3][7] = 100;
				 c2[3][8] = 3;
				 c2[4][0] = c2[4][2] = c2[4][3] = c2[4][7] = 1;
				 c2[4][1] = c2[4][4] = c2[4][8] = 2;
				 c2[4][6] = 3;
				 c2[4][5] = c2[4][9] = 100;
				 c2[5][0] = c2[5][5] = 100;
				 c2[5][1] = c2[5][8] = c2[5][9] = 2;
				 c2[5][2] = c2[5][3] = c2[5][7] = 1;
				 c2[5][4] = c2[5][6] = 3;
				 c2[6][0] = c2[6][3] = c2[6][7] = c2[6][9] = 1;
				 c2[6][1] = c2[6][4] = c2[6][6] = 2;
				 c2[6][2] = c2[6][5] = c2[6][8] = 100;
				 c2[7][0] = c2[7][2] = c2[7][3] = c2[7][7] = c2[7][8] = c2[7][9] = 1;
				 c2[7][1] = c2[7][4] = c2[7][5] = c2[7][6] = 2;
				 c2[8][0] = c2[8][5] = 100;
				 c2[8][1] = c2[8][4] = c2[8][6] = c2[8][8] = c2[8][9] = 1;
				 c2[8][2] = c2[8][3] = c2[8][7] = 0;
				 c2[9][0] = c2[9][1] = c2[9][4] = c2[9][5] = c2[9][6] = c2[9][8] = 1;
				 c2[9][2] = c2[9][3] = c2[9][7] = 0;
				 c2[9][9] = 100;
				 if (label1->Text == "Poziom: Łatwy"){
					 return a2[i][j];
				 }
				 else if (label1->Text == "Poziom: Średni"){
					 return b2[i][j];
				 }
				 else if (label1->Text == "Poziom: Trudny"){
					 return c2[i][j];
				 }
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e){

				 if (dataGridView1->CurrentCell->Value == 0 || dataGridView1->CurrentCell->Value == 1 || dataGridView1->CurrentCell->Value == 2 || dataGridView1->CurrentCell->Value == 3)
				 {
				 }
				 else {
					 ilosc++;
					 if (poziom_num(dataGridView1->CurrentCell->RowIndex, dataGridView1->CurrentCell->ColumnIndex) == 100){
						 for (System::Int32 i = 0; i < 5; i++){
							 for (System::Int32 j = 0; j < 5; j++){
								 if (poziom_num(i, j) == 100){ dataGridView1->Rows[i]->Cells[j]->Value = "•"; }
							 }
						 }
						 Bomba_okno();
						 Graphics^ graph1 = bomba->CreateGraphics();
						 Image^ obrazek_bom = Image::FromFile("bomb.jpg");
						 graph1->DrawImage(obrazek_bom, 0, 0);
					 }
					 else{
						 dataGridView1->CurrentCell->Value = poziom_num(dataGridView1->CurrentCell->RowIndex, dataGridView1->CurrentCell->ColumnIndex);
					 }
				 }
				 if (ilosc == 21){
					 Wygrana();
				 }
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e){
				 if (poziom_num(dataGridView2->CurrentCell->RowIndex, dataGridView2->CurrentCell->ColumnIndex) == 100){
					 for (System::Int32 i = 0; i < 8; i++){
						 for (System::Int32 j = 0; j < 8; j++){
							 if (poziom_num(i, j) == 100){
								 dataGridView2->Rows[i]->Cells[j]->Value = "•";
							 }
						 }
					 }
					 Bomba_okno();
				 }
				 else{
					 ilosc++;
					 dataGridView2->CurrentCell->Value = poziom_num(dataGridView2->CurrentCell->RowIndex, dataGridView2->CurrentCell->ColumnIndex);
				 }
				 if (ilosc == 52){
					 Wygrana();
				 }
	}
	private: System::Void dataGridView3_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e){
				 if (poziom_num(dataGridView3->CurrentCell->RowIndex, dataGridView3->CurrentCell->ColumnIndex) == 100){
					 for (System::Int32 i = 0; i < 10; i++){
						 for (System::Int32 j = 0; j < 10; j++){
							 if (poziom_num(i, j) == 100){
								 dataGridView3->Rows[i]->Cells[j]->Value = "•";
							 }
						 }
					 }
					 Bomba_okno();
				 }
				 else{
					 ilosc++;
					 dataGridView3->CurrentCell->Value = poziom_num(dataGridView3->CurrentCell->RowIndex, dataGridView3->CurrentCell->ColumnIndex);
				 }
				 if (ilosc == 80){
					 Wygrana();
				 }
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Controls->Remove(this->dataGridView1);
				 this->Controls->Remove(this->dataGridView2);
				 this->Controls->Remove(this->dataGridView3);
				 Reset();
				 Graphics^ graph = this->CreateGraphics();
				 Image^ obrazek_tyt = Image::FromFile("tytul1.jpg");
				 graph->DrawImage(obrazek_tyt, 0, 0);
				 if (label1->Text == "Poziom: Łatwy"){
					 this->Controls->Add(this->dataGridView1);
				 }
				 else if (label1->Text == "Poziom: Średni"){
					 this->Controls->Add(this->dataGridView2);
				 }
				 else if (label1->Text == "Poziom: Trudny"){
					 this->Controls->Add(this->dataGridView3);
				 }
	}
	};
}

