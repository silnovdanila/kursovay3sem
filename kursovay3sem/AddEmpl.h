#pragma once
#include "Cafe.h"
#include <string>
#include <iostream>

extern Cafe cafe;


namespace kursovay3sem {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для AddEmpl
	/// </summary>
	public ref class AddEmpl : public System::Windows::Forms::Form
	{
	public:
		AddEmpl(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddEmpl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ chefs;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ waiters;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nam1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ salary1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ job1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nam2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ salary2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ job2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ nameOFchef;
	private: System::Windows::Forms::TextBox^ jobOFchef;
	private: System::Windows::Forms::TextBox^ salaryOFchef;
	private: System::Windows::Forms::TextBox^ nameOFwaiter;
	private: System::Windows::Forms::TextBox^ salaryOFwaiter;
	private: System::Windows::Forms::TextBox^ jobOFwaiter;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ addChefResultLabel;
	private: System::Windows::Forms::Label^ addWaiterResultLabel;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ numbOFchef;
	private: System::Windows::Forms::Button^ deleteChef;
	private: System::Windows::Forms::Button^ deleteWaiter;



	private: System::Windows::Forms::TextBox^ numbOFwaiter;
	private: System::Windows::Forms::Label^ deleteChefLabel;
	private: System::Windows::Forms::Label^ deleteWaiterLabel;

	private: static void saveTofile() {
		FILE* f1;
		f1 = fopen("cafe.txt", "w");
		if (f1 != NULL) {
			fprintf(f1, "%s ", Convert::ToString(cafe.getWaiterNumb()));
			for (int i = 0; i < cafe.getWaiterNumb(); i++) {
				fprintf(f1, "%s ", cafe.getWaiterName(i).c_str());
				fprintf(f1, "%s ", Convert::ToString(cafe.getWaiterSalary(i)));
				fprintf(f1, "%s ", cafe.getWaiterJob(i).c_str());
			}
			fprintf(f1, "%s ", Convert::ToString(cafe.getPovaraNumb()));
			for (int i = 0; i < cafe.getPovaraNumb(); i++) {
				fprintf(f1, "%s ", cafe.getPovarName(i).c_str());
				fprintf(f1, "%s ", Convert::ToString(cafe.getPovarSalary(i)));
				fprintf(f1, "%s ", cafe.getPovarJob(i).c_str());
			}
			fprintf(f1, "%s ", Convert::ToString(cafe.getHotDishesAmount()));
			for (int i = 0; i < cafe.getHotDishesAmount(); i++) {
				HotDish* dish = &cafe.getHotDish(i);
				fprintf(f1, "%s ", dish->getName());
				fprintf(f1, "%s ", Convert::ToString(dish->getPrice()));
				fprintf(f1, "%s ", Convert::ToString(dish->getWeight()));
			}
			fprintf(f1, "%s ", Convert::ToString(cafe.getdessertAmount()));
			for (int i = 0; i < cafe.getdessertAmount(); i++) {
				Dessert* dish = &cafe.getdessert(i);
				fprintf(f1, "%s ", dish->getName());
				fprintf(f1, "%s ", Convert::ToString(dish->getPrice()));
				fprintf(f1, "%s ", Convert::ToString(dish->getWeight()));
				fprintf(f1, "%s ", Convert::ToString(dish->getIsSugar()));
			}
			fprintf(f1, "%s ", Convert::ToString(cafe.getdrinkAmount()));
			for (int i = 0; i < cafe.getdrinkAmount(); i++) {
				Drink* dish = &cafe.getdrink(i);
				fprintf(f1, "%s ", dish->getName());
				fprintf(f1, "%s ", Convert::ToString(dish->getPrice()));
				fprintf(f1, "%s ", Convert::ToString(dish->getMl()));
				fprintf(f1, "%s ", Convert::ToString(dish->getAlcohol()));
			}
			fclose(f1);
		}
	}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->chefs = (gcnew System::Windows::Forms::DataGridView());
			this->nam1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->salary1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->job1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->waiters = (gcnew System::Windows::Forms::DataGridView());
			this->nam2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->salary2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->job2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->nameOFchef = (gcnew System::Windows::Forms::TextBox());
			this->jobOFchef = (gcnew System::Windows::Forms::TextBox());
			this->salaryOFchef = (gcnew System::Windows::Forms::TextBox());
			this->nameOFwaiter = (gcnew System::Windows::Forms::TextBox());
			this->salaryOFwaiter = (gcnew System::Windows::Forms::TextBox());
			this->jobOFwaiter = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->addChefResultLabel = (gcnew System::Windows::Forms::Label());
			this->addWaiterResultLabel = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numbOFchef = (gcnew System::Windows::Forms::TextBox());
			this->deleteChef = (gcnew System::Windows::Forms::Button());
			this->deleteWaiter = (gcnew System::Windows::Forms::Button());
			this->numbOFwaiter = (gcnew System::Windows::Forms::TextBox());
			this->deleteChefLabel = (gcnew System::Windows::Forms::Label());
			this->deleteWaiterLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chefs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->waiters))->BeginInit();
			this->SuspendLayout();
			// 
			// chefs
			// 
			this->chefs->AllowUserToAddRows = false;
			this->chefs->AllowUserToDeleteRows = false;
			this->chefs->AllowUserToResizeColumns = false;
			this->chefs->AllowUserToResizeRows = false;
			this->chefs->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->chefs->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->chefs->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->nam1, this->salary1,
					this->job1
			});
			this->chefs->Location = System::Drawing::Point(35, 55);
			this->chefs->Name = L"chefs";
			this->chefs->RowHeadersVisible = false;
			this->chefs->RowHeadersWidth = 51;
			this->chefs->RowTemplate->Height = 24;
			this->chefs->Size = System::Drawing::Size(497, 236);
			this->chefs->TabIndex = 0;
			// 
			// nam1
			// 
			this->nam1->HeaderText = L"Имя";
			this->nam1->MinimumWidth = 6;
			this->nam1->Name = L"nam1";
			// 
			// salary1
			// 
			this->salary1->HeaderText = L"Зарплата";
			this->salary1->MinimumWidth = 6;
			this->salary1->Name = L"salary1";
			// 
			// job1
			// 
			this->job1->HeaderText = L"Должность";
			this->job1->MinimumWidth = 6;
			this->job1->Name = L"job1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(32, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Список поваров";
			this->label1->Click += gcnew System::EventHandler(this, &AddEmpl::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(582, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Список официантов";
			this->label2->Click += gcnew System::EventHandler(this, &AddEmpl::label2_Click);
			// 
			// waiters
			// 
			this->waiters->AllowUserToAddRows = false;
			this->waiters->AllowUserToDeleteRows = false;
			this->waiters->AllowUserToResizeColumns = false;
			this->waiters->AllowUserToResizeRows = false;
			this->waiters->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->waiters->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->waiters->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->nam2, this->salary2,
					this->job2
			});
			this->waiters->Location = System::Drawing::Point(587, 54);
			this->waiters->Name = L"waiters";
			this->waiters->RowHeadersVisible = false;
			this->waiters->RowHeadersWidth = 51;
			this->waiters->RowTemplate->Height = 24;
			this->waiters->Size = System::Drawing::Size(497, 236);
			this->waiters->TabIndex = 2;
			this->waiters->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddEmpl::waiters_CellContentClick);
			// 
			// nam2
			// 
			this->nam2->HeaderText = L"Имя";
			this->nam2->MinimumWidth = 6;
			this->nam2->Name = L"nam2";
			// 
			// salary2
			// 
			this->salary2->HeaderText = L"Зарплата";
			this->salary2->MinimumWidth = 6;
			this->salary2->Name = L"salary2";
			// 
			// job2
			// 
			this->job2->HeaderText = L"Должность";
			this->job2->MinimumWidth = 6;
			this->job2->Name = L"job2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(32, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Добавить повара";
			this->label3->Click += gcnew System::EventHandler(this, &AddEmpl::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(582, 322);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(216, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Добавить официанта";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(373, 322);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Удалить повара";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(881, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(203, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Удалить официанта";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(32, 367);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(262, 18);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Введите имя, зарплату и должность";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label8->Location = System::Drawing::Point(584, 367);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(262, 18);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Введите имя, зарплату и должность";
			// 
			// nameOFchef
			// 
			this->nameOFchef->Location = System::Drawing::Point(37, 408);
			this->nameOFchef->Name = L"nameOFchef";
			this->nameOFchef->Size = System::Drawing::Size(100, 22);
			this->nameOFchef->TabIndex = 9;
			// 
			// jobOFchef
			// 
			this->jobOFchef->Location = System::Drawing::Point(37, 492);
			this->jobOFchef->Name = L"jobOFchef";
			this->jobOFchef->Size = System::Drawing::Size(100, 22);
			this->jobOFchef->TabIndex = 10;
			// 
			// salaryOFchef
			// 
			this->salaryOFchef->Location = System::Drawing::Point(37, 449);
			this->salaryOFchef->Name = L"salaryOFchef";
			this->salaryOFchef->Size = System::Drawing::Size(100, 22);
			this->salaryOFchef->TabIndex = 11;
			// 
			// nameOFwaiter
			// 
			this->nameOFwaiter->Location = System::Drawing::Point(587, 408);
			this->nameOFwaiter->Name = L"nameOFwaiter";
			this->nameOFwaiter->Size = System::Drawing::Size(100, 22);
			this->nameOFwaiter->TabIndex = 12;
			// 
			// salaryOFwaiter
			// 
			this->salaryOFwaiter->Location = System::Drawing::Point(587, 449);
			this->salaryOFwaiter->Name = L"salaryOFwaiter";
			this->salaryOFwaiter->Size = System::Drawing::Size(100, 22);
			this->salaryOFwaiter->TabIndex = 13;
			// 
			// jobOFwaiter
			// 
			this->jobOFwaiter->Location = System::Drawing::Point(587, 492);
			this->jobOFwaiter->Name = L"jobOFwaiter";
			this->jobOFwaiter->Size = System::Drawing::Size(100, 22);
			this->jobOFwaiter->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 538);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddEmpl::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(587, 538);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddEmpl::button2_Click);
			// 
			// addChefResultLabel
			// 
			this->addChefResultLabel->AutoSize = true;
			this->addChefResultLabel->Location = System::Drawing::Point(230, 545);
			this->addChefResultLabel->Name = L"addChefResultLabel";
			this->addChefResultLabel->Size = System::Drawing::Size(64, 16);
			this->addChefResultLabel->TabIndex = 17;
			this->addChefResultLabel->Text = L"Успешно";
			this->addChefResultLabel->Visible = false;
			// 
			// addWaiterResultLabel
			// 
			this->addWaiterResultLabel->AutoSize = true;
			this->addWaiterResultLabel->Location = System::Drawing::Point(782, 541);
			this->addWaiterResultLabel->Name = L"addWaiterResultLabel";
			this->addWaiterResultLabel->Size = System::Drawing::Size(64, 16);
			this->addWaiterResultLabel->TabIndex = 18;
			this->addWaiterResultLabel->Text = L"Успешно";
			this->addWaiterResultLabel->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label9->Location = System::Drawing::Point(365, 367);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(167, 18);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Введите номер повара";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label10->Location = System::Drawing::Point(889, 367);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(195, 18);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Введите номер официанта";
			// 
			// numbOFchef
			// 
			this->numbOFchef->Location = System::Drawing::Point(432, 408);
			this->numbOFchef->Name = L"numbOFchef";
			this->numbOFchef->Size = System::Drawing::Size(100, 22);
			this->numbOFchef->TabIndex = 21;
			// 
			// deleteChef
			// 
			this->deleteChef->Location = System::Drawing::Point(432, 449);
			this->deleteChef->Name = L"deleteChef";
			this->deleteChef->Size = System::Drawing::Size(102, 23);
			this->deleteChef->TabIndex = 22;
			this->deleteChef->Text = L"Удалить";
			this->deleteChef->UseVisualStyleBackColor = true;
			this->deleteChef->Click += gcnew System::EventHandler(this, &AddEmpl::deleteChef_Click);
			// 
			// deleteWaiter
			// 
			this->deleteWaiter->Location = System::Drawing::Point(984, 449);
			this->deleteWaiter->Name = L"deleteWaiter";
			this->deleteWaiter->Size = System::Drawing::Size(102, 23);
			this->deleteWaiter->TabIndex = 24;
			this->deleteWaiter->Text = L"Удалить";
			this->deleteWaiter->UseVisualStyleBackColor = true;
			this->deleteWaiter->Click += gcnew System::EventHandler(this, &AddEmpl::deleteWaiter_Click);
			// 
			// numbOFwaiter
			// 
			this->numbOFwaiter->Location = System::Drawing::Point(984, 408);
			this->numbOFwaiter->Name = L"numbOFwaiter";
			this->numbOFwaiter->Size = System::Drawing::Size(100, 22);
			this->numbOFwaiter->TabIndex = 23;
			// 
			// deleteChefLabel
			// 
			this->deleteChefLabel->AutoSize = true;
			this->deleteChefLabel->Location = System::Drawing::Point(341, 452);
			this->deleteChefLabel->Name = L"deleteChefLabel";
			this->deleteChefLabel->Size = System::Drawing::Size(64, 16);
			this->deleteChefLabel->TabIndex = 25;
			this->deleteChefLabel->Text = L"Успешно";
			this->deleteChefLabel->Visible = false;
			// 
			// deleteWaiterLabel
			// 
			this->deleteWaiterLabel->AutoSize = true;
			this->deleteWaiterLabel->Location = System::Drawing::Point(889, 452);
			this->deleteWaiterLabel->Name = L"deleteWaiterLabel";
			this->deleteWaiterLabel->Size = System::Drawing::Size(64, 16);
			this->deleteWaiterLabel->TabIndex = 26;
			this->deleteWaiterLabel->Text = L"Успешно";
			this->deleteWaiterLabel->Visible = false;
			// 
			// AddEmpl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1196, 606);
			this->Controls->Add(this->deleteWaiterLabel);
			this->Controls->Add(this->deleteChefLabel);
			this->Controls->Add(this->deleteWaiter);
			this->Controls->Add(this->numbOFwaiter);
			this->Controls->Add(this->deleteChef);
			this->Controls->Add(this->numbOFchef);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->addWaiterResultLabel);
			this->Controls->Add(this->addChefResultLabel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->jobOFwaiter);
			this->Controls->Add(this->salaryOFwaiter);
			this->Controls->Add(this->nameOFwaiter);
			this->Controls->Add(this->salaryOFchef);
			this->Controls->Add(this->jobOFchef);
			this->Controls->Add(this->nameOFchef);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->waiters);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chefs);
			this->Name = L"AddEmpl";
			this->Text = L"Добавить работника";
			this->Activated += gcnew System::EventHandler(this, &AddEmpl::AddEmpl_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chefs))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->waiters))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddEmpl_Activated(System::Object^ sender, System::EventArgs^ e) {
		while (0 != chefs->RowCount) chefs->Rows->RemoveAt(0);
		while (0 != waiters->RowCount) waiters->Rows->RemoveAt(0);
		for (int i = 0; i < cafe.getPovaraNumb(); i++) {
			chefs->Rows->Add();
			chefs->Rows[i]->Cells[0]->Value = gcnew System::String(cafe.getPovarName(i).c_str());
			chefs->Rows[i]->Cells[1]->Value = Convert::ToString(cafe.getPovarSalary(i));
			chefs->Rows[i]->Cells[2]->Value = gcnew System::String(cafe.getPovarJob(i).c_str());
		}
		for (int i = 0; i < cafe.getWaiterNumb(); i++) {
			waiters->Rows->Add();
			waiters->Rows[i]->Cells[0]->Value = gcnew System::String(cafe.getWaiterName(i).c_str());
			waiters->Rows[i]->Cells[1]->Value = Convert::ToString(cafe.getWaiterSalary(i));
			waiters->Rows[i]->Cells[2]->Value = gcnew System::String(cafe.getWaiterJob(i).c_str());
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void waiters_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->nameOFchef->Text != L"" && this->jobOFchef->Text != L"" && this->salaryOFchef->Text != L"") {
		std::string a = "";
		std::string b = "";
		for (int i = 0; i < this->nameOFchef->Text->Length; i++) {
			a += this->nameOFchef->Text[i];
		}
		for (int i = 0; i < this->jobOFchef->Text->Length; i++) {
			b += this->jobOFchef->Text[i];
		}
		Chef* chef = new Chef(a, Convert::ToInt32(this->salaryOFchef->Text), b);
		cafe.addPovar(*chef);
		delete chef;
		this->addChefResultLabel->Text = L"Успешно";
		this->addChefResultLabel->Visible = true;
		this->AddEmpl_Activated(sender, e);
		saveTofile();
	}
	else {
		this->addChefResultLabel->Text = L"Неуспешно";
		this->addChefResultLabel->Visible = true;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->nameOFwaiter->Text != L"" && this->jobOFwaiter->Text != L"" && this->salaryOFwaiter->Text != L"") {
		std::string a = "";
		std::string b = "";
		for (int i = 0; i < this->nameOFwaiter->Text->Length; i++) {
			a += this->nameOFwaiter->Text[i];
		}
		for (int i = 0; i < this->jobOFwaiter->Text->Length; i++) {
			b += this->jobOFwaiter->Text[i];
		}
		Waiter* waiter = new Waiter(a, Convert::ToInt32(this->salaryOFwaiter->Text), b);
		cafe.addWaiter(*waiter);
		delete waiter;
		this->addWaiterResultLabel->Text = L"Успешно";
		this->addWaiterResultLabel->Visible = true;
		this->AddEmpl_Activated(sender, e);
		saveTofile();
	}
	else {
		this->addWaiterResultLabel->Text = L"Неуспешно";
		this->addWaiterResultLabel->Visible = true;
	}
}
private: System::Void deleteChef_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->numbOFchef->Text != L"") {
		if (Convert::ToInt32(this->numbOFchef->Text) > 0 && Convert::ToInt32(this->numbOFchef->Text) <= cafe.getPovaraNumb()) {
			cafe.deletePovar(Convert::ToInt32(this->numbOFchef->Text) - 1);
			this->deleteChefLabel->Text = L"Успешно";
			this->deleteChefLabel->Visible = true;
			this->AddEmpl_Activated(sender, e);
			saveTofile();
		}
		else{
			this->deleteChefLabel->Text = L"Неуспешно";
			this->deleteChefLabel->Visible = true;
		}
	}
	else {
		this->deleteChefLabel->Text = L"Неуспешно";
		this->deleteChefLabel->Visible = true;
	}
}
private: System::Void deleteWaiter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->numbOFwaiter->Text != L"") {
		if (Convert::ToInt32(this->numbOFwaiter->Text) > 0 && Convert::ToInt32(this->numbOFwaiter->Text) <= cafe.getWaiterNumb()) {
			cafe.deleteWaiter(Convert::ToInt32(this->numbOFwaiter->Text) - 1);
			this->deleteWaiterLabel->Text = L"Успешно";
			this->deleteWaiterLabel->Visible = true;
			this->AddEmpl_Activated(sender, e);
			saveTofile();
		}
		else {
			this->deleteWaiterLabel->Text = L"Неуспешно";
			this->deleteWaiterLabel->Visible = true;
		}
	}
	else {
		this->deleteWaiterLabel->Text = L"Неуспешно";
		this->deleteWaiterLabel->Visible = true;
	}
}
};
}
