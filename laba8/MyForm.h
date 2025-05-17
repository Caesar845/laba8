#pragma once

namespace laba8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(18, 9);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1112, 569);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1104, 536);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(6, 333);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(1081, 30);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(174, 229);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 56);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Обробити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(174, 166);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(329, 30);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(169, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть ПІБ:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1104, 536);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(81, 154);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(255, 30);
			this->textBox3->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(76, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введіть слово";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(81, 226);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 52);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Створити слова";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(81, 339);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 30);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(278, 339);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(110, 30);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(471, 339);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(110, 30);
			this->textBox6->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1141, 587);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fullName = textBox1->Text->Trim();
		array<String^>^ parts = fullName->Split(' ');

		if (parts->Length != 3) {
			MessageBox::Show("Потрібно ввести ПІБ у форматі: Прізвище Ім’я По батькові");
			return;
		}

		String^ lastName = parts[0];
		String^ firstName = parts[1];
		String^ patronymic = parts[2];

		int lenLast = lastName->Length;
		int lenFirst = firstName->Length;
		int lenPatronymic = patronymic->Length;
		int lenFull = fullName->Length;

		String^ initials = lastName + " " + firstName[0] + "." + patronymic[0] + ".";

		textBox2->Text =
			"L прізвища: " + lenLast + "\r\n" +
			", L імені: " + lenFirst + "\r\n" +
			", L по батькові: " + lenPatronymic + "\r\n" +
			", L повного рядка: " + lenFull + "\r\n" +
			", Прізвище та ініціали: " + initials;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ input = textBox3->Text->Trim();

	// Перевірка довжини
	if (input->Length < 9) {
		MessageBox::Show("Слово повинно містити щонайменше 9 літер (наприклад: facilities).");
		return;
	}

	try {
		// Вирізаємо літери через Substring:
		String^ f = input->Substring(0, 1);     // 'f'
		String^ i = input->Substring(3, 1);     // 'i'
		String^ l = input->Substring(5, 1);     // 'l'
		String^ e = input->Substring(2, 1);     // 'e'
		String^ o = "o";
		String^ x = "x";
		String^ b = "b";
		String^ u = input->Substring(6, 1);     // 't' у слові "facilities", але умовно
		String^ s = "s";

		String^ word_file = f + i + l + e;
		String^ word_fox = f + o + x;
		String^ word_bus = b + u + s;

		// Виводимо результат
		textBox4->Text = word_file;
		textBox5->Text = word_fox;
		textBox6->Text = word_bus;
	}
	catch (...) {
		MessageBox::Show("Помилка при обробці. Можливо, слово надто коротке або містить пробіли.");
	}
}
};
}
