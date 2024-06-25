#pragma once
#include "playlist.h";
#include <iostream>
#include <fstream>
#include <string>
#include "canciones.h"
#include <msclr\marshal_cppstd.h>
#include <locale.h>
#include <wchar.h>

using namespace std;

playlist Ordenes;

namespace Spotify {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button11;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 64);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(435, 744);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Playlist";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::GrayText;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(16, 686);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(403, 46);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Eliminar Cancion";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GrayText;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(15, 582);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(403, 46);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Importar Playlist";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GrayText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(226, 530);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(192, 46);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Ordenar por Artista";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GrayText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(16, 530);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Ordenar por Cancion";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(16, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(403, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Playlist Actual";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(16, 438);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(403, 34);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 60);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(403, 372);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GrayText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(226, 478);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(193, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Siguiente Canción";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GrayText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(16, 478);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Play";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(464, 64);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(435, 744);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Fila de Reproduccion";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(16, 532);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 32);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Artista";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(16, 490);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 32);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Canción";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(130, 530);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(289, 34);
			this->textBox5->TabIndex = 9;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(130, 490);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(289, 34);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GrayText;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(20, 686);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(403, 46);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Mover a la Playlist";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GrayText;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(16, 634);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(403, 46);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Reproducir";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GrayText;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(16, 582);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(403, 46);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Eliminar Cancion";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(16, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(403, 32);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Cola Actual";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(16, 60);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(403, 372);
			this->textBox4->TabIndex = 2;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GrayText;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(16, 438);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(403, 46);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Agregar Canción";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 20);
			this->label5->Margin = System::Windows::Forms::Padding(3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(887, 32);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Spotify - Javier Estuardo Godinez Gudiel 1179222";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::GrayText;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(15, 634);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(403, 46);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Exportar Playlist";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(913, 820);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Spotify";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		static bool ordenado;
		//Pulsados por accidente
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	//Boton Play
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		setlocale(LC_ALL, "spanish");
		std::string rep = "";
		rep = Ordenes.SacarPila();
		textBox2->Text = gcnew String(rep.c_str());
		std::string Mostrar = "";
		Mostrar = Ordenes.ImprimirPlaylist();
		textBox1->Text = gcnew String(Mostrar.c_str());
	}

	//Boton para importar archivo
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	//Lectura del Archivo
	Ordenes.LeerArchivo("playlist.txt");
	std::string Mostrar = "";
	Mostrar = Ordenes.ImprimirPlaylist();
	textBox1->Text = gcnew String(Mostrar.c_str());
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	ordenado = true;
	textBox1->Text = "";

	canciones* Info = Ordenes.Almacenar();
	int conteo = Ordenes.contador() - 1;
	Ordenes.startQuickSort(Info, 0, conteo);

	for (size_t i = 0; i < conteo + 1; i++)
	{
		textBox1->Text += gcnew String(Info[i].Cancion.c_str());
		textBox1->Text += " - " + gcnew String(Info[i].Artista.c_str()) + "\r\n";
	}
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	ordenado = false;
	textBox1->Text = "";

	canciones* Info = Ordenes.Almacenar();
	int conteo = Ordenes.contador() - 1;
	Ordenes.startQuickSortA(Info, 0, conteo);

	for (size_t i = 0; i < conteo + 1; i++)
	{
		textBox1->Text += gcnew String(Info[i].Cancion.c_str());
		textBox1->Text += " - " + gcnew String(Info[i].Artista.c_str()) + "\r\n";
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	msclr::interop::marshal_context context;

	std::string cancion = context.marshal_as<std::string>(textBox3->Text);
	std::string artista = context.marshal_as<std::string>(textBox5->Text);
	if (artista == "") {
		artista = "Desconocido";
	}
	textBox3->Text = "";
	textBox5->Text = "";

	Ordenes.AlmacenarCola(cancion, artista);
	std::string Mostrar = "";
	Mostrar = Ordenes.ImprimirCola();
	textBox4->Text = gcnew String(Mostrar.c_str());



}
	   //Cancion a Reproducir
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	std::string rep = "";
	rep = Ordenes.SacarPila();
	textBox2->Text = gcnew String(rep.c_str());
	std::string Mostrar = "";
	Mostrar = Ordenes.ImprimirPlaylist();
	textBox1->Text = gcnew String(Mostrar.c_str());
}

	   //Mandar datos a la playlist con orden sincronizado
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	Ordenes.SacarPilaCola();

	//Agregar metodo de ordenamiento segun bool
	//bool true cancion, bool false artista
	if (ordenado == true) {

		textBox1->Text = "";

		canciones* Info = Ordenes.Almacenar();
		int conteo = Ordenes.contador() - 1;
		Ordenes.startQuickSort(Info, 0, conteo);

		for (size_t i = 0; i < conteo + 1; i++)
		{
			textBox1->Text += gcnew String(Info[i].Cancion.c_str());
			textBox1->Text += " - " + gcnew String(Info[i].Artista.c_str()) + "\r\n";
		}
	}
	else {

		textBox1->Text = "";

		canciones* Info = Ordenes.Almacenar();
		int conteo = Ordenes.contador() - 1;
		Ordenes.startQuickSortA(Info, 0, conteo);

		for (size_t i = 0; i < conteo + 1; i++)
		{
			textBox1->Text += gcnew String(Info[i].Cancion.c_str());
			textBox1->Text += " - " + gcnew String(Info[i].Artista.c_str()) + "\r\n";
		}
	}

	std::string mostrarcola = "";
	mostrarcola = Ordenes.ImprimirCola();
	textBox4->Text = gcnew String(mostrarcola.c_str());
	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

	   //
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	string rep = Ordenes.SacarPila();
	std::string Mostrar = "";
	Mostrar = Ordenes.ImprimirPlaylist();
	textBox1->Text = gcnew String(Mostrar.c_str());
}

	   //Boton Eliminar de la cola
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	Ordenes.sacarcola();
	std::string mostrarcola = "";
	mostrarcola = Ordenes.ImprimirCola();
	textBox4->Text = gcnew String(mostrarcola.c_str());
}

	   //Reproducir directamente de la cola
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	string linea = Ordenes.sacarcolaRepro();
	std::string mostrarcola = "";
	mostrarcola = Ordenes.ImprimirCola();
	textBox4->Text = gcnew String(mostrarcola.c_str());
	textBox2->Text = gcnew String(linea.c_str());
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	setlocale(LC_ALL, "spanish");
	Ordenes.ExportarArchivo("playlistexp.txt");
}
};
}
