#pragma once


namespace lz27 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ роботаЗМасивамиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ згенеруватиМасивToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ середнєАрифметичнеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сортуватиПарніМасивиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ інформаціяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ розробникToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->роботаЗМасивамиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->згенеруватиМасивToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->середнєАрифметичнеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортуватиПарніМасивиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інформаціяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->розробникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(10, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1152, 143);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(41, 190);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(441, 335);
			this->dataGridView1->TabIndex = 1;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(690, 190);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(441, 335);
			this->dataGridView2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(82, 551);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(282, 105);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Згенерувати масив для двох таблиць";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(467, 551);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(282, 105);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Середнє арифметичне першої таблиці";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(828, 551);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(282, 105);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Сортувати парні стовпці двох таблиць";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(389, 726);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Результат:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->роботаЗМасивамиToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1174, 33);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// роботаЗМасивамиToolStripMenuItem
			// 
			this->роботаЗМасивамиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->згенеруватиМасивToolStripMenuItem,
					this->середнєАрифметичнеToolStripMenuItem, this->сортуватиПарніМасивиToolStripMenuItem
			});
			this->роботаЗМасивамиToolStripMenuItem->Name = L"роботаЗМасивамиToolStripMenuItem";
			this->роботаЗМасивамиToolStripMenuItem->Size = System::Drawing::Size(186, 29);
			this->роботаЗМасивамиToolStripMenuItem->Text = L"Робота з масивами";
			// 
			// згенеруватиМасивToolStripMenuItem
			// 
			this->згенеруватиМасивToolStripMenuItem->Name = L"згенеруватиМасивToolStripMenuItem";
			this->згенеруватиМасивToolStripMenuItem->Size = System::Drawing::Size(313, 34);
			this->згенеруватиМасивToolStripMenuItem->Text = L"Згенерувати масив";
			this->згенеруватиМасивToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// середнєАрифметичнеToolStripMenuItem
			// 
			this->середнєАрифметичнеToolStripMenuItem->Name = L"середнєАрифметичнеToolStripMenuItem";
			this->середнєАрифметичнеToolStripMenuItem->Size = System::Drawing::Size(313, 34);
			this->середнєАрифметичнеToolStripMenuItem->Text = L"Середнє арифметичне";
			this->середнєАрифметичнеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// сортуватиПарніМасивиToolStripMenuItem
			// 
			this->сортуватиПарніМасивиToolStripMenuItem->Name = L"сортуватиПарніМасивиToolStripMenuItem";
			this->сортуватиПарніМасивиToolStripMenuItem->Size = System::Drawing::Size(313, 34);
			this->сортуватиПарніМасивиToolStripMenuItem->Text = L"Сортувати парні масиви";
			this->сортуватиПарніМасивиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->інформаціяToolStripMenuItem });
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(149, 29);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			// 
			// інформаціяToolStripMenuItem
			// 
			this->інформаціяToolStripMenuItem->Name = L"інформаціяToolStripMenuItem";
			this->інформаціяToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->інформаціяToolStripMenuItem->Text = L"Інформація";
			this->інформаціяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::інформаціяToolStripMenuItem_Click);
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->розробникToolStripMenuItem });
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(125, 29);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			// 
			// розробникToolStripMenuItem
			// 
			this->розробникToolStripMenuItem->Name = L"розробникToolStripMenuItem";
			this->розробникToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->розробникToolStripMenuItem->Text = L"Розробник";
			this->розробникToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::розробникToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1174, 819);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = 5;
		int cols = 5;

		System::Random^ rand = gcnew System::Random();

		// Налаштовуємо розміри для обох таблиць
		dataGridView1->RowCount = rows;
		dataGridView1->ColumnCount = cols;

		dataGridView2->RowCount = rows;
		dataGridView2->ColumnCount = cols;

		// Заповнюємо таблиці РІЗНИМИ випадковими числами
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				// Генеруємо число для першої таблиці і одразу записуємо
				dataGridView1->Rows[i]->Cells[j]->Value = rand->Next(-50, 51);

				// Генеруємо НОВЕ число для другої таблиці і записуємо туди
				dataGridView2->Rows[i]->Cells[j]->Value = rand->Next(-50, 51);
			}
		}

		label1->Text = "Результат: Згенеровано дві різні таблиці!";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Перевіряємо, чи є дані хоча б в одній таблиці
	if (dataGridView1->RowCount == 0 || dataGridView2->RowCount == 0) {
		label1->Text = "Результат: Спочатку згенеруйте масиви!";
		return;
	}

	double sum = 0;   // Спільна сума для двох таблиць
	int count = 0;    // Спільний лічильник додатних чисел
	int rows = dataGridView1->RowCount;
	int cols = dataGridView1->ColumnCount;

	// Проходимось по клітинках обох таблиць одночасно
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			// 1. Перевіряємо клітинку в ПЕРШІЙ таблиці
			int val1 = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			if (val1 > 0)
			{
				sum += val1;
				count++;
			}

			// 2. Перевіряємо таку ж клітинку в ДРУГІЙ таблиці
			int val2 = System::Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
			if (val2 > 0)
			{
				sum += val2;
				count++;
			}
		}
	}

	// Вираховуємо загальне середнє арифметичне
	if (count > 0)
	{
		double average = sum / count;
		label1->Text = "Результат: Середнє з першої таблиці  = " + average.ToString("F2");
	}
	else
	{
		label1->Text = "Результат: У жодній з таблиць немає додатних чисел.";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->RowCount == 0 || dataGridView2->RowCount == 0) {
		label1->Text = "Результат: Спочатку згенеруйте масиви!";
		return;
	}

	int rows = dataGridView1->RowCount;
	int cols = dataGridView1->ColumnCount;

	// Перебираємо ПАРНІ стовпці (для людини це 2, 4, 6, а для комп'ютера індекси 1, 3, 5)
	for (int j = 1; j < cols; j += 2)
	{
		// Створюємо тимчасові одновимірні масиви для одного стовпця з кожної таблиці
		cli::array<int>^ tempCol1 = gcnew cli::array<int>(rows);
		cli::array<int>^ tempCol2 = gcnew cli::array<int>(rows);

		// 1. Копіюємо дані зі стовпця 'j' у наші тимчасові масиви
		for (int i = 0; i < rows; i++) {
			tempCol1[i] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			tempCol2[i] = System::Convert::ToInt32(dataGridView2->Rows[i]->Cells[j]->Value);
		}

		// 2. Сортуємо масиви
		// Array::Sort сортує за зростанням (від меншого до більшого)
		System::Array::Sort(tempCol1);
		System::Array::Sort(tempCol2);

		// Array::Reverse перевертає їх, щоб вийшло за СПАДАННЯМ (від більшого до меншого)
		System::Array::Reverse(tempCol1);
		System::Array::Reverse(tempCol2);

		// 3. Записуємо відсортовані дані назад у таблиці
		for (int i = 0; i < rows; i++) {
			dataGridView1->Rows[i]->Cells[j]->Value = tempCol1[i];
			dataGridView2->Rows[i]->Cells[j]->Value = tempCol2[i];
		}
	}

	label1->Text = "Результат: Парні стовпці в обох таблицях відсортовано за спаданням!";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void згенеруватиМасивToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}


private: System::Void інформаціяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ця програма дозволяє працювати з двома таблицями, заповненими випадковими числами. Ви можете згенерувати різні числа для обох таблиць, обчислити середнє арифметичне додатних чисел з першої таблиці та відсортувати парні стовпці обох таблиць за спаданням.", "Інформація про програму", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void розробникToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Розробник: Винарчик Софія, студентка групи 3СОМ", "Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
