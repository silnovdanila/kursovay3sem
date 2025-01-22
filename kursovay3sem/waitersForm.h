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

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ chefs;




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





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ nameOFclientBox;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ doOrderLabel;
	private: System::Windows::Forms::TextBox^ numbOForderBox;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ numbOForderTOcloseBox;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ closeOrderLabel;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ numbOForder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFclient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ priceOForder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ readyORnot;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chefs = (gcnew System::Windows::Forms::DataGridView());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nameOFclientBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->doOrderLabel = (gcnew System::Windows::Forms::Label());
			this->numbOForderBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numbOForderTOcloseBox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->closeOrderLabel = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numbOForder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameOFclient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->priceOForder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->readyORnot = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chefs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drinks))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->desserts))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hotdishes))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(572, 41);
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
					this->priceOForder, this->readyORnot
			});
			this->chefs->Location = System::Drawing::Point(577, 75);
			this->chefs->Name = L"chefs";
			this->chefs->RowHeadersVisible = false;
			this->chefs->RowHeadersWidth = 51;
			this->chefs->RowTemplate->Height = 24;
			this->chefs->Size = System::Drawing::Size(670, 259);
			this->chefs->TabIndex = 5;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(579, 351);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 25);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Сделать заказ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(574, 385);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 18);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Введите имя клиента";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(790, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 24);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Сделать заказ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &waitersForm::button1_Click);
			// 
			// nameOFclientBox
			// 
			this->nameOFclientBox->Location = System::Drawing::Point(577, 422);
			this->nameOFclientBox->Name = L"nameOFclientBox";
			this->nameOFclientBox->Size = System::Drawing::Size(151, 22);
			this->nameOFclientBox->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label8->Location = System::Drawing::Point(758, 385);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(183, 18);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Введите номера позиций";
			// 
			// doOrderLabel
			// 
			this->doOrderLabel->AutoSize = true;
			this->doOrderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->doOrderLabel->Location = System::Drawing::Point(577, 462);
			this->doOrderLabel->Name = L"doOrderLabel";
			this->doOrderLabel->Size = System::Drawing::Size(70, 18);
			this->doOrderLabel->TabIndex = 21;
			this->doOrderLabel->Text = L"Успешно";
			this->doOrderLabel->Visible = false;
			// 
			// numbOForderBox
			// 
			this->numbOForderBox->Location = System::Drawing::Point(761, 421);
			this->numbOForderBox->Name = L"numbOForderBox";
			this->numbOForderBox->Size = System::Drawing::Size(180, 22);
			this->numbOForderBox->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(1010, 351);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(149, 25);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Закрыть заказ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1015, 462);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Закрыть заказ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// numbOForderTOcloseBox
			// 
			this->numbOForderTOcloseBox->Location = System::Drawing::Point(1015, 421);
			this->numbOForderTOcloseBox->Name = L"numbOForderTOcloseBox";
			this->numbOForderTOcloseBox->Size = System::Drawing::Size(144, 22);
			this->numbOForderTOcloseBox->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label10->Location = System::Drawing::Point(1012, 385);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(166, 18);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Введите номер заказа";
			// 
			// closeOrderLabel
			// 
			this->closeOrderLabel->AutoSize = true;
			this->closeOrderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->closeOrderLabel->Location = System::Drawing::Point(1198, 462);
			this->closeOrderLabel->Name = L"closeOrderLabel";
			this->closeOrderLabel->Size = System::Drawing::Size(70, 18);
			this->closeOrderLabel->TabIndex = 27;
			this->closeOrderLabel->Text = L"Успешно";
			this->closeOrderLabel->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->label11->Location = System::Drawing::Point(758, 403);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(86, 15);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Пример: 2 3 1";
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
			// readyORnot
			// 
			this->readyORnot->HeaderText = L"Готовность";
			this->readyORnot->MinimumWidth = 6;
			this->readyORnot->Name = L"readyORnot";
			// 
			// waitersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1288, 514);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->closeOrderLabel);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->numbOForderTOcloseBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->numbOForderBox);
			this->Controls->Add(this->doOrderLabel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->nameOFclientBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->drinks);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->desserts);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->hotdishes);
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
			for (int i = 0; i < cafe.getClientsNumb(); i++) {
				chefs->Rows->Add();
				Client client = cafe.getCurrentClient(i);
				chefs->Rows[i]->Cells[0]->Value = Convert::ToString(i + 1);
				chefs->Rows[i]->Cells[1]->Value = gcnew System::String(client.getName().c_str());
				chefs->Rows[i]->Cells[2]->Value = Convert::ToString(client.getPrice());
				chefs->Rows[i]->Cells[3]->Value = Convert::ToString(client.getPrepared());
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->nameOFclientBox->Text != L"" && this->numbOForderBox->Text != L"") {
			int m, i = 0, dish = 0;
			Order* newOrder = new Order;
			System::String ^s = this->numbOForderBox->Text, ^sum;
			while (i < s->Length) {
				if (s[i] == ' ') {
					m = Convert::ToInt32(sum);
					if (m <= cafe.getHotDishesAmount()) {
						newOrder += cafe.getHotDish(m - 1);
					}
					else if (m <= cafe.getHotDishesAmount() + cafe.getdessertAmount()) {
						newOrder += cafe.getdessert(m - cafe.getHotDishesAmount() - 1);
					}
					else {
						newOrder += cafe.getdrink(m - cafe.getHotDishesAmount() - cafe.getdessertAmount() - 1);
					}
					dish += 1;
					sum = "";
				}
				else {
					sum += s[i];
				}
				i++;
			}
			std::string a = "";
			for (int i = 0; i < this->nameOFclientBox->Text->Length; i++) {
				a += this->nameOFclientBox->Text[i];
			}
			int f = 0;
			Client* client;
			for (int i = 0; i < cafe.getClientsNumb(); i++) {
				if (cafe.getClientsName(i) == a) {
					f = 1;
					client = &cafe.getClient(i);
					break;
				}
			}
			if (!f) {
				client = new Client(a, 1);
				cafe.addClient(*client);
			}
			client->setOrder(*newOrder);
			cafe.addCurrentClient(*client);
			this->doOrderLabel->Visible = true;
			this->AddEmpl_Activated(sender, e);
			this->doOrderLabel->Text = L"Успешно";
		}
		else {
			this->doOrderLabel->Visible = true;
			this->doOrderLabel->Text = L"Неуспешно";
		}

	}
};
}
