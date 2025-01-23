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
	/// Сводка для chefsForm
	/// </summary>
	public ref class chefsForm : public System::Windows::Forms::Form
	{
	public:
		chefsForm(void)
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
		~chefsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ chefs;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ numbOForder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFclient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ priceOForder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ positions;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ readyORnot;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ orderPreparedBox;
	private: System::Windows::Forms::Label^ orderPreparedLabel;



	protected:








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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chefs = (gcnew System::Windows::Forms::DataGridView());
			this->numbOForder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameOFclient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->priceOForder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->positions = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->readyORnot = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->orderPreparedBox = (gcnew System::Windows::Forms::TextBox());
			this->orderPreparedLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drinks))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->desserts))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hotdishes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chefs))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 22;
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
			this->drinks->Location = System::Drawing::Point(12, 373);
			this->drinks->Name = L"drinks";
			this->drinks->RowHeadersVisible = false;
			this->drinks->RowHeadersWidth = 51;
			this->drinks->RowTemplate->Height = 24;
			this->drinks->Size = System::Drawing::Size(497, 116);
			this->drinks->TabIndex = 21;
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
			this->label3->Location = System::Drawing::Point(9, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 16);
			this->label3->TabIndex = 20;
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
			this->desserts->Location = System::Drawing::Point(12, 221);
			this->desserts->Name = L"desserts";
			this->desserts->RowHeadersVisible = false;
			this->desserts->RowHeadersWidth = 51;
			this->desserts->RowTemplate->Height = 24;
			this->desserts->Size = System::Drawing::Size(497, 116);
			this->desserts->TabIndex = 19;
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
			this->label5->Location = System::Drawing::Point(14, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 16);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Горячие блюда";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(12, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 25);
			this->label6->TabIndex = 17;
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
			this->hotdishes->Location = System::Drawing::Point(12, 78);
			this->hotdishes->Name = L"hotdishes";
			this->hotdishes->RowHeadersVisible = false;
			this->hotdishes->RowHeadersWidth = 51;
			this->hotdishes->RowTemplate->Height = 24;
			this->hotdishes->Size = System::Drawing::Size(497, 116);
			this->hotdishes->TabIndex = 16;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(579, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 25);
			this->label1->TabIndex = 24;
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
			this->chefs->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->numbOForder, this->nameOFclient,
					this->priceOForder, this->positions, this->readyORnot
			});
			this->chefs->Location = System::Drawing::Point(584, 78);
			this->chefs->Name = L"chefs";
			this->chefs->RowHeadersVisible = false;
			this->chefs->RowHeadersWidth = 51;
			this->chefs->RowTemplate->Height = 24;
			this->chefs->Size = System::Drawing::Size(670, 259);
			this->chefs->TabIndex = 23;
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
			// priceOForder
			// 
			this->priceOForder->HeaderText = L"Цена заказа";
			this->priceOForder->MinimumWidth = 6;
			this->priceOForder->Name = L"priceOForder";
			// 
			// positions
			// 
			this->positions->HeaderText = L"Позиции заказа";
			this->positions->MinimumWidth = 6;
			this->positions->Name = L"positions";
			// 
			// readyORnot
			// 
			this->readyORnot->HeaderText = L"Готовность";
			this->readyORnot->MinimumWidth = 6;
			this->readyORnot->Name = L"readyORnot";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(1112, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 46);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &chefsForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(579, 354);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 25);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Заказ выполнен";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(581, 391);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(290, 18);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Введите номер преготовленного заказа";
			this->label7->Click += gcnew System::EventHandler(this, &chefsForm::label7_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(584, 464);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 24);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Выполнен";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &chefsForm::button2_Click);
			// 
			// orderPreparedBox
			// 
			this->orderPreparedBox->Location = System::Drawing::Point(584, 427);
			this->orderPreparedBox->Name = L"orderPreparedBox";
			this->orderPreparedBox->Size = System::Drawing::Size(100, 22);
			this->orderPreparedBox->TabIndex = 29;
			// 
			// orderPreparedLabel
			// 
			this->orderPreparedLabel->AutoSize = true;
			this->orderPreparedLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->orderPreparedLabel->Location = System::Drawing::Point(738, 466);
			this->orderPreparedLabel->Name = L"orderPreparedLabel";
			this->orderPreparedLabel->Size = System::Drawing::Size(70, 18);
			this->orderPreparedLabel->TabIndex = 30;
			this->orderPreparedLabel->Text = L"Успешно";
			this->orderPreparedLabel->Visible = false;
			// 
			// chefsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1297, 543);
			this->Controls->Add(this->orderPreparedLabel);
			this->Controls->Add(this->orderPreparedBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chefs);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->drinks);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->desserts);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->hotdishes);
			this->Name = L"chefsForm";
			this->Text = L"chefsForm";
			this->Activated += gcnew System::EventHandler(this, &chefsForm::AddEmpl_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drinks))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->desserts))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hotdishes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chefs))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void AddEmpl_Activated(System::Object^ sender, System::EventArgs^ e) {
			while (0 != hotdishes->RowCount) hotdishes->Rows->RemoveAt(0);
			while (0 != desserts->RowCount) desserts->Rows->RemoveAt(0);
			while (0 != drinks->RowCount) drinks->Rows->RemoveAt(0);
			while (0 != chefs->RowCount) chefs->Rows->RemoveAt(0);
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
			for (int i = 0; i < cafe.getCurrentClientNumb(); i++) {
				chefs->Rows->Add();
				Client client = cafe.getCurrentClient(i);
				chefs->Rows[i]->Cells[0]->Value = Convert::ToString(i + 1);
				chefs->Rows[i]->Cells[1]->Value = gcnew System::String(client.getName().c_str());
				chefs->Rows[i]->Cells[2]->Value = Convert::ToString(client.getPrice());
				chefs->Rows[i]->Cells[3]->Value = gcnew System::String(client.getCurrentOrderPositions().c_str());
				chefs->Rows[i]->Cells[4]->Value = Convert::ToString(client.getPrepared());
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AddEmpl_Activated(sender, e);
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->orderPreparedBox->Text != L"") {
		cafe.setPrepared(Convert::ToInt32(this->orderPreparedBox->Text));
		this->AddEmpl_Activated(sender, e);
	}
}
};
}
