//Samantha Zhang
#pragma once
#include <cstdlib>
#include <ctime>

namespace Bunco {

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
	private: System::Windows::Forms::PictureBox^  picFirst;
	protected:
	private: System::Windows::Forms::PictureBox^  picSecond;
	private: System::Windows::Forms::PictureBox^  picThird;
	private: System::Windows::Forms::Label^  lblRound;
	private: System::Windows::Forms::Label^  lblScore;
	private: System::Windows::Forms::Label^  lblHigh;
	private: System::Windows::Forms::Button^  btnRoll;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->picFirst = (gcnew System::Windows::Forms::PictureBox());
			this->picSecond = (gcnew System::Windows::Forms::PictureBox());
			this->picThird = (gcnew System::Windows::Forms::PictureBox());
			this->lblRound = (gcnew System::Windows::Forms::Label());
			this->lblScore = (gcnew System::Windows::Forms::Label());
			this->lblHigh = (gcnew System::Windows::Forms::Label());
			this->btnRoll = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picFirst))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSecond))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picThird))->BeginInit();
			this->SuspendLayout();
			// 
			// picFirst
			// 
			this->picFirst->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picFirst.Image")));
			this->picFirst->Location = System::Drawing::Point(28, 239);
			this->picFirst->Name = L"picFirst";
			this->picFirst->Size = System::Drawing::Size(83, 84);
			this->picFirst->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picFirst->TabIndex = 0;
			this->picFirst->TabStop = false;
			// 
			// picSecond
			// 
			this->picSecond->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSecond.Image")));
			this->picSecond->Location = System::Drawing::Point(28, 12);
			this->picSecond->Name = L"picSecond";
			this->picSecond->Size = System::Drawing::Size(83, 84);
			this->picSecond->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picSecond->TabIndex = 1;
			this->picSecond->TabStop = false;
			// 
			// picThird
			// 
			this->picThird->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picThird.Image")));
			this->picThird->Location = System::Drawing::Point(28, 124);
			this->picThird->Name = L"picThird";
			this->picThird->Size = System::Drawing::Size(83, 84);
			this->picThird->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picThird->TabIndex = 2;
			this->picThird->TabStop = false;
			// 
			// lblRound
			// 
			this->lblRound->AutoSize = true;
			this->lblRound->Location = System::Drawing::Point(231, 55);
			this->lblRound->Name = L"lblRound";
			this->lblRound->Size = System::Drawing::Size(51, 13);
			this->lblRound->TabIndex = 3;
			this->lblRound->Text = L"Round: 1";
			// 
			// lblScore
			// 
			this->lblScore->AutoSize = true;
			this->lblScore->Location = System::Drawing::Point(231, 105);
			this->lblScore->Name = L"lblScore";
			this->lblScore->Size = System::Drawing::Size(41, 13);
			this->lblScore->TabIndex = 4;
			this->lblScore->Text = L"Score: ";
			// 
			// lblHigh
			// 
			this->lblHigh->AutoSize = true;
			this->lblHigh->Location = System::Drawing::Point(231, 163);
			this->lblHigh->Name = L"lblHigh";
			this->lblHigh->Size = System::Drawing::Size(66, 13);
			this->lblHigh->TabIndex = 5;
			this->lblHigh->Text = L"High Score: ";
			// 
			// btnRoll
			// 
			this->btnRoll->Location = System::Drawing::Point(221, 239);
			this->btnRoll->Name = L"btnRoll";
			this->btnRoll->Size = System::Drawing::Size(145, 28);
			this->btnRoll->TabIndex = 6;
			this->btnRoll->Text = L"Roll";
			this->btnRoll->UseVisualStyleBackColor = true;
			this->btnRoll->Click += gcnew System::EventHandler(this, &MyForm::btnRoll_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 344);
			this->Controls->Add(this->btnRoll);
			this->Controls->Add(this->lblHigh);
			this->Controls->Add(this->lblScore);
			this->Controls->Add(this->lblRound);
			this->Controls->Add(this->picThird);
			this->Controls->Add(this->picSecond);
			this->Controls->Add(this->picFirst);
			this->Name = L"MyForm";
			this->Text = L"Bunco";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picFirst))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSecond))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picThird))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRoll_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		// seed
		srand((int)time(0));
		int rand1, rand2, rand3;
		static int score = 0;
		static int high = 0;
		static int round = 1;
		
		if (round > 6)
		{
			round = 1;
			score = 0;
		}

		this->lblRound->Text = "Round: " + round;

		rand1 = (rand() % 6) + 1;
		rand2 = (rand() % 6) + 1;
		rand3 = (rand() % 6) + 1;

		if (rand1 == 1)
		{
			picFirst->Load("Die1.gif");
		}
		else if (rand1 == 2)
		{
			picFirst->Load("Die2.gif");
		}
		else if (rand1 == 3)
		{
			picFirst->Load("Die3.gif");
		}
		else if (rand1 == 4)
		{
			picFirst->Load("Die4.gif");
		}
		else if (rand1 == 5)
		{
			picFirst->Load("Die5.gif");
		}
		else if (rand1 == 6)
		{
			picFirst->Load("Die6.gif");
		}

		if (rand2 == 1)
		{
			picSecond->Load("Die1.gif");
		}
		else if (rand2 == 2)
		{
			picSecond->Load("Die2.gif");
		}
		else if (rand2 == 3)
		{
			picSecond->Load("Die3.gif");
		}
		else if (rand2 == 4)
		{
			picSecond->Load("Die4.gif");
		}
		else if (rand2 == 5)
		{
			picSecond->Load("Die5.gif");
		}
		else if (rand2 == 6)
		{
			picSecond->Load("Die6.gif");
		}

		if (rand3 == 1)
		{
			picThird->Load("Die1.gif");
		}
		else if (rand3 == 2)
		{
			picThird->Load("Die2.gif");
		}
		else if (rand3 == 3)
		{
			picThird->Load("Die3.gif");
		}
		else if (rand3 == 4)
		{
			picThird->Load("Die4.gif");
		}
		else if (rand3 == 5)
		{
			picThird->Load("Die5.gif");
		}
		else if (rand3 == 6)
		{
			picThird->Load("Die6.gif");
		}

		if (rand1 == round && rand1 == rand2 && rand2 == rand3)
		{
			//Bunco
			
			score = score + 21;
			MessageBox::Show("Bunco!!!");
			this->lblScore->Text = "Score: " + score;
		}
		else if (rand1 == rand2 && rand2 == rand3)
		{
			//Baby Bunco

			score = score + 5;
			MessageBox::Show("Baby Bunco!!!");
			this->lblScore->Text = "Score: " + score;
		}
		else if (rand1==round || rand2 ==round||rand3 ==round)
		{
			if (rand1 == round)
			{
				score++;
			}
			if (rand2 == round)
			{
				score++;
			}
			if (rand3 == round)
			{
				score++;
			}
			this->lblScore->Text = "Score: " + score;
		}
		else
		{
			round++;
			this->lblScore->Text = "Score: " + score;
		}

		if (round > 6 && score>high)
		{
			this->lblHigh->Text = "High Score: " + score;
			high = score;
		
		}

		this->lblScore->Text = "Score: " + score;
	}
};
}
