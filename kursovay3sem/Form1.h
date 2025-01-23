#pragma once
#include "Cafe.h"
#include "AddEmpl.h"
#include "changeMenu.h"
#include "waitersForm.h"
#include "chefsForm.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

extern Cafe cafe;

namespace CppCLRWinFormsProject {

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
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ waitersButton;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ chefButton;
	private: System::Windows::Forms::Button^ button1;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->waitersButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chefButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// waitersButton
			// 
			this->waitersButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26));
			this->waitersButton->Location = System::Drawing::Point(502, 136);
			this->waitersButton->Name = L"waitersButton";
			this->waitersButton->Size = System::Drawing::Size(323, 175);
			this->waitersButton->TabIndex = 0;
			this->waitersButton->Text = L"Для официантов";
			this->waitersButton->UseVisualStyleBackColor = true;
			this->waitersButton->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(410, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 58);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Меню";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->button2->Location = System::Drawing::Point(708, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Поменять режим";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(752, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Режим пользователя";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->button3->Location = System::Drawing::Point(844, 326);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 63);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Изменить рабочий состав";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(705, 396);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Введите пароль";
			this->label3->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(708, 415);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 22);
			this->textBox1->TabIndex = 7;
			this->textBox1->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(708, 443);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Подтвердить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(701, 478);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Пароль неверный";
			this->label4->Visible = false;
			// 
			// chefButton
			// 
			this->chefButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26));
			this->chefButton->Location = System::Drawing::Point(170, 136);
			this->chefButton->Name = L"chefButton";
			this->chefButton->Size = System::Drawing::Size(287, 175);
			this->chefButton->TabIndex = 10;
			this->chefButton->Text = L"Для поваров";
			this->chefButton->UseVisualStyleBackColor = true;
			this->chefButton->Click += gcnew System::EventHandler(this, &Form1::chefButton_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->button1->Location = System::Drawing::Point(844, 403);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 63);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Изменить меню";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// Form1
			// 
			FILE* f1;
			int k, l, m;
			char s[40], s1[40], s2[40];
			f1 = fopen("cafe.txt", "r");
			if (f1 != NULL) {
				fscanf(f1, "%s", s);
				k = atoi(s);
				for (int i = 0; i < k; i++) {
					fscanf(f1, "%s", s);
					for (int i = 0; s[i] != 0 && s[i] != ' '; i++) {
						s1[i] = s[i];
						s1[i + 1] = 0;
					}
					fscanf(f1, "%s", s);
					l = atoi(s);
					fscanf(f1, "%s", s);
					for (int i = 0; s[i] != 0 && s[i] != ' '; i++) {
						s2[i] = s[i];
						s2[i + 1] = 0;
					}
					cafe.addWaiter(*new Waiter(s1, l, s2));
				}
				fscanf(f1, "%s", s);
				k = atoi(s);
				for (int i = 0; i < k; i++) {
					fscanf(f1, "%s", s);
					for (int i = 0; s[i] != 0 && s[i] != ' '; i++) {
						s1[i] = s[i];
						s1[i + 1] = 0;
					}
					fscanf(f1, "%s", s);
					l = atoi(s);
					fscanf(f1, "%s", s);
					for (int i = 0; s[i] != 0 && s[i] != ' '; i++) {
						s2[i] = s[i];
						s2[i + 1] = 0;
					}
					cafe.addPovar(*new Chef(s1, l, s2));
				}
				fscanf(f1, "%s", s);
				k = atoi(s);
				for (int i = 0; i < k; i++) {
					fscanf(f1, "%s", s);
					for (int i = 0; s[i] != 0 && s[i] != ' '; i++) {
						s1[i] = s[i];
						s1[i + 1] = 0;
					}
					fscanf(f1, "%s", s);
					l = atoi(s);
					fscanf(f1, "%s", s);
					m = atoi(s);
					cafe.addHotDish(*new HotDish(l, s1, m));
				}
				fscanf(f1, "%s", s);
				k = atoi(s);
				for (int i = 0; i < k; i++) {
					fscanf(f1, "%s", s);
					for (int i = 0; s[i] != 0 && s[i] != ' '; i++) {
						s1[i] = s[i];
						s1[i + 1] = 0;
					}
					fscanf(f1, "%s", s);
					l = atoi(s);
					fscanf(f1, "%s", s);
					m = atoi(s);
					fscanf(f1, "%s", s);
					cafe.addDessert(*new Dessert(l, s1, m, atoi(s)));
				}
				fscanf(f1, "%s", s);
				k = atoi(s);
				for (int i = 0; i < k; i++) {
					fscanf(f1, "%s", s);
					for (int i = 0; s[i] != 0 && s[i] != ' '; i++) {
						s1[i] = s[i];
						s1[i + 1] = 0;
					}
					fscanf(f1, "%s", s);
					l = atoi(s);
					fscanf(f1, "%s", s);
					m = atoi(s);
					fscanf(f1, "%s", s);
					cafe.addDrink(*new Drink(l, s1, m, atoi(s)));
				}
				fclose(f1);
			}
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1014, 536);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chefButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->waitersButton);
			this->Name = L"Form1";
			this->Text = L"Cafe";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		kursovay3sem::waitersForm^ p = gcnew kursovay3sem::waitersForm();
		p->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Visible = true;
		this->label3->Visible = true;
		this->button4->Visible = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		kursovay3sem::AddEmpl^ p = gcnew kursovay3sem::AddEmpl();
		p->Show();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == L"1111") {
		this->textBox1->Visible = false;
		this->label3->Visible = false;
		this->button4->Visible = false;
		this->button2->Visible = false;
		this->button3->Visible = true;
		this->button1->Visible = true;
		this->label4->Visible = false;
		this->label2->Text = L"Режим разработчика";
		this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
	}
	else {
		this->label4->Visible = true;
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	kursovay3sem::changeMenu^ p = gcnew kursovay3sem::changeMenu();
	p->Show();
}
private: System::Void chefButton_Click(System::Object^ sender, System::EventArgs^ e) {
	kursovay3sem::chefsForm^ p = gcnew kursovay3sem::chefsForm();
	p->Show();
}
};
}
