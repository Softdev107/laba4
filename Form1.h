﻿#pragma once

#include <map>
#include <string>





//
//
// знаки валют $ ¥ ₽ €
//
//


struct Curs { // Данные актуальных курсо валют на 12.11.22


	struct Sell
	{
		Double dollar = 66.90;
		Double euro = 65.80;

	};

	struct Buy
	{
		Double  dollar = 61.10 ;
		Double euro  = 60.50 ;
	};

	Buy buy;
	Sell sell;



	


};
struct Cusr curs;







namespace CppCLRWinformsProjekt {
	using std::string;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:


		
		

		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(166, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 175);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(194, 175);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(62, 20);
			this->textBox4->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Сумма для конвертации:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Курс обмена [ / ]:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Результат конвертации";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(355, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Направление конвертации";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(89, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"!";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(271, 178);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"!";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(153, 178);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"=";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(316, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Конвертировать";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(434, 179);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(358, 57);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(114, 18);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Доллары в рубли";
			this->radioButton1->UseCompatibleTextRendering = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			this->radioButton1->Click += gcnew System::EventHandler(this, &Form1::radioButton1_Click);
			this->radioButton1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::radioButton1_Paint);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(358, 80);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(111, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Рубли в доллары";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(358, 115);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(91, 17);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Евро в рубли";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(358, 138);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(91, 17);
			this->radioButton4->TabIndex = 18;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Рубли в евро";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 218);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void radioButton1_Click(System::Object^ sender, System::EventArgs^ e) { // Доллары в рубли (продажа)
	label2->Text = "Курс обмена [$/rub]:";
	//textBox1->Text = Curs::Sell::dollar;
	

	
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
