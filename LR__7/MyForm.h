#pragma once

namespace LR7 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ роботаЗМасивамиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обчислитиToolStripMenuItem;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->роботаЗМасивамиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обчислитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інформаціяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->розробникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 113);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(343, 116);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Стовпець 1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Стовпець 2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Стовпець 3";
			this->Column3->Name = L"Column3";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column4,
					this->Column5, this->Column6
			});
			this->dataGridView2->Location = System::Drawing::Point(495, 113);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(343, 116);
			this->dataGridView2->TabIndex = 1;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Стовпець 4";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Стовпець 5";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Стовпець 6";
			this->Column6->Name = L"Column6";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(324, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(432, 277);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(837, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(156, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Матриця";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(616, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Відсортована матриця ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(452, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Результат";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->роботаЗМасивамиToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(857, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// роботаЗМасивамиToolStripMenuItem
			// 
			this->роботаЗМасивамиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->обчислитиToolStripMenuItem });
			this->роботаЗМасивамиToolStripMenuItem->Name = L"роботаЗМасивамиToolStripMenuItem";
			this->роботаЗМасивамиToolStripMenuItem->Size = System::Drawing::Size(125, 20);
			this->роботаЗМасивамиToolStripMenuItem->Text = L"Робота з масивами";
			// 
			// обчислитиToolStripMenuItem
			// 
			this->обчислитиToolStripMenuItem->Name = L"обчислитиToolStripMenuItem";
			this->обчислитиToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->обчислитиToolStripMenuItem->Text = L"Обчислити";
			this->обчислитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->інформаціяToolStripMenuItem });
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			// 
			// інформаціяToolStripMenuItem
			// 
			this->інформаціяToolStripMenuItem->Name = L"інформаціяToolStripMenuItem";
			this->інформаціяToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->інформаціяToolStripMenuItem->Text = L"Інформація";
			this->інформаціяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::інформаціяToolStripMenuItem_Click);
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->розробникToolStripMenuItem });
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			// 
			// розробникToolStripMenuItem
			// 
			this->розробникToolStripMenuItem->Name = L"розробникToolStripMenuItem";
			this->розробникToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->розробникToolStripMenuItem->Text = L"Розробник";
			this->розробникToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::розробникToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(857, 329);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	const int n = 3;
	const int m = 3;
	int a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = Convert::ToInt32(dataGridView1[j, i]->Value);
		}
	}

	long long product = 1;
	for (int i = 0; i < n; i++) {
		product *= a[i][i];
	}

	textBox1->Text = product.ToString();

	for (int j = 0; j < m; j++) {
		if (j % 2 == 0) {
			for (int i = n - 1; i >= 0; i--) {
				for (int k = 0; k < i; k++) {
					if (a[k][j] > a[k + 1][j]) {
						int temp = a[k][j];
						a[k][j] = a[k + 1][j];
						a[k + 1][j] = temp;
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			dataGridView2[j, i]->Value = Convert::ToString(a[i][j]);
		}
	}
}
private: System::Void обчислитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void інформаціяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Ця програма виконує обчислення добутку елементів головної діагоналі матриці та сортування стовпців з парними індексами за зростанням. Результати відображаються у відповідних полях та таблицях.", "Інформація про програму", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	private: System::Void розробникToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Розробник:  Рудкевич Ольга Миколаївна\nГрупа: 3СОМ\nДата: 06.05.2026", "Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}