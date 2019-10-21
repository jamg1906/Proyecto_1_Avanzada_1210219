#pragma once
#include "Cola.h"
#include "Pila.h"
#include "Digito.h"
#include "Nodo.h"
#include "ListaDobleEnlazada.h"

namespace Proyecto1JavierMorales1210219 {

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
	private: System::Windows::Forms::Button^ shift_btn;
	private: System::Windows::Forms::TextBox^ encolar_txt;
	protected:

	protected:



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ mostrar_cola_btn;



	private: System::Windows::Forms::Button^ encolar_btn;
	private: System::Windows::Forms::TextBox^ shift_txt;
	private: System::Windows::Forms::Button^ shift_dirigido_btn;
	private: System::Windows::Forms::TextBox^ buscar_txt;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ buscar_pila_txt;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ desapilar_txt;
	private: System::Windows::Forms::Button^ desapilar_dirigido_btn;
	private: System::Windows::Forms::Button^ mostrar_pila_btn;
	private: System::Windows::Forms::Button^ apilar_btn;
	private: System::Windows::Forms::Button^ desapilar_btn;
	private: System::Windows::Forms::TextBox^ apilar_txt;
	private: System::Windows::Forms::TextBox^ precio_ingresar_1_txt;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ lista_agregar_txt;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ precio_ingresar_2_txt;
	private: System::Windows::Forms::TextBox^ precio_ingresar_3_txt;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ MOSTRAR_PRECIO_1_TXT;
	private: System::Windows::Forms::Label^ MOSTRAR_PRECIO_2_TXT;
	private: System::Windows::Forms::Label^ MOSTRAR_PRECIO_3_TXT;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ mostrar_cola_txt;
	private: System::Windows::Forms::Label^ mostrar_pila_txt;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;





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
			this->encolar_btn = (gcnew System::Windows::Forms::Button());
			this->shift_btn = (gcnew System::Windows::Forms::Button());
			this->encolar_txt = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buscar_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->shift_txt = (gcnew System::Windows::Forms::TextBox());
			this->shift_dirigido_btn = (gcnew System::Windows::Forms::Button());
			this->mostrar_cola_btn = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->buscar_pila_txt = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lista_agregar_txt = (gcnew System::Windows::Forms::TextBox());
			this->desapilar_txt = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->desapilar_dirigido_btn = (gcnew System::Windows::Forms::Button());
			this->mostrar_pila_btn = (gcnew System::Windows::Forms::Button());
			this->apilar_btn = (gcnew System::Windows::Forms::Button());
			this->desapilar_btn = (gcnew System::Windows::Forms::Button());
			this->apilar_txt = (gcnew System::Windows::Forms::TextBox());
			this->precio_ingresar_1_txt = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->precio_ingresar_2_txt = (gcnew System::Windows::Forms::TextBox());
			this->precio_ingresar_3_txt = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->MOSTRAR_PRECIO_1_TXT = (gcnew System::Windows::Forms::Label());
			this->MOSTRAR_PRECIO_2_TXT = (gcnew System::Windows::Forms::Label());
			this->MOSTRAR_PRECIO_3_TXT = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->mostrar_cola_txt = (gcnew System::Windows::Forms::Label());
			this->mostrar_pila_txt = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// encolar_btn
			// 
			this->encolar_btn->Location = System::Drawing::Point(20, 19);
			this->encolar_btn->Name = L"encolar_btn";
			this->encolar_btn->Size = System::Drawing::Size(75, 23);
			this->encolar_btn->TabIndex = 0;
			this->encolar_btn->Text = L"Encolar";
			this->encolar_btn->UseVisualStyleBackColor = true;
			this->encolar_btn->Click += gcnew System::EventHandler(this, &MyForm::Encolar_btn_Click);
			// 
			// shift_btn
			// 
			this->shift_btn->Location = System::Drawing::Point(20, 62);
			this->shift_btn->Name = L"shift_btn";
			this->shift_btn->Size = System::Drawing::Size(75, 23);
			this->shift_btn->TabIndex = 1;
			this->shift_btn->Text = L"Shift";
			this->shift_btn->UseVisualStyleBackColor = true;
			this->shift_btn->Click += gcnew System::EventHandler(this, &MyForm::Shift_btn_Click);
			// 
			// encolar_txt
			// 
			this->encolar_txt->Location = System::Drawing::Point(130, 22);
			this->encolar_txt->Name = L"encolar_txt";
			this->encolar_txt->Size = System::Drawing::Size(100, 20);
			this->encolar_txt->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buscar_txt);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->shift_txt);
			this->groupBox1->Controls->Add(this->shift_dirigido_btn);
			this->groupBox1->Controls->Add(this->mostrar_cola_btn);
			this->groupBox1->Controls->Add(this->encolar_btn);
			this->groupBox1->Controls->Add(this->shift_btn);
			this->groupBox1->Controls->Add(this->encolar_txt);
			this->groupBox1->Location = System::Drawing::Point(32, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(10, 10);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cola";
			this->groupBox1->Visible = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::GroupBox1_Enter);
			// 
			// buscar_txt
			// 
			this->buscar_txt->Location = System::Drawing::Point(130, 213);
			this->buscar_txt->Name = L"buscar_txt";
			this->buscar_txt->Size = System::Drawing::Size(100, 20);
			this->buscar_txt->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// shift_txt
			// 
			this->shift_txt->Location = System::Drawing::Point(130, 158);
			this->shift_txt->Name = L"shift_txt";
			this->shift_txt->Size = System::Drawing::Size(100, 20);
			this->shift_txt->TabIndex = 7;
			// 
			// shift_dirigido_btn
			// 
			this->shift_dirigido_btn->Location = System::Drawing::Point(20, 158);
			this->shift_dirigido_btn->Name = L"shift_dirigido_btn";
			this->shift_dirigido_btn->Size = System::Drawing::Size(75, 23);
			this->shift_dirigido_btn->TabIndex = 6;
			this->shift_dirigido_btn->Text = L"Shift a:";
			this->shift_dirigido_btn->UseVisualStyleBackColor = true;
			this->shift_dirigido_btn->Click += gcnew System::EventHandler(this, &MyForm::Shift_dirigido_btn_Click);
			// 
			// mostrar_cola_btn
			// 
			this->mostrar_cola_btn->Location = System::Drawing::Point(20, 109);
			this->mostrar_cola_btn->Name = L"mostrar_cola_btn";
			this->mostrar_cola_btn->Size = System::Drawing::Size(75, 23);
			this->mostrar_cola_btn->TabIndex = 5;
			this->mostrar_cola_btn->Text = L"Mostrar Cola";
			this->mostrar_cola_btn->UseVisualStyleBackColor = true;
			this->mostrar_cola_btn->Click += gcnew System::EventHandler(this, &MyForm::Mostrar_cola_btn_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->buscar_pila_txt);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->lista_agregar_txt);
			this->groupBox2->Controls->Add(this->desapilar_txt);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->desapilar_dirigido_btn);
			this->groupBox2->Controls->Add(this->mostrar_pila_btn);
			this->groupBox2->Controls->Add(this->apilar_btn);
			this->groupBox2->Controls->Add(this->desapilar_btn);
			this->groupBox2->Controls->Add(this->apilar_txt);
			this->groupBox2->Location = System::Drawing::Point(32, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(58, 10);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Pila";
			this->groupBox2->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(410, 180);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 18;
			this->button6->Text = L"mostrarlista";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// buscar_pila_txt
			// 
			this->buscar_pila_txt->Location = System::Drawing::Point(130, 213);
			this->buscar_pila_txt->Name = L"buscar_pila_txt";
			this->buscar_pila_txt->Size = System::Drawing::Size(100, 20);
			this->buscar_pila_txt->TabIndex = 9;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(262, 164);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 54);
			this->button5->TabIndex = 17;
			this->button5->Text = L"prueba eliminar lista";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// lista_agregar_txt
			// 
			this->lista_agregar_txt->Location = System::Drawing::Point(417, 112);
			this->lista_agregar_txt->Name = L"lista_agregar_txt";
			this->lista_agregar_txt->Size = System::Drawing::Size(100, 20);
			this->lista_agregar_txt->TabIndex = 16;
			// 
			// desapilar_txt
			// 
			this->desapilar_txt->Location = System::Drawing::Point(130, 158);
			this->desapilar_txt->Name = L"desapilar_txt";
			this->desapilar_txt->Size = System::Drawing::Size(100, 20);
			this->desapilar_txt->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(262, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 50);
			this->button4->TabIndex = 15;
			this->button4->Text = L"prueba";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// desapilar_dirigido_btn
			// 
			this->desapilar_dirigido_btn->Location = System::Drawing::Point(20, 158);
			this->desapilar_dirigido_btn->Name = L"desapilar_dirigido_btn";
			this->desapilar_dirigido_btn->Size = System::Drawing::Size(75, 23);
			this->desapilar_dirigido_btn->TabIndex = 6;
			this->desapilar_dirigido_btn->Text = L"Desapilar:";
			this->desapilar_dirigido_btn->UseVisualStyleBackColor = true;
			this->desapilar_dirigido_btn->Click += gcnew System::EventHandler(this, &MyForm::Desapilar_dirigido_btn_Click);
			// 
			// mostrar_pila_btn
			// 
			this->mostrar_pila_btn->Location = System::Drawing::Point(20, 109);
			this->mostrar_pila_btn->Name = L"mostrar_pila_btn";
			this->mostrar_pila_btn->Size = System::Drawing::Size(75, 23);
			this->mostrar_pila_btn->TabIndex = 5;
			this->mostrar_pila_btn->Text = L"Mostrar pila";
			this->mostrar_pila_btn->UseVisualStyleBackColor = true;
			this->mostrar_pila_btn->Click += gcnew System::EventHandler(this, &MyForm::Mostrar_pila_btn_Click);
			// 
			// apilar_btn
			// 
			this->apilar_btn->Location = System::Drawing::Point(20, 19);
			this->apilar_btn->Name = L"apilar_btn";
			this->apilar_btn->Size = System::Drawing::Size(75, 23);
			this->apilar_btn->TabIndex = 0;
			this->apilar_btn->Text = L"Apilar";
			this->apilar_btn->UseVisualStyleBackColor = true;
			this->apilar_btn->Click += gcnew System::EventHandler(this, &MyForm::Apilar_btn_Click);
			// 
			// desapilar_btn
			// 
			this->desapilar_btn->Location = System::Drawing::Point(20, 62);
			this->desapilar_btn->Name = L"desapilar_btn";
			this->desapilar_btn->Size = System::Drawing::Size(75, 23);
			this->desapilar_btn->TabIndex = 1;
			this->desapilar_btn->Text = L"Desapilar";
			this->desapilar_btn->UseVisualStyleBackColor = true;
			this->desapilar_btn->Click += gcnew System::EventHandler(this, &MyForm::Desapilar_btn_Click);
			// 
			// apilar_txt
			// 
			this->apilar_txt->Location = System::Drawing::Point(130, 22);
			this->apilar_txt->Name = L"apilar_txt";
			this->apilar_txt->Size = System::Drawing::Size(100, 20);
			this->apilar_txt->TabIndex = 3;
			// 
			// precio_ingresar_1_txt
			// 
			this->precio_ingresar_1_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->precio_ingresar_1_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precio_ingresar_1_txt->Location = System::Drawing::Point(362, 305);
			this->precio_ingresar_1_txt->Name = L"precio_ingresar_1_txt";
			this->precio_ingresar_1_txt->Size = System::Drawing::Size(59, 26);
			this->precio_ingresar_1_txt->TabIndex = 11;
			this->precio_ingresar_1_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->precio_ingresar_1_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::Precio_ingresar_1_txt_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(237, 283);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 32);
			this->button3->TabIndex = 14;
			this->button3->Text = L"PONER PRECIO 1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(47, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 31);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Pila\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(140, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 31);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Cola";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(237, 369);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(105, 32);
			this->button7->TabIndex = 19;
			this->button7->Text = L"PONER PRECIO 2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(237, 455);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(105, 32);
			this->button8->TabIndex = 20;
			this->button8->Text = L"PONER PRECIO 3";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(32, 565);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(83, 23);
			this->button9->TabIndex = 21;
			this->button9->Text = L"ORDENAR";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(133, 565);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(81, 23);
			this->button10->TabIndex = 22;
			this->button10->Text = L"ORDENAR";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button10_Click);
			// 
			// precio_ingresar_2_txt
			// 
			this->precio_ingresar_2_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->precio_ingresar_2_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precio_ingresar_2_txt->Location = System::Drawing::Point(362, 392);
			this->precio_ingresar_2_txt->Name = L"precio_ingresar_2_txt";
			this->precio_ingresar_2_txt->Size = System::Drawing::Size(59, 26);
			this->precio_ingresar_2_txt->TabIndex = 23;
			this->precio_ingresar_2_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// precio_ingresar_3_txt
			// 
			this->precio_ingresar_3_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->precio_ingresar_3_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precio_ingresar_3_txt->Location = System::Drawing::Point(362, 475);
			this->precio_ingresar_3_txt->Name = L"precio_ingresar_3_txt";
			this->precio_ingresar_3_txt->Size = System::Drawing::Size(59, 26);
			this->precio_ingresar_3_txt->TabIndex = 24;
			this->precio_ingresar_3_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(237, 321);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(105, 32);
			this->button11->TabIndex = 25;
			this->button11->Text = L"ELIMINAR";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(237, 407);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(105, 32);
			this->button12->TabIndex = 26;
			this->button12->Text = L"ELIMINAR";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(237, 493);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(105, 32);
			this->button13->TabIndex = 27;
			this->button13->Text = L"ELIMINAR";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(492, 26);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 32);
			this->button14->TabIndex = 28;
			this->button14->Text = L"REINICIAR TODO";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(598, 26);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 32);
			this->button15->TabIndex = 29;
			this->button15->Text = L"SALIR";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Button15_Click);
			// 
			// MOSTRAR_PRECIO_1_TXT
			// 
			this->MOSTRAR_PRECIO_1_TXT->AutoSize = true;
			this->MOSTRAR_PRECIO_1_TXT->BackColor = System::Drawing::Color::Transparent;
			this->MOSTRAR_PRECIO_1_TXT->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MOSTRAR_PRECIO_1_TXT->ForeColor = System::Drawing::Color::Moccasin;
			this->MOSTRAR_PRECIO_1_TXT->Location = System::Drawing::Point(535, 301);
			this->MOSTRAR_PRECIO_1_TXT->Name = L"MOSTRAR_PRECIO_1_TXT";
			this->MOSTRAR_PRECIO_1_TXT->Size = System::Drawing::Size(0, 38);
			this->MOSTRAR_PRECIO_1_TXT->TabIndex = 30;
			this->MOSTRAR_PRECIO_1_TXT->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MOSTRAR_PRECIO_2_TXT
			// 
			this->MOSTRAR_PRECIO_2_TXT->AutoSize = true;
			this->MOSTRAR_PRECIO_2_TXT->BackColor = System::Drawing::Color::Transparent;
			this->MOSTRAR_PRECIO_2_TXT->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MOSTRAR_PRECIO_2_TXT->ForeColor = System::Drawing::Color::Moccasin;
			this->MOSTRAR_PRECIO_2_TXT->Location = System::Drawing::Point(535, 386);
			this->MOSTRAR_PRECIO_2_TXT->Name = L"MOSTRAR_PRECIO_2_TXT";
			this->MOSTRAR_PRECIO_2_TXT->Size = System::Drawing::Size(0, 38);
			this->MOSTRAR_PRECIO_2_TXT->TabIndex = 31;
			this->MOSTRAR_PRECIO_2_TXT->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MOSTRAR_PRECIO_3_TXT
			// 
			this->MOSTRAR_PRECIO_3_TXT->AutoSize = true;
			this->MOSTRAR_PRECIO_3_TXT->BackColor = System::Drawing::Color::Transparent;
			this->MOSTRAR_PRECIO_3_TXT->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MOSTRAR_PRECIO_3_TXT->ForeColor = System::Drawing::Color::Moccasin;
			this->MOSTRAR_PRECIO_3_TXT->Location = System::Drawing::Point(535, 467);
			this->MOSTRAR_PRECIO_3_TXT->Name = L"MOSTRAR_PRECIO_3_TXT";
			this->MOSTRAR_PRECIO_3_TXT->Size = System::Drawing::Size(0, 38);
			this->MOSTRAR_PRECIO_3_TXT->TabIndex = 32;
			this->MOSTRAR_PRECIO_3_TXT->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Aqua;
			this->label1->Location = System::Drawing::Point(514, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 44);
			this->label1->TabIndex = 33;
			this->label1->Text = L"PetroPlus";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(133, 136);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 423);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// mostrar_cola_txt
			// 
			this->mostrar_cola_txt->AutoSize = true;
			this->mostrar_cola_txt->BackColor = System::Drawing::Color::Transparent;
			this->mostrar_cola_txt->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mostrar_cola_txt->ForeColor = System::Drawing::Color::Moccasin;
			this->mostrar_cola_txt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mostrar_cola_txt.Image")));
			this->mostrar_cola_txt->Location = System::Drawing::Point(155, 159);
			this->mostrar_cola_txt->Name = L"mostrar_cola_txt";
			this->mostrar_cola_txt->Size = System::Drawing::Size(29, 38);
			this->mostrar_cola_txt->TabIndex = 35;
			this->mostrar_cola_txt->Text = L"s";
			this->mostrar_cola_txt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// mostrar_pila_txt
			// 
			this->mostrar_pila_txt->AutoSize = true;
			this->mostrar_pila_txt->BackColor = System::Drawing::Color::Transparent;
			this->mostrar_pila_txt->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->mostrar_pila_txt->ForeColor = System::Drawing::Color::Moccasin;
			this->mostrar_pila_txt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mostrar_pila_txt.Image")));
			this->mostrar_pila_txt->Location = System::Drawing::Point(55, 159);
			this->mostrar_pila_txt->Name = L"mostrar_pila_txt";
			this->mostrar_pila_txt->Size = System::Drawing::Size(29, 38);
			this->mostrar_pila_txt->TabIndex = 36;
			this->mostrar_pila_txt->Text = L"s";
			this->mostrar_pila_txt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(32, 136);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(81, 423);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 37;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(38, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(255, 22);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Javier Andrés Morales González";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(38, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 22);
			this->label5->TabIndex = 39;
			this->label5->Text = L"1210219";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(815, 610);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->mostrar_pila_txt);
			this->Controls->Add(this->mostrar_cola_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MOSTRAR_PRECIO_3_TXT);
			this->Controls->Add(this->MOSTRAR_PRECIO_2_TXT);
			this->Controls->Add(this->MOSTRAR_PRECIO_1_TXT);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->precio_ingresar_3_txt);
			this->Controls->Add(this->precio_ingresar_2_txt);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->precio_ingresar_1_txt);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"Proyecto 1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//DECLARACION DE CLASE DE MIS COAS Y LISTAS 
		Cola* Cola1 = new Cola();
		Pila* Pila1 = new Pila();
		ListaDobleEnlazada* Lista1 = new ListaDobleEnlazada();
		ListaDobleEnlazada* Lista2 = new ListaDobleEnlazada();
		ListaDobleEnlazada* Lista3 = new ListaDobleEnlazada();

	private: System::Void RichTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void GroupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Encolar_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//nO USADO
	Digito Digito_a_encolar;
	int n = System::Convert::ToInt32(encolar_txt->Text);
	Digito_a_encolar.Crear_Digito(n);
	Cola1->Encolar(Digito_a_encolar);
	mostrar_cola_btn->PerformClick();
}
private: System::Void Shift_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//nO USADO
	Digito Digito_descolado;
	Digito_descolado = Cola1->Shift_Head();
	if (Digito_descolado.valor == -1)
	{
		System::Windows::Forms::MessageBox::Show("");
	}
	else
	{
		System::Windows::Forms::MessageBox::Show(Digito_descolado.valor + "");
	}
}
private: System::Void Mostrar_cola_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//nO USADO
	mostrar_cola_txt->Text = Cola1->ObtenerCola(Cola1);
}
private: System::Void Shift_dirigido_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//nO USADO
	int n = Convert::ToInt32(shift_txt->Text);
	Digito Retirado = Cola1->Shift_Numero(n, Cola1);
	System::Windows::Forms::MessageBox::Show(Retirado.valor + "");
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//nO USADO
	bool esta;
	int n = Convert::ToInt32(buscar_txt->Text);
	esta = Cola1->YaExiste(n, Cola1);
	System::Windows::Forms::MessageBox::Show(esta + "");
}
private: System::Void Apilar_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//nO USADO
	Digito Digito_a_Apilar;
	int n1 = System::Convert::ToInt32(apilar_txt->Text);
	Digito_a_Apilar.Crear_Digito(n1);
	Pila1->Apilar(Digito_a_Apilar);
	mostrar_pila_btn->PerformClick();
}
private: System::Void Mostrar_pila_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//NO USADO
	mostrar_pila_txt->Text = Pila1->ObtenerPila(Pila1);
}
private: System::Void Desapilar_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//nO USADO
	Digito Desapilado;
	Desapilado = Pila1->Desapilar();
	if (Desapilado.valor == -1)
	{
		System::Windows::Forms::MessageBox::Show("");
	}
	else
	{
		System::Windows::Forms::MessageBox::Show(Desapilado.valor + "");
	}
}
private: System::Void Desapilar_dirigido_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//nO USADO
	int n = Convert::ToInt32(desapilar_txt->Text);
	Digito DesapiladoN = Pila1->DesapilarNumero(n, Pila1);
	System::Windows::Forms::MessageBox::Show(DesapiladoN.valor + "");
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//nO USADO
	bool estaOno;
	int n = Convert::ToInt32(buscar_pila_txt->Text);
	estaOno = Pila1->YaExiste_Pila(n, Pila1);
	System::Windows::Forms::MessageBox::Show(estaOno + "");
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ Precio1 = precio_ingresar_1_txt->Text;
	String^ punto = ".";
	String^ a;
	//aqui se verifica que el precio ingresado tenga el formato requerido para dejarlo pasar o no.
	int P1Q1, P1Q2, P1C1, P1C2;
	bool continuar = false;
	try
	{
		a = Convert::ToString(Precio1[2]);
		if (Precio1->Length != 5 || a != punto)
		{
			System::Windows::Forms::MessageBox::Show("Número no válido. Ejemplo: 21.62, 76.31, etc.");
		}
		else
		{
			P1Q1 = Convert::ToInt32(Convert::ToString(Precio1[0]));
			P1Q2 = Convert::ToInt32(Convert::ToString(Precio1[1]));
			P1C1 = Convert::ToInt32(Convert::ToString(Precio1[3]));
			P1C2 = Convert::ToInt32(Convert::ToString(Precio1[4]));
			continuar = true;
			MessageBox::Show("Ingresaste: " + P1Q1 + "" + P1Q2 + "." + P1C1 + "" + P1C2);
		}
	}
	catch(...)
	{
		System::Windows::Forms::MessageBox::Show("Dato ingresado no válido. Ejemplo: 21.62, 76.31, etc.");
	}
	//ACA YA TENEMOS EL NUMERO A MOSTRAR GUARDADO EN 4 VARIABLES SEPARADO POR DIGITOS Y LA COLA Y PILA LLENAS
	for (int i = 0; i < 4; i++)
	{
		Digito Regresar = Lista1->Eliminar();
		bool estaencola;
		bool estaenpila;
		estaenpila = Pila1->YaExiste_Pila(Regresar.valor, Pila1);
		if (estaenpila == false)
		{
			Pila1->Apilar(Regresar);
		}
		else
		{
			Cola1->Encolar(Regresar);
		}
	}
	//EL METODO ANTERIOR (DESDE EL FOR) REGRESA TODOS LOS NUMEROS DE LA LISTA A LA PILA O A LA COLA.
	if (continuar == true)
	{
		//INICIO PRECIO 1 QUETZAL 1
		bool hayPilaQ1;
		bool hayColaQ1;
		do
		{
			hayPilaQ1 = Pila1->YaExiste_Pila(P1Q1, Pila1);
			if (hayPilaQ1 == true)
			{
				Digito T = Pila1->DesapilarNumero(P1Q1, Pila1);
				Lista1->Agregar(T);
			}
			hayColaQ1 = Cola1->YaExiste(P1Q1, Cola1);
			if (hayColaQ1 == true && hayPilaQ1 == false)
			{
				Digito T = Cola1->Shift_Numero(P1Q1, Cola1);
				Lista1->Agregar(T);
			}
			if (hayColaQ1 == false && hayPilaQ1 == false)
			{
				if (P1Q1 == 9)
				{
					P1Q1 = 0;
				}
				else
				{
					P1Q1++;
				}
			}

		} while (hayPilaQ1 == false && hayColaQ1 == false);
		//FIN PRECIO 1 QUETZAL 1

		//INICIO PRECIO 1 QUETZAL 2
		bool hayPilaQ2;
		bool hayColaQ2;
		do
		{
			hayPilaQ2 = Pila1->YaExiste_Pila(P1Q2, Pila1);
			if (hayPilaQ2 == true)
			{
				Digito T = Pila1->DesapilarNumero(P1Q2, Pila1);
				Lista1->Agregar(T);
			}
			hayColaQ2 = Cola1->YaExiste(P1Q2, Cola1);
			if (hayColaQ2 == true && hayPilaQ2 == false)
			{
				Digito T = Cola1->Shift_Numero(P1Q2, Cola1);
				Lista1->Agregar(T);
			}
			if (hayColaQ2 == false && hayPilaQ2 == false)
			{
				if (P1Q2 == 9)
				{
					P1Q2 = 0;
				}
				else
				{
					P1Q2++;
				}
			}

		} while (hayPilaQ2 == false && hayColaQ2 == false);
		//FIN PRECIO 1 QUETZAL 2

		//INICIO PRECIO 1 CENTAVO 1
		bool hayPilaC1;
		bool hayColaC1;
		do
		{
			hayPilaC1 = Pila1->YaExiste_Pila(P1C1, Pila1);
			if (hayPilaC1 == true)
			{
				Digito T = Pila1->DesapilarNumero(P1C1, Pila1);
				Lista1->Agregar(T);
			}
			hayColaC1 = Cola1->YaExiste(P1C1, Cola1);
			if (hayColaC1 == true && hayPilaC1 == false)
			{
				Digito T = Cola1->Shift_Numero(P1C1, Cola1);
				Lista1->Agregar(T);
			}
			if (hayColaC1 == false && hayPilaC1 == false)
			{
				if (P1C1 == 9)
				{
					P1C1 = 0;
				}
				else
				{
					P1C1++;
				}
			}

		} while (hayPilaC1 == false && hayColaC1 == false);
		//FIN PRECIO 1 CENTAVO 1

		//INICIO PRECIO 1 CENTAVO 2
		bool hayPilaC2;
		bool hayColaC2;
		do
		{
			hayPilaC2 = Pila1->YaExiste_Pila(P1C2, Pila1);
			if (hayPilaC2 == true)
			{
				Digito T = Pila1->DesapilarNumero(P1C2, Pila1);
				Lista1->Agregar(T);
			}
			hayColaC2 = Cola1->YaExiste(P1C2, Cola1);
			if (hayColaC2 == true && hayPilaC2 == false)
			{
				Digito T = Cola1->Shift_Numero(P1C2, Cola1);
				Lista1->Agregar(T);
			}
			if (hayColaC2 == false && hayPilaC2 == false)
			{
				if (P1C2 == 9)
				{
					P1C2 = 0;
				}
				else
				{
					P1C2++;
				}
			}

		}while (hayPilaC2 == false && hayColaC2 == false);
		//FIN PRECIO 1 CENTAVO 2

		MOSTRAR_PRECIO_1_TXT->Text = Lista1->ObtenerLista(Lista1);
		mostrar_pila_txt->Text = Pila1->ObtenerPila(Pila1);
		mostrar_cola_txt->Text = Cola1->ObtenerCola(Cola1);
		button3->Text = "CAMBIAR PRECIO 1";
	}




}
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//Imprime la lista
	int n = Convert::ToInt32(lista_agregar_txt->Text);
	Digito D;
	D.Crear_Digito(n);
	Lista1->Agregar(D);
	System::Windows::Forms::MessageBox::Show(Lista1->ObtenerLista(Lista1));
}
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) 
{

	Digito D;
	D = Lista1->Eliminar();
	System::Windows::Forms::MessageBox::Show(D.valor + "");
	System::Windows::Forms::MessageBox::Show(Lista1->ObtenerLista(Lista1));
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	//PONE LA PANTALLA AL CENTRO, LLENA LA PILA Y LA COLA Y LA IMPRIME
	//LO HACE DURANTE LA EJECUCIÓN.
	CenterToScreen();
	Digito D;
	for (int i = 0; i < 10; i++)
	{
		D.Crear_Digito(i);
		Pila1->Apilar(D);
		Cola1->Encolar(D);
	}
	mostrar_pila_txt->Text = Pila1->ObtenerPila(Pila1);
	mostrar_cola_txt->Text = Cola1->ObtenerCola(Cola1);
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::Windows::Forms::MessageBox::Show(Lista1->ObtenerLista(Lista1));
}
private: System::Void Precio_ingresar_1_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	//mISMO PROCEDIMIENTO QUE PARA EL PRECIO 1, SE CAMBIAN NOMBRES DE VARIABLES.
	String^ Precio2 = precio_ingresar_2_txt->Text;
	String^ punto = ".";
	String^ a;
	int P2Q1, P2Q2, P2C1, P2C2;
	bool continuar = false;
	try
	{
		a = Convert::ToString(Precio2[2]);
		if (Precio2->Length != 5 || a != punto)
		{
			System::Windows::Forms::MessageBox::Show("Número no válido. Ejemplo: 21.62, 76.31, etc.");
		}
		else
		{
			P2Q1 = Convert::ToInt32(Convert::ToString(Precio2[0]));
			P2Q2 = Convert::ToInt32(Convert::ToString(Precio2[1]));
			P2C1 = Convert::ToInt32(Convert::ToString(Precio2[3]));
			P2C2 = Convert::ToInt32(Convert::ToString(Precio2[4]));
			continuar = true;
			MessageBox::Show(P2Q1 + "" + P2Q2 + "." + P2C1 + "" + P2C2);
		}
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("Dato ingresado no válido. Ejemplo: 21.62, 76.31, etc.");
	}
	//ACA YA TENEMOS EL NUMERO A MOSTRAR GUARDADO EN 4 VARIABLES SEPARADO POR DIGITOS Y LA COLA Y PILA LLENAS
	for (int i = 0; i < 4; i++)
	{
		Digito Regresar = Lista2->Eliminar();
		bool estaencola;
		bool estaenpila;
		estaenpila = Pila1->YaExiste_Pila(Regresar.valor, Pila1);
		if (estaenpila == false)
		{
			Pila1->Apilar(Regresar);
		}
		else
		{
			Cola1->Encolar(Regresar);
		}
	}
	//EL METODO ANTERIOR (DESDE EL FOR) REGRESA TODOS LOS NUMEROS DE LA LISTA A LA PILA O A LA COLA.
	if (continuar == true)
	{
		//INICIO PRECIO 1 QUETZAL 1
		bool hayPilaQ1;
		bool hayColaQ1;
		do
		{
			hayPilaQ1 = Pila1->YaExiste_Pila(P2Q1, Pila1);
			if (hayPilaQ1 == true)
			{
				Digito T = Pila1->DesapilarNumero(P2Q1, Pila1);
				Lista2->Agregar(T);
			}
			hayColaQ1 = Cola1->YaExiste(P2Q1, Cola1);
			if (hayColaQ1 == true && hayPilaQ1 == false)
			{
				Digito T = Cola1->Shift_Numero(P2Q1, Cola1);
				Lista2->Agregar(T);
			}
			if (hayColaQ1 == false && hayPilaQ1 == false)
			{
				if (P2Q1 == 9)
				{
					P2Q1 = 0;
				}
				else
				{
					P2Q1++;
				}
			}

		} while (hayPilaQ1 == false && hayColaQ1 == false);
		//FIN PRECIO 2 QUETZAL 1

		//INICIO PRECIO 2 QUETZAL 2
		bool hayPilaQ2;
		bool hayColaQ2;
		do
		{
			hayPilaQ2 = Pila1->YaExiste_Pila(P2Q2, Pila1);
			if (hayPilaQ2 == true)
			{
				Digito T = Pila1->DesapilarNumero(P2Q2, Pila1);
				Lista2->Agregar(T);
			}
			hayColaQ2 = Cola1->YaExiste(P2Q2, Cola1);
			if (hayColaQ2 == true && hayPilaQ2 == false)
			{
				Digito T = Cola1->Shift_Numero(P2Q2, Cola1);
				Lista2->Agregar(T);
			}
			if (hayColaQ2 == false && hayPilaQ2 == false)
			{
				if (P2Q2 == 9)
				{
					P2Q2 = 0;
				}
				else
				{
					P2Q2++;
				}
			}

		} while (hayPilaQ2 == false && hayColaQ2 == false);
		//FIN PRECIO 2 QUETZAL 2

		//INICIO PRECIO 2 CENTAVO 1
		bool hayPilaC1;
		bool hayColaC1;
		do
		{
			hayPilaC1 = Pila1->YaExiste_Pila(P2C1, Pila1);
			if (hayPilaC1 == true)
			{
				Digito T = Pila1->DesapilarNumero(P2C1, Pila1);
				Lista2->Agregar(T);
			}
			hayColaC1 = Cola1->YaExiste(P2C1, Cola1);
			if (hayColaC1 == true && hayPilaC1 == false)
			{
				Digito T = Cola1->Shift_Numero(P2C1, Cola1);
				Lista2->Agregar(T);
			}
			if (hayColaC1 == false && hayPilaC1 == false)
			{
				if (P2C1 == 9)
				{
					P2C1 = 0;
				}
				else
				{
					P2C1++;
				}
			}

		} while (hayPilaC1 == false && hayColaC1 == false);
		//FIN PRECIO 2 CENTAVO 1

		//INICIO PRECIO 2 CENTAVO 2
		bool hayPilaC2;
		bool hayColaC2;
		do
		{
			hayPilaC2 = Pila1->YaExiste_Pila(P2C2, Pila1);
			if (hayPilaC2 == true)
			{
				Digito T = Pila1->DesapilarNumero(P2C2, Pila1);
				Lista2->Agregar(T);
			}
			hayColaC2 = Cola1->YaExiste(P2C2, Cola1);
			if (hayColaC2 == true && hayPilaC2 == false)
			{
				Digito T = Cola1->Shift_Numero(P2C2, Cola1);
				Lista2->Agregar(T);
			}
			if (hayColaC2 == false && hayPilaC2 == false)
			{
				if (P2C2 == 9)
				{
					P2C2 = 0;
				}
				else
				{
					P2C2++;
				}
			}

		} while (hayPilaC2 == false && hayColaC2 == false);
		//FIN PRECIO 2 CENTAVO 2

		MOSTRAR_PRECIO_2_TXT->Text = Lista2->ObtenerLista(Lista2);
		mostrar_pila_txt->Text = Pila1->ObtenerPila(Pila1);
		mostrar_cola_txt->Text = Cola1->ObtenerCola(Cola1);
		button7->Text = "CAMBIAR PRECIO 2";
	}
}
private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//MISMO PROCEDIMIENTO QUE PARA EL PRECIO 1 Y 2, SOLO SE CAMBIAN NOMBRES DE VARIABLES.
	String^ Precio3 = precio_ingresar_3_txt->Text;
	String^ punto = ".";
	String^ a;
	int P3Q1, P3Q2, P3C1, P3C2;
	bool continuar = false;
	try
	{
		a = Convert::ToString(Precio3[2]);
		if (Precio3->Length != 5 || a != punto)
		{
			System::Windows::Forms::MessageBox::Show("Número no válido. Ejemplo: 21.62, 76.31, etc.");
		}
		else
		{
			P3Q1 = Convert::ToInt32(Convert::ToString(Precio3[0]));
			P3Q2 = Convert::ToInt32(Convert::ToString(Precio3[1]));
			P3C1 = Convert::ToInt32(Convert::ToString(Precio3[3]));
			P3C2 = Convert::ToInt32(Convert::ToString(Precio3[4]));
			continuar = true;
			MessageBox::Show(P3Q1 + "" + P3Q2 + "." + P3C1 + "" + P3C2);
		}
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("Dato ingresado no válido. Ejemplo: 21.62, 76.31, etc.");
	}
	//ACA YA TENEMOS EL NUMERO A MOSTRAR GUARDADO EN 4 VARIABLES SEPARADO POR DIGITOS Y LA COLA Y PILA LLENAS
	for (int i = 0; i < 4; i++)
	{
		Digito Regresar = Lista3->Eliminar();
		bool estaencola;
		bool estaenpila;
		estaenpila = Pila1->YaExiste_Pila(Regresar.valor, Pila1);
		if (estaenpila == false)
		{
			Pila1->Apilar(Regresar);
		}
		else
		{
			Cola1->Encolar(Regresar);
		}
	}
	//EL METODO ANTERIOR (DESDE EL FOR) REGRESA TODOS LOS NUMEROS DE LA LISTA A LA PILA O A LA COLA.
	if (continuar == true)
	{
		//INICIO PRECIO 3 QUETZAL 1
		bool hayPilaQ1;
		bool hayColaQ1;
		do
		{
			hayPilaQ1 = Pila1->YaExiste_Pila(P3Q1, Pila1);
			if (hayPilaQ1 == true)
			{
				Digito T = Pila1->DesapilarNumero(P3Q1, Pila1);
				Lista3->Agregar(T);
			}
			hayColaQ1 = Cola1->YaExiste(P3Q1, Cola1);
			if (hayColaQ1 == true && hayPilaQ1 == false)
			{
				Digito T = Cola1->Shift_Numero(P3Q1, Cola1);
				Lista3->Agregar(T);
			}
			if (hayColaQ1 == false && hayPilaQ1 == false)
			{
				if (P3Q1 == 9)
				{
					P3Q1 = 0;
				}
				else
				{
					P3Q1++;
				}
			}

		} while (hayPilaQ1 == false && hayColaQ1 == false);
		//FIN PRECIO 3 QUETZAL 1

		//INICIO PRECIO 3 QUETZAL 2
		bool hayPilaQ2;
		bool hayColaQ2;
		do
		{
			hayPilaQ2 = Pila1->YaExiste_Pila(P3Q2, Pila1);
			if (hayPilaQ2 == true)
			{
				Digito T = Pila1->DesapilarNumero(P3Q2, Pila1);
				Lista3->Agregar(T);
			}
			hayColaQ2 = Cola1->YaExiste(P3Q2, Cola1);
			if (hayColaQ2 == true && hayPilaQ2 == false)
			{
				Digito T = Cola1->Shift_Numero(P3Q2, Cola1);
				Lista3->Agregar(T);
			}
			if (hayColaQ2 == false && hayPilaQ2 == false)
			{
				if (P3Q2 == 9)
				{
					P3Q2 = 0;
				}
				else
				{
					P3Q2++;
				}
			}

		} while (hayPilaQ2 == false && hayColaQ2 == false);
		//FIN PRECIO 3 QUETZAL 2

		//INICIO PRECIO 3 CENTAVO 1
		bool hayPilaC1;
		bool hayColaC1;
		do
		{
			hayPilaC1 = Pila1->YaExiste_Pila(P3C1, Pila1);
			if (hayPilaC1 == true)
			{
				Digito T = Pila1->DesapilarNumero(P3C1, Pila1);
				Lista3->Agregar(T);
			}
			hayColaC1 = Cola1->YaExiste(P3C1, Cola1);
			if (hayColaC1 == true && hayPilaC1 == false)
			{
				Digito T = Cola1->Shift_Numero(P3C1, Cola1);
				Lista3->Agregar(T);
			}
			if (hayColaC1 == false && hayPilaC1 == false)
			{
				if (P3C1 == 9)
				{
					P3C1 = 0;
				}
				else
				{
					P3C1++;
				}
			}

		} while (hayPilaC1 == false && hayColaC1 == false);
		//FIN PRECIO 3 CENTAVO 1

		//INICIO PRECIO 3 CENTAVO 2
		bool hayPilaC2;
		bool hayColaC2;
		do
		{
			hayPilaC2 = Pila1->YaExiste_Pila(P3C2, Pila1);
			if (hayPilaC2 == true)
			{
				Digito T = Pila1->DesapilarNumero(P3C2, Pila1);
				Lista3->Agregar(T);
			}
			hayColaC2 = Cola1->YaExiste(P3C2, Cola1);
			if (hayColaC2 == true && hayPilaC2 == false)
			{
				Digito T = Cola1->Shift_Numero(P3C2, Cola1);
				Lista3->Agregar(T);
			}
			if (hayColaC2 == false && hayPilaC2 == false)
			{
				if (P3C2 == 9)
				{
					P3C2 = 0;
				}
				else
				{
					P3C2++;
				}
			}

		} while (hayPilaC2 == false && hayColaC2 == false);
		//FIN PRECIO 3 CENTAVO 2

		MOSTRAR_PRECIO_3_TXT->Text = Lista3->ObtenerLista(Lista3);
		mostrar_pila_txt->Text = Pila1->ObtenerPila(Pila1);
		mostrar_cola_txt->Text = Cola1->ObtenerCola(Cola1);
		button8->Text = "CAMBIAR PRECIO 3";
	}
}
private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON QUE DEVUELVE UNO DE LOS PRECIOS
	precio_ingresar_1_txt->Text = "";
	for (int i = 0; i < 4; i++)
	{
		Digito Regresar = Lista1->Eliminar();
		bool estaencola;
		bool estaenpila;
		estaenpila = Pila1->YaExiste_Pila(Regresar.valor, Pila1);
		if (estaenpila == false)
		{
			Pila1->Apilar(Regresar);
		}
		else
		{
			Cola1->Encolar(Regresar);
		}
	}
	MOSTRAR_PRECIO_1_TXT->Text = "";
	mostrar_pila_txt->Text = Pila1->ObtenerPila(Pila1);
	mostrar_cola_txt->Text = Cola1->ObtenerCola(Cola1);
}
private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON QUE DEVUELVE UNO DE LOS PRECIOS
	precio_ingresar_2_txt->Text = "";
	for (int i = 0; i < 4; i++)
	{
		Digito Regresar = Lista2->Eliminar();
		bool estaencola;
		bool estaenpila;
		estaenpila = Pila1->YaExiste_Pila(Regresar.valor, Pila1);
		if (estaenpila == false)
		{
			Pila1->Apilar(Regresar);
		}
		else
		{
			Cola1->Encolar(Regresar);
		}
	}
	MOSTRAR_PRECIO_2_TXT->Text = "";
	mostrar_pila_txt->Text = Pila1->ObtenerPila(Pila1);
	mostrar_cola_txt->Text = Cola1->ObtenerCola(Cola1);
}
private: System::Void Button13_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON QUE DEVUELVE UNO DE LOS PRECIOS.
	precio_ingresar_3_txt->Text = "";
	for (int i = 0; i < 4; i++)
	{
		Digito Regresar = Lista3->Eliminar();
		bool estaencola;
		bool estaenpila;
		estaenpila = Pila1->YaExiste_Pila(Regresar.valor, Pila1);
		if (estaenpila == false)
		{
			Pila1->Apilar(Regresar);
		}
		else
		{
			Cola1->Encolar(Regresar);
		}
	}
	MOSTRAR_PRECIO_3_TXT->Text = "";
	mostrar_pila_txt->Text = Pila1->ObtenerPila(Pila1);
	mostrar_cola_txt->Text = Cola1->ObtenerCola(Cola1);
}
private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//REINICIAR TODO BOTON
	button11->PerformClick();
	button12->PerformClick();
	button13->PerformClick();
	button9->PerformClick();
	button10->PerformClick();

}
private: System::Void Button15_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON SALIR DEL PROGRAMA
	this->Close();
}
private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON SORT PILA
	Pila1->Ordenar_Pila(Pila1);
	mostrar_pila_txt->Text = Pila1->ObtenerPila(Pila1);
	

}
private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//BOTON SORT COLA
	Cola1->Ordenar_Cola(Cola1);
	mostrar_cola_txt->Text = Cola1->ObtenerCola(Cola1);
}
private: System::Void Label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

};
}
