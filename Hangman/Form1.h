



#include "string"
#include "Header1.h"


char ch[100];
char arr[100];
int wrongs=5;           //This is to keeep track of number of wrong entries
int randno=pullout();   //rand is the entry no that will be used from the arrays in this run of the game
int clipschoice=0;      //a default value for the 0th clip assigned to a movie(Each movie has 2 clips)

char movie[100][10000]={
"BATMAN BEGINS",
"INCEPTION",
"PIRATES OF THE CARIBBEAN CURSE OF THE BLACK PEARL",
"IRONMAN",
"CHARLIE AND THE CHOCOLATE FACTORY",
"PIRATES OF THE CARIBBEAN AT WORLDS END",
"TRUE GRIT",
"THE AVENGERS",
"AVATAR",
"INGLORIOUS BASTARDS",
"INDIANA JONES AND THE RAIDERS OF THE LOST ARK",
"GLADIATOR",
"SHERLOCK",
"TRANSFORMERS DARK OF THE MOON",
"SHREK",
/*
"HARRY POTTER AND THE PRISONER OF AZKABAN",
"PIRATES OF THE CARIBBEAN DEAD MANS CHEST",
"HARRY POTTER AND THE HALF BLOOD PRINCE",
"HARRY POTTER AND THE PHILOSOPHERS STONE",
"HITCHHIKERS GUIDE TO THE GALAXY",
"LORD OF THE RINGS TALE OF TWO TOWERS",
"MATRIX RELOADED",
"MONSTERS INCORPORATED",
"THE COUNT OF MONTE CRISTO",
"NATIONAL TREASURE",
"TERMINATOR SALVATION",
"TRANSFORMERS",
"TRON LEGACY",
"TROY",
"UP",
"WAR OF THE WORLDS",
"THE EXPENDABLES"*/};


char loc[100][100000]={
"D:\\Afreen\\Computer\\VC++\\Sounds\\batman-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\batman-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\inception-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\inception-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\poc1-1-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\poc1-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\ironman-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\ironman-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\cacf-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\cacf-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\poc3-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\poc3-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\true grit-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\true grit-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\the avengers-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\the avengers-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\avatar-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\avatar-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\bastard-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\bastard-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\indiana-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\indiana-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\gladiator-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\gladiator-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\sherlock-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\sherlock-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\transformers3-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\transformers3-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\shrek-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\shrek-2.wav",
/*"D:\\Afreen\\Computer\\VC++\\Sounds\\MONTECRISTO-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\MONTECRISTO-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\national treasure-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\national treasure-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\terminator-salvation-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\terminator-salvation-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\transformers1-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\transformers1-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\tron-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\tron-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\troy-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\troy-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\true grit-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\true grit-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\up-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\up-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\war of the worlds-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\war of the worlds-2.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\EXPENDABLES-1.wav",
"D:\\Afreen\\Computer\\VC++\\Sounds\\EXPENDABLES-2.wav",*/
};     //moname=moviename and loc is location

void win()
{char winsound[20000]="D:\\Afreen\\Computer\\VC++\\Sounds\\Ta Da-SoundBible.com-1884170640.wav";			   
			   SoundPlayer^ player = gcnew SoundPlayer();
               String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((winsound)));
               player->SoundLocation = temp;
               player->Load();
               player->PlaySync();
}

void lose()
{char losesound[20000]="D:\\Afreen\\Computer\\VC++\\Sounds\\beep-5.wav";			   
			   SoundPlayer^ player = gcnew SoundPlayer();
               String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((losesound)));
               player->SoundLocation = temp;
               player->Load();
               player->PlaySync();
}

char animate[200000]=" ";



#pragma once

namespace Hangman {

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
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  A;
	private: System::Windows::Forms::Button^  I;

	private: System::Windows::Forms::Button^  H;

	private: System::Windows::Forms::Button^  G;

	private: System::Windows::Forms::Button^  F;

