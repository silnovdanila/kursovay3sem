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
	/// Сводка для waitersForm
	/// </summary>
	public ref class waitersForm : public System::Windows::Forms::Form
	{
	public:
		waitersForm(void)
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
		~waitersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ chefs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ numbOForder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFclient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFwaiter;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dishes;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ drinks;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFdrink;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ priceOFdrink;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mlOFdrink;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ isAlcoholicDrink;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ desserts;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFdessert;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ priceOFdessert;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ weightOFdessert;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ isSugarDessert;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ hotdishes;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFdish;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ priceOFdish;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ weightOFdish;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chefs = (gcnew System::Windows::Forms::DataGridView());
			this->numbOForder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameOFclient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameOFwaiter = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dishes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->drinks = (gcnew System::Windows::Forms::DataGridView());
			this->nameOFdrink = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->priceOFdrink = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mlOFdrink = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->isAlcoholicDrink = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->desserts = (gcnew System::Windows::Forms::DataGridView());
			this->nameOFdessert = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->priceOFdessert = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->weightOFdessert = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->isSugarDessert = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->hotdishes = (gcnew System::Windows::Forms::DataGridView());
			this->nameOFdish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->priceOFdish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->weightOFdish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chefs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drinks))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->desserts))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hotdishes))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1012, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Официант";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(1015, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(634, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Список заказов";
			// 
			// chefs
			// 
			this->chefs->AllowUserToAddRows = false;
			this->chefs->AllowUserToDeleteRows = false;
			this->chefs->AllowUserToResizeColumns = false;
			this->chefs->AllowUserToResizeRows = false;
			this->chefs->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->chefs->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->chefs->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->numbOForder, this->nameOFclient,
					this->nameOFwaiter, this->dishes
			});
			this->chefs->Location = System::Drawing::Point(639, 75);
			this->chefs->Name = L"chefs";
			this->chefs->RowHeadersVisible = false;
			this->chefs->RowHeadersWidth = 51;
			this->chefs->RowTemplate->Height = 24;
			this->chefs->Size = System::Drawing::Size(497, 236);
			this->chefs->TabIndex = 5;
			// 
			// numbOForder
			// 
			this->numbOForder->HeaderText = L"Номер заказа";
			this->numbOForder->MinimumWidth = 6;
			this->numbOForder->Name = L"numbOForder";
			// 
			// nameOFclient
			// 
			this->nameOFclient->HeaderText = L"Имя клиента";
			this->nameOFclient->MinimumWidth = 6;
			this->nameOFclient->Name = L"nameOFclient";
			// 
			// nameOFwaiter
			// 
			this->nameOFwaiter->HeaderText = L"Имя официанта";
			this->nameOFwaiter->MinimumWidth = 6;
			this->nameOFwaiter->Name = L"nameOFwaiter";
			// 
			// dishes
			// 
			this->dishes->HeaderText = L"Блюда";
			this->dishes->MinimumWidth = 6;
			this->dishes->Name = L"dishes";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 351);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Напитки";
			// 
			// drinks
			// 
			this->drinks->AllowUserToAddRows = false;
			this->drinks->AllowUserToDeleteRows = false;
			this->drinks->AllowUserToResizeColumns = false;
			this->drinks->AllowUserToResizeRows = false;
			this->drinks->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->drinks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->drinks->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nameOFdrink, this->priceOFdrink,
					this->mlOFdrink, this->isAlcoholicDrink
			});
			this->drinks->Location = System::Drawing::Point(12, 370);
			this->drinks->Name = L"drinks";
			this->drinks->RowHeadersVisible = false;
			this->drinks->RowHeadersWidth = 51;
			this->drinks->RowTemplate->Height = 24;
			this->drinks->Size = System::Drawing::Size(497, 116);
			this->drinks->TabIndex = 14;
			// 
			// nameOFdrink
			// 
			this->nameOFdrink->HeaderText = L"Название";
			this->nameOFdrink->MinimumWidth = 6;
			this->nameOFdrink->Name = L"nameOFdrink";
			// 
			// priceOFdrink
			// 
			this->priceOFdrink->HeaderText = L"Цена";
			this->priceOFdrink->MinimumWidth = 6;
			this->priceOFdrink->Name = L"priceOFdrink";
			// 
			// mlOFdrink
			// 
			this->mlOFdrink->HeaderText = L"Объем";
			this->mlOFdrink->MinimumWidth = 6;
			this->mlOFdrink->Name = L"mlOFdrink";
			// 
			// isAlcoholicDrink
			// 
			this->isAlcoholicDrink->HeaderText = L"Есть ли алкоголь";
			this->isAlcoholicDrink->MinimumWidth = 6;
			this->isAlcoholicDrink->Name = L"isAlcoholicDrink";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Дессерты";
			// 
			// desserts
			// 
			this->desserts->AllowUserToAddRows = false;
			this->desserts->AllowUserToDeleteRows = false;
			this->desserts->AllowUserToResizeColumns = false;
			this->desserts->AllowUserToResizeRows = false;
			this->desserts->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->desserts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->desserts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nameOFdessert,
					this->priceOFdessert, this->weightOFdessert, this->isSugarDessert
			});
			this->desserts->Location = System::Drawing::Point(12, 218);
			this->desserts->Name = L"desserts";
			this->desserts->RowHeadersVisible = false;
			this->desserts->RowHeadersWidth = 51;
			this->desserts->RowTemplate->Height = 24;
			this->desserts->Size = System::Drawing::Size(497, 116);
			this->desserts->TabIndex = 12;
			// 
			// nameOFdessert
			// 
			this->nameOFdessert->HeaderText = L"Название";
			this->nameOFdessert->MinimumWidth = 6;
			this->nameOFdessert->Name = L"nameOFdessert";
			// 
			// priceOFdessert
			// 
			this->priceOFdessert->HeaderText = L"Цена";
			this->priceOFdessert->MinimumWidth = 6;
			this->priceOFdessert->Name = L"priceOFdessert";
			// 
			// weightOFdessert
			// 
			this->weightOFdessert->HeaderText = L"Вес блюда";
			this->weightOFdessert->MinimumWidth = 6;
			this->weightOFdessert->Name = L"weightOFdessert";
			// 
			// isSugarDessert
			// 
			this->isSugarDessert->HeaderText = L"Есть ли сахар";
			this->isSugarDessert->MinimumWidth = 6;
			this->isSugarDessert->Name = L"isSugarDessert";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Горячие блюда";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(12, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"МЕНЮ";
			// 
			// hotdishes
			// 
			this->hotdishes->AllowUserToAddRows = false;
			this->hotdishes->AllowUserToDeleteRows = false;
			this->hotdishes->AllowUserToResizeColumns = false;
			this->hotdishes->AllowUserToResizeRows = false;
			this->hotdishes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->hotdishes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->hotdishes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->nameOFdish,
					this->priceOFdish, this->weightOFdish
			});
			this->hotdishes->Location = System::Drawing::Point(12, 75);
			this->hotdishes->Name = L"hotdishes";
			this->hotdishes->RowHeadersVisible = false;
			this->hotdishes->RowHeadersWidth = 51;
			this->hotdishes->RowTemplate->Height = 24;
			this->hotdishes->Size = System::Drawing::Size(497, 116);
			this->hotdishes->TabIndex = 9;
			// 
			// nameOFdish
			// 
			this->nameOFdish->HeaderText = L"Название";
			this->nameOFdish->MinimumWidth = 6;
			this->nameOFdish->Name = L"nameOFdish";
			// 
			// priceOFdish
			// 
			this->priceOFdish->HeaderText = L"Цена";
			this->priceOFdish->MinimumWidth = 6;
			this->priceOFdish->Name = L"priceOFdish";
			// 
			// weightOFdish
			// 
			this->weightOFdish->HeaderText = L"Вес блюда";
			this->weightOFdish->MinimumWidth = 6;
			this->weightOFdish->Name = L"weightOFdish";
			// 
			// waitersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 571);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->drinks);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->desserts);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->hotdishes);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chefs);
			this->Name = L"waitersForm";
			this->Text = L"waitersForm";
			this->Activated += gcnew System::EventHandler(this, &waitersForm::AddEmpl_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chefs))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drinks))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->desserts))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hotdishes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void AddEmpl_Activated(System::Object^ sender, System::EventArgs^ e) {
			this->comboBox1->Items->Clear();
			for (int i = 0; i < cafe.getWaiterNumb(); i++) {
				this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { gcnew System::String(cafe.getWaiterName(i).c_str()) });
			}
			while (0 != hotdishes->RowCount) hotdishes->Rows->RemoveAt(0);
			while (0 != desserts->RowCount) desserts->Rows->RemoveAt(0);
			while (0 != drinks->RowCount) drinks->Rows->RemoveAt(0);
			for (int i = 0; i < cafe.getHotDishesAmount(); i++) {
				hotdishes->Rows->Add();
				HotDish dish = cafe.getHotDish(i);
				hotdishes->Rows[i]->Cells[0]->Value = gcnew System::String(dish.getName().c_str());
				hotdishes->Rows[i]->Cells[1]->Value = Convert::ToString(dish.getPrice());
				hotdishes->Rows[i]->Cells[2]->Value = Convert::ToString(dish.getWeight());
			}
			for (int i = 0; i < cafe.getdessertAmount(); i++) {
				desserts->Rows->Add();
				Dessert dish = cafe.getdessert(i);
				desserts->Rows[i]->Cells[0]->Value = gcnew System::String(dish.getName().c_str());
				desserts->Rows[i]->Cells[1]->Value = Convert::ToString(dish.getPrice());
				desserts->Rows[i]->Cells[2]->Value = Convert::ToString(dish.getWeight());
				desserts->Rows[i]->Cells[3]->Value = Convert::ToString(dish.getIsSugar());
			}
			for (int i = 0; i < cafe.getdrinkAmount(); i++) {
				drinks->Rows->Add();
				Drink dish = cafe.getdrink(i);
				drinks->Rows[i]->Cells[0]->Value = gcnew System::String(dish.getName().c_str());
				drinks->Rows[i]->Cells[1]->Value = Convert::ToString(dish.getPrice());
				drinks->Rows[i]->Cells[2]->Value = Convert::ToString(dish.getMl());
				drinks->Rows[i]->Cells[3]->Value = Convert::ToString(dish.getAlcohol());
			}
		}
	};
}
