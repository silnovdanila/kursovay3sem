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
	/// Сводка для changeMenu
	/// </summary>
	public ref class changeMenu : public System::Windows::Forms::Form
	{
	public:
		changeMenu(void)
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
		~changeMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ hotdishes;
	protected:

	protected:
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



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFdish;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ priceOFdish;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ weightOFdish;
	private: System::Windows::Forms::DataGridView^ desserts;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFdessert;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ priceOFdessert;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ weightOFdessert;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ isSugarDessert;
	private: System::Windows::Forms::DataGridView^ drinks;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameOFdrink;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ priceOFdrink;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ mlOFdrink;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ isAlcoholicDrink;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ nameOFhotDishTOadd;
	private: System::Windows::Forms::TextBox^ priceOFhotDishTOadd;
	private: System::Windows::Forms::TextBox^ weightOFhotDishTOadd;



	private: System::Windows::Forms::Button^ hotdishADDbutton;
	private: System::Windows::Forms::Label^ hotdishADDlabel;


	private: System::Windows::Forms::Label^ dessertADDlabel;

	private: System::Windows::Forms::Button^ dessertADDbutton;

	private: System::Windows::Forms::TextBox^ weightOFdessertTOadd;

	private: System::Windows::Forms::TextBox^ priceOFdessertTOadd;

	private: System::Windows::Forms::TextBox^ nameOFdessertTOadd;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ sugarOFdessertTOadd;
	private: System::Windows::Forms::TextBox^ alcoholOFdrinkTOadd;


	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ drinkADDlabel;

	private: System::Windows::Forms::Button^ drinkADDbutton;

	private: System::Windows::Forms::TextBox^ mlOFdrinkTOadd;

	private: System::Windows::Forms::TextBox^ priceOFdrinkTOadd;

	private: System::Windows::Forms::TextBox^ nameOFdrinkTOadd;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ deleteHotDish;
private: System::Windows::Forms::TextBox^ deleteDessert;
private: System::Windows::Forms::TextBox^ deleteDrink;
private: System::Windows::Forms::Label^ deleteHotDishLabel;
private: System::Windows::Forms::Label^ deleteDessertLabel;
private: System::Windows::Forms::Label^ deleteDrinkLabel;
private: System::Windows::Forms::Button^ deleteHotDishButton;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;

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
			this->hotdishes = (gcnew System::Windows::Forms::DataGridView());
			this->nameOFdish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->priceOFdish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->weightOFdish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->desserts = (gcnew System::Windows::Forms::DataGridView());
			this->nameOFdessert = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->priceOFdessert = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->weightOFdessert = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->isSugarDessert = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->drinks = (gcnew System::Windows::Forms::DataGridView());
			this->nameOFdrink = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->priceOFdrink = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mlOFdrink = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->isAlcoholicDrink = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->nameOFhotDishTOadd = (gcnew System::Windows::Forms::TextBox());
			this->priceOFhotDishTOadd = (gcnew System::Windows::Forms::TextBox());
			this->weightOFhotDishTOadd = (gcnew System::Windows::Forms::TextBox());
			this->hotdishADDbutton = (gcnew System::Windows::Forms::Button());
			this->hotdishADDlabel = (gcnew System::Windows::Forms::Label());
			this->dessertADDlabel = (gcnew System::Windows::Forms::Label());
			this->dessertADDbutton = (gcnew System::Windows::Forms::Button());
			this->weightOFdessertTOadd = (gcnew System::Windows::Forms::TextBox());
			this->priceOFdessertTOadd = (gcnew System::Windows::Forms::TextBox());
			this->nameOFdessertTOadd = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->sugarOFdessertTOadd = (gcnew System::Windows::Forms::TextBox());
			this->alcoholOFdrinkTOadd = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->drinkADDlabel = (gcnew System::Windows::Forms::Label());
			this->drinkADDbutton = (gcnew System::Windows::Forms::Button());
			this->mlOFdrinkTOadd = (gcnew System::Windows::Forms::TextBox());
			this->priceOFdrinkTOadd = (gcnew System::Windows::Forms::TextBox());
			this->nameOFdrinkTOadd = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->deleteHotDish = (gcnew System::Windows::Forms::TextBox());
			this->deleteDessert = (gcnew System::Windows::Forms::TextBox());
			this->deleteDrink = (gcnew System::Windows::Forms::TextBox());
			this->deleteHotDishLabel = (gcnew System::Windows::Forms::Label());
			this->deleteDessertLabel = (gcnew System::Windows::Forms::Label());
			this->deleteDrinkLabel = (gcnew System::Windows::Forms::Label());
			this->deleteHotDishButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hotdishes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->desserts))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drinks))->BeginInit();
			this->SuspendLayout();
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
			this->hotdishes->TabIndex = 2;
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
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"МЕНЮ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Горячие блюда";
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
			this->desserts->TabIndex = 5;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Дессерты";
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
			this->drinks->TabIndex = 7;
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
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 351);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Напитки";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(541, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(171, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Добавить горячее блюдо";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(541, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Название";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(686, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 16);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Цена";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(833, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 16);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Вес";
			// 
			// nameOFhotDishTOadd
			// 
			this->nameOFhotDishTOadd->Location = System::Drawing::Point(544, 125);
			this->nameOFhotDishTOadd->Name = L"nameOFhotDishTOadd";
			this->nameOFhotDishTOadd->Size = System::Drawing::Size(100, 22);
			this->nameOFhotDishTOadd->TabIndex = 13;
			this->nameOFhotDishTOadd->TextChanged += gcnew System::EventHandler(this, &changeMenu::nameOFhotDish_TextChanged);
			// 
			// priceOFhotDishTOadd
			// 
			this->priceOFhotDishTOadd->Location = System::Drawing::Point(689, 125);
			this->priceOFhotDishTOadd->Name = L"priceOFhotDishTOadd";
			this->priceOFhotDishTOadd->Size = System::Drawing::Size(100, 22);
			this->priceOFhotDishTOadd->TabIndex = 14;
			// 
			// weightOFhotDishTOadd
			// 
			this->weightOFhotDishTOadd->Location = System::Drawing::Point(836, 125);
			this->weightOFhotDishTOadd->Name = L"weightOFhotDishTOadd";
			this->weightOFhotDishTOadd->Size = System::Drawing::Size(100, 22);
			this->weightOFhotDishTOadd->TabIndex = 15;
			// 
			// hotdishADDbutton
			// 
			this->hotdishADDbutton->Location = System::Drawing::Point(544, 167);
			this->hotdishADDbutton->Name = L"hotdishADDbutton";
			this->hotdishADDbutton->Size = System::Drawing::Size(100, 23);
			this->hotdishADDbutton->TabIndex = 16;
			this->hotdishADDbutton->Text = L"Добавить";
			this->hotdishADDbutton->UseVisualStyleBackColor = true;
			this->hotdishADDbutton->Click += gcnew System::EventHandler(this, &changeMenu::hotdishADDbutton_Click);
			// 
			// hotdishADDlabel
			// 
			this->hotdishADDlabel->AutoSize = true;
			this->hotdishADDlabel->Location = System::Drawing::Point(686, 170);
			this->hotdishADDlabel->Name = L"hotdishADDlabel";
			this->hotdishADDlabel->Size = System::Drawing::Size(64, 16);
			this->hotdishADDlabel->TabIndex = 17;
			this->hotdishADDlabel->Text = L"Успешно";
			this->hotdishADDlabel->Visible = false;
			// 
			// dessertADDlabel
			// 
			this->dessertADDlabel->AutoSize = true;
			this->dessertADDlabel->Location = System::Drawing::Point(686, 332);
			this->dessertADDlabel->Name = L"dessertADDlabel";
			this->dessertADDlabel->Size = System::Drawing::Size(64, 16);
			this->dessertADDlabel->TabIndex = 26;
			this->dessertADDlabel->Text = L"Успешно";
			this->dessertADDlabel->Visible = false;
			// 
			// dessertADDbutton
			// 
			this->dessertADDbutton->Location = System::Drawing::Point(544, 329);
			this->dessertADDbutton->Name = L"dessertADDbutton";
			this->dessertADDbutton->Size = System::Drawing::Size(100, 23);
			this->dessertADDbutton->TabIndex = 25;
			this->dessertADDbutton->Text = L"Добавить";
			this->dessertADDbutton->UseVisualStyleBackColor = true;
			this->dessertADDbutton->Click += gcnew System::EventHandler(this, &changeMenu::dessertADDbutton_Click);
			// 
			// weightOFdessertTOadd
			// 
			this->weightOFdessertTOadd->Location = System::Drawing::Point(764, 287);
			this->weightOFdessertTOadd->Name = L"weightOFdessertTOadd";
			this->weightOFdessertTOadd->Size = System::Drawing::Size(83, 22);
			this->weightOFdessertTOadd->TabIndex = 24;
			// 
			// priceOFdessertTOadd
			// 
			this->priceOFdessertTOadd->Location = System::Drawing::Point(650, 287);
			this->priceOFdessertTOadd->Name = L"priceOFdessertTOadd";
			this->priceOFdessertTOadd->Size = System::Drawing::Size(88, 22);
			this->priceOFdessertTOadd->TabIndex = 23;
			// 
			// nameOFdessertTOadd
			// 
			this->nameOFdessertTOadd->Location = System::Drawing::Point(544, 287);
			this->nameOFdessertTOadd->Name = L"nameOFdessertTOadd";
			this->nameOFdessertTOadd->Size = System::Drawing::Size(89, 22);
			this->nameOFdessertTOadd->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(761, 258);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 16);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Вес";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(647, 258);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 16);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Цена";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(541, 258);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 16);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Название";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(541, 218);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(126, 16);
			this->label14->TabIndex = 18;
			this->label14->Text = L"Добавить дессерт";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(868, 258);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 16);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Сахар";
			// 
			// sugarOFdessertTOadd
			// 
			this->sugarOFdessertTOadd->Location = System::Drawing::Point(871, 287);
			this->sugarOFdessertTOadd->Name = L"sugarOFdessertTOadd";
			this->sugarOFdessertTOadd->Size = System::Drawing::Size(83, 22);
			this->sugarOFdessertTOadd->TabIndex = 28;
			// 
			// alcoholOFdrinkTOadd
			// 
			this->alcoholOFdrinkTOadd->Location = System::Drawing::Point(871, 438);
			this->alcoholOFdrinkTOadd->Name = L"alcoholOFdrinkTOadd";
			this->alcoholOFdrinkTOadd->Size = System::Drawing::Size(83, 22);
			this->alcoholOFdrinkTOadd->TabIndex = 39;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(868, 409);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(68, 16);
			this->label16->TabIndex = 38;
			this->label16->Text = L"Алкоголь";
			// 
			// drinkADDlabel
			// 
			this->drinkADDlabel->AutoSize = true;
			this->drinkADDlabel->Location = System::Drawing::Point(686, 483);
			this->drinkADDlabel->Name = L"drinkADDlabel";
			this->drinkADDlabel->Size = System::Drawing::Size(64, 16);
			this->drinkADDlabel->TabIndex = 37;
			this->drinkADDlabel->Text = L"Успешно";
			this->drinkADDlabel->Visible = false;
			// 
			// drinkADDbutton
			// 
			this->drinkADDbutton->Location = System::Drawing::Point(544, 480);
			this->drinkADDbutton->Name = L"drinkADDbutton";
			this->drinkADDbutton->Size = System::Drawing::Size(100, 23);
			this->drinkADDbutton->TabIndex = 36;
			this->drinkADDbutton->Text = L"Добавить";
			this->drinkADDbutton->UseVisualStyleBackColor = true;
			this->drinkADDbutton->Click += gcnew System::EventHandler(this, &changeMenu::drinkADDbutton_Click);
			// 
			// mlOFdrinkTOadd
			// 
			this->mlOFdrinkTOadd->Location = System::Drawing::Point(764, 438);
			this->mlOFdrinkTOadd->Name = L"mlOFdrinkTOadd";
			this->mlOFdrinkTOadd->Size = System::Drawing::Size(83, 22);
			this->mlOFdrinkTOadd->TabIndex = 35;
			// 
			// priceOFdrinkTOadd
			// 
			this->priceOFdrinkTOadd->Location = System::Drawing::Point(650, 438);
			this->priceOFdrinkTOadd->Name = L"priceOFdrinkTOadd";
			this->priceOFdrinkTOadd->Size = System::Drawing::Size(88, 22);
			this->priceOFdrinkTOadd->TabIndex = 34;
			// 
			// nameOFdrinkTOadd
			// 
			this->nameOFdrinkTOadd->Location = System::Drawing::Point(544, 438);
			this->nameOFdrinkTOadd->Name = L"nameOFdrinkTOadd";
			this->nameOFdrinkTOadd->Size = System::Drawing::Size(89, 22);
			this->nameOFdrinkTOadd->TabIndex = 33;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(761, 409);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 16);
			this->label18->TabIndex = 32;
			this->label18->Text = L"Объем";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(647, 409);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 16);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Цена";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(541, 409);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(73, 16);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Название";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(541, 369);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(127, 16);
			this->label21->TabIndex = 29;
			this->label21->Text = L"Добавить напиток";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 521);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(163, 16);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Удалить горячее блюдо";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(293, 521);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(118, 16);
			this->label10->TabIndex = 41;
			this->label10->Text = L"Удалить дессерт";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(541, 521);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(119, 16);
			this->label17->TabIndex = 42;
			this->label17->Text = L"Удалить напиток";
			// 
			// deleteHotDish
			// 
			this->deleteHotDish->Location = System::Drawing::Point(20, 558);
			this->deleteHotDish->Name = L"deleteHotDish";
			this->deleteHotDish->Size = System::Drawing::Size(100, 22);
			this->deleteHotDish->TabIndex = 43;
			// 
			// deleteDessert
			// 
			this->deleteDessert->Location = System::Drawing::Point(296, 558);
			this->deleteDessert->Name = L"deleteDessert";
			this->deleteDessert->Size = System::Drawing::Size(100, 22);
			this->deleteDessert->TabIndex = 44;
			// 
			// deleteDrink
			// 
			this->deleteDrink->Location = System::Drawing::Point(544, 558);
			this->deleteDrink->Name = L"deleteDrink";
			this->deleteDrink->Size = System::Drawing::Size(100, 22);
			this->deleteDrink->TabIndex = 45;
			// 
			// deleteHotDishLabel
			// 
			this->deleteHotDishLabel->AutoSize = true;
			this->deleteHotDishLabel->Location = System::Drawing::Point(168, 561);
			this->deleteHotDishLabel->Name = L"deleteHotDishLabel";
			this->deleteHotDishLabel->Size = System::Drawing::Size(64, 16);
			this->deleteHotDishLabel->TabIndex = 46;
			this->deleteHotDishLabel->Text = L"Успешно";
			this->deleteHotDishLabel->Visible = false;
			// 
			// deleteDessertLabel
			// 
			this->deleteDessertLabel->AutoSize = true;
			this->deleteDessertLabel->Location = System::Drawing::Point(429, 558);
			this->deleteDessertLabel->Name = L"deleteDessertLabel";
			this->deleteDessertLabel->Size = System::Drawing::Size(64, 16);
			this->deleteDessertLabel->TabIndex = 47;
			this->deleteDessertLabel->Text = L"Успешно";
			this->deleteDessertLabel->Visible = false;
			// 
			// deleteDrinkLabel
			// 
			this->deleteDrinkLabel->AutoSize = true;
			this->deleteDrinkLabel->Location = System::Drawing::Point(686, 558);
			this->deleteDrinkLabel->Name = L"deleteDrinkLabel";
			this->deleteDrinkLabel->Size = System::Drawing::Size(64, 16);
			this->deleteDrinkLabel->TabIndex = 48;
			this->deleteDrinkLabel->Text = L"Успешно";
			this->deleteDrinkLabel->Visible = false;
			// 
			// deleteHotDishButton
			// 
			this->deleteHotDishButton->Location = System::Drawing::Point(20, 590);
			this->deleteHotDishButton->Name = L"deleteHotDishButton";
			this->deleteHotDishButton->Size = System::Drawing::Size(100, 23);
			this->deleteHotDishButton->TabIndex = 49;
			this->deleteHotDishButton->Text = L"Удалить";
			this->deleteHotDishButton->UseVisualStyleBackColor = true;
			this->deleteHotDishButton->Click += gcnew System::EventHandler(this, &changeMenu::deleteHotDishButton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(296, 590);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 50;
			this->button1->Text = L"Удалить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &changeMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(544, 590);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 51;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &changeMenu::button2_Click);
			// 
			// changeMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(967, 625);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->deleteHotDishButton);
			this->Controls->Add(this->deleteDrinkLabel);
			this->Controls->Add(this->deleteDessertLabel);
			this->Controls->Add(this->deleteHotDishLabel);
			this->Controls->Add(this->deleteDrink);
			this->Controls->Add(this->deleteDessert);
			this->Controls->Add(this->deleteHotDish);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->alcoholOFdrinkTOadd);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->drinkADDlabel);
			this->Controls->Add(this->drinkADDbutton);
			this->Controls->Add(this->mlOFdrinkTOadd);
			this->Controls->Add(this->priceOFdrinkTOadd);
			this->Controls->Add(this->nameOFdrinkTOadd);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->sugarOFdessertTOadd);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->dessertADDlabel);
			this->Controls->Add(this->dessertADDbutton);
			this->Controls->Add(this->weightOFdessertTOadd);
			this->Controls->Add(this->priceOFdessertTOadd);
			this->Controls->Add(this->nameOFdessertTOadd);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->hotdishADDlabel);
			this->Controls->Add(this->hotdishADDbutton);
			this->Controls->Add(this->weightOFhotDishTOadd);
			this->Controls->Add(this->priceOFhotDishTOadd);
			this->Controls->Add(this->nameOFhotDishTOadd);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->drinks);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->desserts);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->hotdishes);
			this->Name = L"changeMenu";
			this->Text = L"changeMenu";
			this->Activated += gcnew System::EventHandler(this, &changeMenu::AddEmpl_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hotdishes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->desserts))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drinks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void nameOFhotDish_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void AddEmpl_Activated(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void hotdishADDbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->nameOFhotDishTOadd->Text != L"" && this->weightOFhotDishTOadd->Text != L"" && this->priceOFhotDishTOadd->Text != L"") {
		std::string a = "";
		for (int i = 0; i < this->nameOFhotDishTOadd->Text->Length; i++) {
			a += this->nameOFhotDishTOadd->Text[i];
		}
		HotDish* dish = new HotDish( Convert::ToInt32(this->priceOFhotDishTOadd->Text), a, Convert::ToInt32(this->weightOFhotDishTOadd->Text));
		cafe.addHotDish(*dish);
		delete dish;
		this->hotdishADDlabel->Text = L"Успешно";
		this->hotdishADDlabel->Visible = true;
		this->AddEmpl_Activated(sender, e);
		saveTofile();
	}
	else {
		this->hotdishADDlabel->Text = L"Неуспешно";
		this->hotdishADDlabel->Visible = true;
	}
}
private: System::Void dessertADDbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->nameOFdessertTOadd->Text != L"" && this->weightOFdessertTOadd->Text != L"" && this->priceOFdessertTOadd->Text != L"" && this->sugarOFdessertTOadd->Text != L"") {
		std::string a = "";
		for (int i = 0; i < this->nameOFdessertTOadd->Text->Length; i++) {
			a += this->nameOFdessertTOadd->Text[i];
		}
		Dessert* dish = new Dessert(Convert::ToInt32(this->priceOFdessertTOadd->Text), a, Convert::ToInt32(this->weightOFdessertTOadd->Text), Convert::ToInt32(this->sugarOFdessertTOadd->Text));
		cafe.addDessert(*dish);
		delete dish;
		this->dessertADDlabel->Text = L"Успешно";
		this->dessertADDlabel->Visible = true;
		this->AddEmpl_Activated(sender, e);
		saveTofile();
	}
	else {
		this->dessertADDlabel->Text = L"Неуспешно";
		this->dessertADDlabel->Visible = true;
	}
}
private: System::Void drinkADDbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->nameOFdrinkTOadd->Text != L"" && this->mlOFdrinkTOadd->Text != L"" && this->priceOFdrinkTOadd->Text != L"" && this->alcoholOFdrinkTOadd->Text != L"") {
		std::string a = "";
		for (int i = 0; i < this->nameOFdrinkTOadd->Text->Length; i++) {
			a += this->nameOFdrinkTOadd->Text[i];
		}
		Drink* dish = new Drink(Convert::ToInt32(this->priceOFdrinkTOadd->Text), a, Convert::ToInt32(this->mlOFdrinkTOadd->Text), Convert::ToInt32(this->alcoholOFdrinkTOadd->Text));
		cafe.addDrink(*dish);
		delete dish;
		this->drinkADDlabel->Text = L"Успешно";
		this->drinkADDlabel->Visible = true;
		this->AddEmpl_Activated(sender, e);
		saveTofile();
	}
	else {
		this->drinkADDlabel->Text = L"Неуспешно";
		this->drinkADDlabel->Visible = true;
	}
}
private: System::Void deleteHotDishButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->deleteHotDish->Text != L"") {
		if (Convert::ToInt32(this->deleteHotDish->Text) > 0 && Convert::ToInt32(this->deleteHotDish->Text) <= cafe.getHotDishesAmount()) {
			cafe.deleteHotDish(Convert::ToInt32(this->deleteHotDish->Text) - 1);
			this->deleteHotDishLabel->Text = L"Успешно";
			this->deleteHotDishLabel->Visible = true;
			this->AddEmpl_Activated(sender, e);
			saveTofile();
		}
		else {
			this->deleteHotDishLabel->Text = L"Неуспешно";
			this->deleteHotDishLabel->Visible = true;
		}
	}
	else {
		this->deleteHotDishLabel->Text = L"Неуспешно";
		this->deleteHotDishLabel->Visible = true;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->deleteDessert->Text != L"") {
		if (Convert::ToInt32(this->deleteDessert->Text) > 0 && Convert::ToInt32(this->deleteDessert->Text) <= cafe.getdessertAmount()) {
			cafe.deleteDessert(Convert::ToInt32(this->deleteDessert->Text) - 1);
			this->deleteDessertLabel->Text = L"Успешно";
			this->deleteDessertLabel->Visible = true;
			this->AddEmpl_Activated(sender, e);
			saveTofile();
		}
		else {
			this->deleteDessertLabel->Text = L"Неуспешно";
			this->deleteDessertLabel->Visible = true;
		}
	}
	else {
		this->deleteDessertLabel->Text = L"Неуспешно";
		this->deleteDessertLabel->Visible = true;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->deleteDrink->Text != L"") {
		if (Convert::ToInt32(this->deleteDrink->Text) > 0 && Convert::ToInt32(this->deleteDrink->Text) <= cafe.getdrinkAmount()) {
			cafe.deleteDrink(Convert::ToInt32(this->deleteDrink->Text) - 1);
			this->deleteDrinkLabel->Text = L"Успешно";
			this->deleteDrinkLabel->Visible = true;
			this->AddEmpl_Activated(sender, e);
			saveTofile();
		}
		else {
			this->deleteDrinkLabel->Text = L"Неуспешно";
			this->deleteDrinkLabel->Visible = true;
		}
	}
	else {
		this->deleteDrinkLabel->Text = L"Неуспешно";
		this->deleteDrinkLabel->Visible = true;
	}
}
};
}