	private: System::Windows::Forms::Button^  E;

	private: System::Windows::Forms::Button^  D;

	private: System::Windows::Forms::Button^  C;

	private: System::Windows::Forms::Button^  B;
	private: System::Windows::Forms::Button^  P;
	private: System::Windows::Forms::Button^  O;
	private: System::Windows::Forms::Button^  N;
	private: System::Windows::Forms::Button^  M;
	private: System::Windows::Forms::Button^  L;
	private: System::Windows::Forms::Button^  K;
	private: System::Windows::Forms::Button^  J;
	private: System::Windows::Forms::Button^  U;
	private: System::Windows::Forms::Button^  S;
	private: System::Windows::Forms::Button^  R;
	private: System::Windows::Forms::Button^  Q;
	private: System::Windows::Forms::Button^  V;
	private: System::Windows::Forms::Button^  T;
	private: System::Windows::Forms::Button^  Z;
	private: System::Windows::Forms::Button^  Y;
	private: System::Windows::Forms::Button^  X;
	private: System::Windows::Forms::Button^  W;
	private: System::Windows::Forms::Button^  START;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  LISTEN;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->A = (gcnew System::Windows::Forms::Button());
			this->I = (gcnew System::Windows::Forms::Button());
			this->H = (gcnew System::Windows::Forms::Button());
			this->G = (gcnew System::Windows::Forms::Button());
			this->F = (gcnew System::Windows::Forms::Button());
			this->E = (gcnew System::Windows::Forms::Button());
			this->D = (gcnew System::Windows::Forms::Button());
			this->C = (gcnew System::Windows::Forms::Button());
			this->B = (gcnew System::Windows::Forms::Button());
			this->P = (gcnew System::Windows::Forms::Button());
			this->O = (gcnew System::Windows::Forms::Button());
			this->N = (gcnew System::Windows::Forms::Button());
			this->M = (gcnew System::Windows::Forms::Button());
			this->L = (gcnew System::Windows::Forms::Button());
			this->K = (gcnew System::Windows::Forms::Button());
			this->J = (gcnew System::Windows::Forms::Button());
			this->U = (gcnew System::Windows::Forms::Button());
			this->S = (gcnew System::Windows::Forms::Button());
			this->R = (gcnew System::Windows::Forms::Button());
			this->Q = (gcnew System::Windows::Forms::Button());
			this->V = (gcnew System::Windows::Forms::Button());
			this->T = (gcnew System::Windows::Forms::Button());
			this->Z = (gcnew System::Windows::Forms::Button());
			this->Y = (gcnew System::Windows::Forms::Button());
			this->X = (gcnew System::Windows::Forms::Button());
			this->W = (gcnew System::Windows::Forms::Button());
			this->START = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LISTEN = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->textBox1->BackColor = System::Drawing::Color::YellowGreen;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(107, 69);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(718, 59);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// A
			// 
			this->A->BackColor = System::Drawing::Color::Orange;
			this->A->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->A->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->A->Location = System::Drawing::Point(152, 163);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(34, 32);
			this->A->TabIndex = 1;
			this->A->Text = L"A";
			this->A->UseVisualStyleBackColor = false;
			this->A->Click += gcnew System::EventHandler(this, &Form1::A_Click);
			// 
			// I
			// 
			this->I->BackColor = System::Drawing::Color::Orange;
			this->I->Cursor = System::Windows::Forms::Cursors::Hand;
			this->I->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->I->Location = System::Drawing::Point(615, 163);
			this->I->Name = L"I";
			this->I->Size = System::Drawing::Size(34, 32);
			this->I->TabIndex = 2;
			this->I->Text = L"I";
			this->I->UseVisualStyleBackColor = false;
			this->I->Click += gcnew System::EventHandler(this, &Form1::I_Click);
			// 
			// H
			// 
			this->H->BackColor = System::Drawing::Color::Orange;
			this->H->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->H->Location = System::Drawing::Point(553, 163);
			this->H->Name = L"H";
			this->H->Size = System::Drawing::Size(34, 32);
			this->H->TabIndex = 3;
			this->H->Text = L"H";
			this->H->UseVisualStyleBackColor = false;
			this->H->Click += gcnew System::EventHandler(this, &Form1::H_Click);
			// 
			// G
			// 
			this->G->BackColor = System::Drawing::Color::Orange;
			this->G->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->G->Location = System::Drawing::Point(494, 163);
			this->G->Name = L"G";
			this->G->Size = System::Drawing::Size(34, 32);
			this->G->TabIndex = 4;
			this->G->Text = L"G";
			this->G->UseVisualStyleBackColor = false;
			this->G->Click += gcnew System::EventHandler(this, &Form1::G_Click);
			// 
			// F
			// 
			this->F->BackColor = System::Drawing::Color::Orange;
			this->F->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->F->Location = System::Drawing::Point(440, 163);
			this->F->Name = L"F";
			this->F->Size = System::Drawing::Size(34, 32);
			this->F->TabIndex = 5;
			this->F->Text = L"F";
			this->F->UseVisualStyleBackColor = false;
			this->F->Click += gcnew System::EventHandler(this, &Form1::F_Click);
			// 
			// E
			// 
			this->E->BackColor = System::Drawing::Color::Orange;
			this->E->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->E->Location = System::Drawing::Point(379, 163);
			this->E->Name = L"E";
			this->E->Size = System::Drawing::Size(34, 32);
			this->E->TabIndex = 6;
			this->E->Text = L"E";
			this->E->UseVisualStyleBackColor = false;
			this->E->Click += gcnew System::EventHandler(this, &Form1::E_Click);
			// 
			// D
			// 
			this->D->BackColor = System::Drawing::Color::Orange;
			this->D->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->D->Location = System::Drawing::Point(324, 163);
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(34, 32);
			this->D->TabIndex = 7;
			this->D->Text = L"D";
			this->D->UseVisualStyleBackColor = false;
			this->D->Click += gcnew System::EventHandler(this, &Form1::D_Click);
			// 
			// C
			// 
			this->C->BackColor = System::Drawing::Color::Orange;
			this->C->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->C->Location = System::Drawing::Point(269, 163);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(34, 32);
			this->C->TabIndex = 8;
			this->C->Text = L"C";
			this->C->UseVisualStyleBackColor = false;
			this->C->Click += gcnew System::EventHandler(this, &Form1::C_Click);
			// 
			// B
			// 
			this->B->BackColor = System::Drawing::Color::Orange;
			this->B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->B->Location = System::Drawing::Point(209, 163);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(34, 32);
			this->B->TabIndex = 9;
			this->B->Text = L"B";
			this->B->UseVisualStyleBackColor = false;
			this->B->Click += gcnew System::EventHandler(this, &Form1::B_Click);
			// 
			// P
			// 
			this->P->BackColor = System::Drawing::Color::Orange;
			this->P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->P->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->P->Location = System::Drawing::Point(410, 201);
			this->P->Name = L"P";
			this->P->Size = System::Drawing::Size(34, 32);
			this->P->TabIndex = 14;
			this->P->Text = L"P";
			this->P->UseVisualStyleBackColor = false;
			this->P->Click += gcnew System::EventHandler(this, &Form1::P_Click);
			// 
			// O
			// 
			this->O->BackColor = System::Drawing::Color::Orange;
			this->O->Cursor = System::Windows::Forms::Cursors::Hand;
			this->O->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->O->Location = System::Drawing::Point(355, 201);
			this->O->Name = L"O";
			this->O->Size = System::Drawing::Size(34, 32);
			this->O->TabIndex = 19;
			this->O->Text = L"O";
			this->O->UseVisualStyleBackColor = false;
			this->O->Click += gcnew System::EventHandler(this, &Form1::O_Click);
			// 
			// N
			// 
			this->N->BackColor = System::Drawing::Color::Orange;
			this->N->Cursor = System::Windows::Forms::Cursors::Hand;
			this->N->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->N->Location = System::Drawing::Point(303, 201);
			this->N->Name = L"N";
			this->N->Size = System::Drawing::Size(34, 32);
			this->N->TabIndex = 18;
			this->N->Text = L"N";
			this->N->UseVisualStyleBackColor = false;
			this->N->Click += gcnew System::EventHandler(this, &Form1::N_Click);
			// 
			// M
			// 
			this->M->BackColor = System::Drawing::Color::Orange;
			this->M->Cursor = System::Windows::Forms::Cursors::Hand;
			this->M->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->M->Location = System::Drawing::Point(239, 201);
			this->M->Name = L"M";
			this->M->Size = System::Drawing::Size(34, 32);
			this->M->TabIndex = 17;
			this->M->Text = L"M";
			this->M->UseVisualStyleBackColor = false;
			this->M->Click += gcnew System::EventHandler(this, &Form1::M_Click);
			// 
			// L
			// 
			this->L->BackColor = System::Drawing::Color::Orange;
			this->L->Cursor = System::Windows::Forms::Cursors::Hand;
			this->L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->L->Location = System::Drawing::Point(180, 201);
			this->L->Name = L"L";
			this->L->Size = System::Drawing::Size(34, 32);
			this->L->TabIndex = 16;
			this->L->Text = L"L";
			this->L->UseVisualStyleBackColor = false;
			this->L->Click += gcnew System::EventHandler(this, &Form1::L_Click);
			// 
			// K
			// 
			this->K->BackColor = System::Drawing::Color::Orange;
			this->K->Cursor = System::Windows::Forms::Cursors::Hand;
			this->K->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->K->Location = System::Drawing::Point(728, 163);
			this->K->Name = L"K";
			this->K->Size = System::Drawing::Size(34, 32);
			this->K->TabIndex = 15;
			this->K->Text = L"K";
			this->K->UseVisualStyleBackColor = false;
			this->K->Click += gcnew System::EventHandler(this, &Form1::K_Click);
			// 
			// J
			// 
			this->J->BackColor = System::Drawing::Color::Orange;
			this->J->Cursor = System::Windows::Forms::Cursors::Hand;
			this->J->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->J->Location = System::Drawing::Point(673, 163);
			this->J->Name = L"J";
			this->J->Size = System::Drawing::Size(34, 32);
			this->J->TabIndex = 20;
			this->J->Text = L"J";
			this->J->UseVisualStyleBackColor = false;
			this->J->Click += gcnew System::EventHandler(this, &Form1::J_Click);
			// 
			// U
			// 
			this->U->BackColor = System::Drawing::Color::Orange;
			this->U->Cursor = System::Windows::Forms::Cursors::Hand;
			this->U->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->U->Location = System::Drawing::Point(702, 201);
			this->U->Name = L"U";
			this->U->Size = System::Drawing::Size(34, 32);
			this->U->TabIndex = 24;
			this->U->Text = L"U";
			this->U->UseVisualStyleBackColor = false;
			this->U->Click += gcnew System::EventHandler(this, &Form1::U_Click);
			// 
			// S
			// 
			this->S->BackColor = System::Drawing::Color::Orange;
			this->S->Cursor = System::Windows::Forms::Cursors::Hand;
			this->S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->S->Location = System::Drawing::Point(586, 201);
			this->S->Name = L"S";
			this->S->Size = System::Drawing::Size(34, 32);
			this->S->TabIndex = 11;
			this->S->Text = L"S";
			this->S->UseVisualStyleBackColor = false;
			this->S->Click += gcnew System::EventHandler(this, &Form1::S_Click);
			// 
			// R
			// 
			this->R->BackColor = System::Drawing::Color::Orange;
			this->R->Cursor = System::Windows::Forms::Cursors::Hand;
			this->R->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->R->Location = System::Drawing::Point(528, 201);
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(34, 32);
			this->R->TabIndex = 12;
			this->R->Text = L"R";
			this->R->UseVisualStyleBackColor = false;
			this->R->Click += gcnew System::EventHandler(this, &Form1::R_Click);
			// 
			// Q
			// 
			this->Q->BackColor = System::Drawing::Color::Orange;
			this->Q->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Q->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Q->Location = System::Drawing::Point(469, 201);
			this->Q->Name = L"Q";
			this->Q->Size = System::Drawing::Size(34, 32);
			this->Q->TabIndex = 13;
			this->Q->Text = L"Q";
			this->Q->UseVisualStyleBackColor = false;
			this->Q->Click += gcnew System::EventHandler(this, &Form1::Q_Click);
			// 
			// V
			// 
			this->V->BackColor = System::Drawing::Color::Orange;
			this->V->Cursor = System::Windows::Forms::Cursors::Hand;
			this->V->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->V->Location = System::Drawing::Point(324, 239);
			this->V->Name = L"V";
			this->V->Size = System::Drawing::Size(34, 32);
			this->V->TabIndex = 23;
			this->V->Text = L"V";
			this->V->UseVisualStyleBackColor = false;
			this->V->Click += gcnew System::EventHandler(this, &Form1::V_Click);
			// 
			// T
			// 
			this->T->BackColor = System::Drawing::Color::Orange;
			this->T->Cursor = System::Windows::Forms::Cursors::Hand;
			this->T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->T->Location = System::Drawing::Point(648, 201);
			this->T->Name = L"T";
			this->T->Size = System::Drawing::Size(34, 32);
			this->T->TabIndex = 10;
			this->T->Text = L"T";
			this->T->UseVisualStyleBackColor = false;
			this->T->Click += gcnew System::EventHandler(this, &Form1::T_Click);
			// 
			// Z
			// 
			this->Z->BackColor = System::Drawing::Color::Orange;
			this->Z->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Z->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Z->Location = System::Drawing::Point(553, 239);
			this->Z->Name = L"Z";
			this->Z->Size = System::Drawing::Size(34, 32);
			this->Z->TabIndex = 26;
			this->Z->Text = L"Z";
			this->Z->UseVisualStyleBackColor = false;
			this->Z->Click += gcnew System::EventHandler(this, &Form1::Z_Click);
			// 
			// Y
			// 
			this->Y->BackColor = System::Drawing::Color::Orange;
			this->Y->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Y->Location = System::Drawing::Point(494, 239);
			this->Y->Name = L"Y";
			this->Y->Size = System::Drawing::Size(34, 32);
			this->Y->TabIndex = 25;
			this->Y->Tag = L"";
			this->Y->Text = L"Y";
			this->Y->UseVisualStyleBackColor = false;
			this->Y->Click += gcnew System::EventHandler(this, &Form1::Y_Click);
			// 
			// X
			// 
			this->X->BackColor = System::Drawing::Color::Orange;
			this->X->Cursor = System::Windows::Forms::Cursors::Hand;
			this->X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->X->Location = System::Drawing::Point(440, 239);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(34, 32);
			this->X->TabIndex = 21;
			this->X->Text = L"X";
			this->X->UseVisualStyleBackColor = false;
			this->X->Click += gcnew System::EventHandler(this, &Form1::X_Click);
			// 
			// W
			// 
			this->W->BackColor = System::Drawing::Color::Orange;
			this->W->Cursor = System::Windows::Forms::Cursors::Hand;
			this->W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->W->Location = System::Drawing::Point(379, 239);
			this->W->Name = L"W";
			this->W->Size = System::Drawing::Size(34, 32);
			this->W->TabIndex = 22;
			this->W->Text = L"W";
			this->W->UseVisualStyleBackColor = false;
			this->W->Click += gcnew System::EventHandler(this, &Form1::W_Click);
			// 
			// START
			// 
			this->START->BackColor = System::Drawing::Color::Thistle;
			this->START->Cursor = System::Windows::Forms::Cursors::Hand;
			this->START->Font = (gcnew System::Drawing::Font(L"Jokerman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->START->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->START->Location = System::Drawing::Point(344, 426);
			this->START->Name = L"START";
			this->START->Size = System::Drawing::Size(254, 84);
			this->START->TabIndex = 31;
			this->START->Text = L"START";
			this->START->UseVisualStyleBackColor = true;
			this->START->Click += gcnew System::EventHandler(this, &Form1::START_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::SandyBrown;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(433, 361);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(339, 45);
			this->label1->TabIndex = 32;
			this->label1->Text = L"CHANCES LEFT:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::SandyBrown;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ravie", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(790, 361);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 45);
			this->label2->TabIndex = 33;
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// LISTEN
			// 
			this->LISTEN->BackColor = System::Drawing::Color::Thistle;
			this->LISTEN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LISTEN->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LISTEN->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->LISTEN->Location = System::Drawing::Point(349, 507);
			this->LISTEN->Name = L"LISTEN";
			this->LISTEN->Size = System::Drawing::Size(238, 53);
			this->LISTEN->TabIndex = 27;
			this->LISTEN->Text = L"LISTEN";
			this->LISTEN->UseVisualStyleBackColor = false;
			this->LISTEN->Click += gcnew System::EventHandler(this, &Form1::LISTEN_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Thistle;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Jokerman", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->Location = System::Drawing::Point(313, 334);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(297, 83);
			this->button2->TabIndex = 29;
			this->button2->Text = L"PLAY AGAIN";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(965, 702);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(180, 86);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(621, 513);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 35;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox3->Location = System::Drawing::Point(-1, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(965, 702);
			this->pictureBox3->TabIndex = 36;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 700);
			this->Controls->Add(this->START);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->LISTEN);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->W);
			this->Controls->Add(this->X);
			this->Controls->Add(this->Y);
			this->Controls->Add(this->Z);
			this->Controls->Add(this->T);
			this->Controls->Add(this->V);
			this->Controls->Add(this->Q);
			this->Controls->Add(this->R);
			this->Controls->Add(this->S);
			this->Controls->Add(this->U);
			this->Controls->Add(this->J);
			this->Controls->Add(this->K);
			this->Controls->Add(this->L);
			this->Controls->Add(this->M);
			this->Controls->Add(this->N);
			this->Controls->Add(this->O);
			this->Controls->Add(this->P);
			this->Controls->Add(this->B);
			this->Controls->Add(this->C);
			this->Controls->Add(this->D);
			this->Controls->Add(this->E);
			this->Controls->Add(this->F);
			this->Controls->Add(this->G);
			this->Controls->Add(this->H);
			this->Controls->Add(this->I);
			this->Controls->Add(this->A);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"HANGMAN \\|/";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


void playerwon()          //Changes to be made when player wins
{textBox1->Text="You win!!!! The answer is ";
			    String^ endtemp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		        textBox1->AppendText(endtemp);
				this->label2->Text=wrongs.ToString();
				win();
			   this->A->Enabled = false;
			   this->B->Enabled = false;
			   this->C->Enabled = false;
			   this->D->Enabled = false;
			   this->E->Enabled = false;
			   this->F->Enabled = false;
			   this->G->Enabled = false;
			   this->H->Enabled = false;
			   this->I->Enabled = false;
			   this->J->Enabled = false;
			   this->K->Enabled = false;
			   this->L->Enabled = false;
			   this->M->Enabled = false;
			   this->N->Enabled = false;
			   this->O->Enabled = false;
			   this->P->Enabled = false;
			   this->Q->Enabled = false;
			   this->R->Enabled = false;
			   this->S->Enabled = false;
			   this->T->Enabled = false;
			   this->U->Enabled = false;
			   this->V->Enabled = false;
			   this->W->Enabled = false;
			   this->X->Enabled = false;
			   this->Y->Enabled = false;
			   this->Z->Enabled = false;
			   this->LISTEN->Enabled = false;
			   this->button2->Enabled = true;
			   this->button2->Visible = true;
		       this->label1->Visible = false;
			   this->label2->Visible = false;		       
}

void playerlost()        //Changes to be made when player loses
{textBox1->Text="You lose!! The answer is  ";
                this->label2->Text=wrongs.ToString();
			    String^endtemp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((ch)));
		        textBox1->AppendText(endtemp);
				lose();
			   this->A->Enabled = false;
			   this->B->Enabled = false;
			   this->C->Enabled = false;
			   this->D->Enabled = false;
			   this->E->Enabled = false;
			   this->F->Enabled = false;
			   this->G->Enabled = false;
			   this->H->Enabled = false;
			   this->I->Enabled = false;
			   this->J->Enabled = false;
			   this->K->Enabled = false;
			   this->L->Enabled = false;
			   this->M->Enabled = false;
			   this->N->Enabled = false;
			   this->O->Enabled = false;
			   this->P->Enabled = false;
			   this->Q->Enabled = false;
			   this->R->Enabled = false;
			   this->S->Enabled = false;
			   this->T->Enabled = false;
			   this->U->Enabled = false;
			   this->V->Enabled = false;
			   this->W->Enabled = false;
			   this->X->Enabled = false;
			   this->Y->Enabled = false;
			   this->Z->Enabled = false;
			   this->LISTEN->Enabled = false;
			   this->button2->Enabled = true;
			   this->button2->Visible = true;
			   this->label1->Visible = false;
			   this->label2->Visible = false;
}



#pragma endregion

private: System::Void START_Click(System::Object^  sender, System::EventArgs^  e) {
		  
		  strcpy(ch,movie[randno]);	  
          put_spaces(ch);
		  fill(ch,arr);
		  this->START->Visible = false;
		  //this->label3->Visible = false;
		  SoundPlayer^ player = gcnew SoundPlayer();
          player->SoundLocation = "D:\\Afreen\\Computer\\VC++\\Sounds\\KPT.wav";
          player->Load();
          player->PlaySync();
		  this->pictureBox2->Visible = false;
		  this->pictureBox3->Visible = false;
		  String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		  textBox1->AppendText(temp);
		  this->label2->Text=wrongs.ToString();
		  clipschoice=randno%2;

		 }

private: System::Void LISTEN_Click(System::Object^  sender, System::EventArgs^  e) {
			 char locthis[10000];
			 strcpy(locthis,loc[(randno)*2]);
			 strcpy(locthis,loc[((randno)*2)+clipschoice]);
			   if(clipschoice==0)
			     clipschoice=1;
			   else
			     clipschoice=0;
			 playsound(locthis);
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  textBox1->Clear();
			 randno=pullout();
			 this->label1->Visible = true;
			 this->label2->Visible = true;
			 strcpy(ch,movie[randno]);
			 put_spaces(ch);
             fill(ch,arr);
			 String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		     textBox1->AppendText(temp);
			 wrongs=5;
		     this->label2->Text=wrongs.ToString();
			   this->A->Enabled = true;
			   this->B->Enabled = true;
			   this->C->Enabled = true;
			   this->D->Enabled = true;
			   this->E->Enabled = true;
			   this->F->Enabled = true;
			   this->G->Enabled = true;
			   this->H->Enabled = true;
			   this->I->Enabled = true;
			   this->J->Enabled = true;
			   this->K->Enabled = true;
			   this->L->Enabled = true;
			   this->M->Enabled = true;
			   this->N->Enabled = true;
			   this->O->Enabled = true;
			   this->P->Enabled = true;
			   this->Q->Enabled = true;
			   this->R->Enabled = true;
			   this->S->Enabled = true;
			   this->T->Enabled = true;
			   this->U->Enabled = true;
			   this->V->Enabled = true;
			   this->W->Enabled = true;
			   this->X->Enabled = true;
			   this->Y->Enabled = true;
			   this->Z->Enabled = true;
			   this->LISTEN->Enabled = true;
			   this->button2->Visible = false;
		 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void A_Click(System::Object^  sender, System::EventArgs^  e) {
				 
		 {textBox1->Clear();
		  int no=check(ch,arr,'A');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->A->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		     {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->A->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
			 }
	private: System::Void B_Click(System::Object^  sender, System::EventArgs^  e) {
				  {textBox1->Clear();
		  int no=check(ch,arr,'B');
		  if(no==0)
		    {wrongs--;
		     
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->B->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->B->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
			 }
private: System::Void C_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'C');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();			 
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->C->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->C->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void D_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'D');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->D->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->D->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void E_Click(System::Object^  sender, System::EventArgs^  e) {
		  {textBox1->Clear();
		  int no=check(ch,arr,'E');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->E->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->E->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void F_Click(System::Object^  sender, System::EventArgs^  e) {
			 {textBox1->Clear();
		  int no=check(ch,arr,'F');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->F->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->F->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void G_Click(System::Object^  sender, System::EventArgs^  e) {
		  {textBox1->Clear();
		  int no=check(ch,arr,'G');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->G->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->G->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void H_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'H');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->H->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->H->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void I_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'I');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->I->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->I->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void J_Click(System::Object^  sender, System::EventArgs^  e) {
		  {textBox1->Clear();
		  int no=check(ch,arr,'J');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->J->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->J->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void K_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'K');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->K->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->K->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void L_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'L');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->L->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->L->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void M_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'M');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->M->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->M->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void N_Click(System::Object^  sender, System::EventArgs^  e) {
		  {textBox1->Clear();
		  int no=check(ch,arr,'N');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->N->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->N->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void O_Click(System::Object^  sender, System::EventArgs^  e) {
		  {textBox1->Clear();
		  int no=check(ch,arr,'O');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->O->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->O->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void P_Click(System::Object^  sender, System::EventArgs^  e) {
			 {textBox1->Clear();
		  int no=check(ch,arr,'P');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->P->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->P->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void Q_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'Q');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->Q->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->Q->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void R_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'R');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->R->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->R->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void S_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'S');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->S->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->S->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void T_Click(System::Object^  sender, System::EventArgs^  e) {
		 
		 {textBox1->Clear();
		  int no=check(ch,arr,'T');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->T->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->T->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void U_Click(System::Object^  sender, System::EventArgs^  e) {
		  {textBox1->Clear();
		  int no=check(ch,arr,'U');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->U->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->U->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void V_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'V');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->V->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->V->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }

private: System::Void W_Click(System::Object^  sender, System::EventArgs^  e) {
		  {textBox1->Clear();
		  int no=check(ch,arr,'W');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->W->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->W->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void X_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'X');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->X->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->X->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void Y_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'Y');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->Y->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->Y->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }
private: System::Void Z_Click(System::Object^  sender, System::EventArgs^  e) {
		 {textBox1->Clear();
		  int no=check(ch,arr,'Z');
		  if(no==0)
		    {wrongs--;
		      if(wrongs==0)
			  {playerlost();
			  }
			  else
			  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		       textBox1->AppendText(temp);
		       this->Z->Enabled = false;
		       this->label2->Text=wrongs.ToString();
			  }
		    }
		  else if(no==-1)
		  {playerwon();
		     }
		  else
		  {String^ temp=System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr((arr)));
		   textBox1->AppendText(temp);
		   this->Z->Enabled = false;
		   this->label2->Text=wrongs.ToString();
		  }
		 }
		 }

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}



