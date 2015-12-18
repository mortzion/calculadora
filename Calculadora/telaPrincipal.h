#pragma once

#include <vector>


namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for telaPrincipal
	/// </summary>
	public ref class telaPrincipal : public System::Windows::Forms::Form
	{

	public:
		telaPrincipal(void)
		{

			
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~telaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnBackspace;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Button^  btnExecute;
	private: System::Windows::Forms::Button^  btn9;
	protected:
	

	private: System::Windows::Forms::Button^  btn8;

	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn6;


	private: System::Windows::Forms::Button^  btn5;

	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn3;


	private: System::Windows::Forms::Button^  btn2;

	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btnDecimal;



	private: System::Windows::Forms::Button^  btn0;

	private: System::Windows::Forms::Button^  btnSignal;
	private: System::Windows::Forms::Button^  btnPow;


	private: System::Windows::Forms::Button^  btnSqrd;

	private: System::Windows::Forms::Button^  btnNRoot;

	private: System::Windows::Forms::Button^  btnSqrt;

	private: System::Windows::Forms::Button^  btnCos;
	private: System::Windows::Forms::Button^  btnDiv;


	private: System::Windows::Forms::Button^  btnMul;

	private: System::Windows::Forms::Button^  btnSub;

	private: System::Windows::Forms::Button^  btnAdd;

	private: System::Windows::Forms::Button^  btnSin;
	private: System::Windows::Forms::Button^  btnFact;


	private: System::Windows::Forms::Button^  btnLog;

	private: System::Windows::Forms::Button^  btnLn;

	private: System::Windows::Forms::Button^  btnExp;

	private: System::Windows::Forms::Button^  btnTan;

	private: System::Windows::Forms::Button^  btnCloseP;
	private: System::Windows::Forms::Button^  btnOpenP;
	private: System::Windows::Forms::CheckBox^  checkInversa;
	private: System::Windows::Forms::RadioButton^  radioGraus;
	private: System::Windows::Forms::RadioButton^  radioRadiano;
	private: System::Windows::Forms::TextBox^  caixaTexto;
	private: System::Windows::Forms::Button^  btnPi;
	private: System::Windows::Forms::GroupBox^  groupBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(telaPrincipal::typeid));
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnExecute = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnSignal = (gcnew System::Windows::Forms::Button());
			this->btnPow = (gcnew System::Windows::Forms::Button());
			this->btnSqrd = (gcnew System::Windows::Forms::Button());
			this->btnNRoot = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnFact = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->btnExp = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->btnCloseP = (gcnew System::Windows::Forms::Button());
			this->btnOpenP = (gcnew System::Windows::Forms::Button());
			this->checkInversa = (gcnew System::Windows::Forms::CheckBox());
			this->radioGraus = (gcnew System::Windows::Forms::RadioButton());
			this->radioRadiano = (gcnew System::Windows::Forms::RadioButton());
			this->caixaTexto = (gcnew System::Windows::Forms::TextBox());
			this->btnPi = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnBackspace
			// 
			this->btnBackspace->Location = System::Drawing::Point(14, 98);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(49, 28);
			this->btnBackspace->TabIndex = 0;
			this->btnBackspace->Text = L"<-";
			this->btnBackspace->UseVisualStyleBackColor = true;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &telaPrincipal::btnBackspace_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(69, 98);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(49, 28);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &telaPrincipal::btnClear_Click);
			// 
			// btnExecute
			// 
			this->btnExecute->Location = System::Drawing::Point(124, 98);
			this->btnExecute->Name = L"btnExecute";
			this->btnExecute->Size = System::Drawing::Size(49, 28);
			this->btnExecute->TabIndex = 2;
			this->btnExecute->Text = L"=";
			this->btnExecute->UseVisualStyleBackColor = true;
			this->btnExecute->Click += gcnew System::EventHandler(this, &telaPrincipal::btnExecute_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(124, 127);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(49, 28);
			this->btn9->TabIndex = 5;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &telaPrincipal::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(69, 127);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(49, 28);
			this->btn8->TabIndex = 4;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &telaPrincipal::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(14, 125);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(49, 28);
			this->btn7->TabIndex = 3;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &telaPrincipal::btn7_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(124, 156);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(49, 28);
			this->btn6->TabIndex = 8;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &telaPrincipal::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(69, 156);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(49, 28);
			this->btn5->TabIndex = 7;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &telaPrincipal::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(14, 154);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(49, 28);
			this->btn4->TabIndex = 6;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &telaPrincipal::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(124, 185);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(49, 28);
			this->btn3->TabIndex = 11;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &telaPrincipal::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(69, 185);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(49, 28);
			this->btn2->TabIndex = 10;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &telaPrincipal::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(14, 185);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(49, 28);
			this->btn1->TabIndex = 9;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &telaPrincipal::btn1_Click);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Location = System::Drawing::Point(124, 214);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(49, 28);
			this->btnDecimal->TabIndex = 14;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &telaPrincipal::btnDecimal_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(69, 214);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(49, 28);
			this->btn0->TabIndex = 13;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &telaPrincipal::btn0_Click);
			// 
			// btnSignal
			// 
			this->btnSignal->Location = System::Drawing::Point(14, 214);
			this->btnSignal->Name = L"btnSignal";
			this->btnSignal->Size = System::Drawing::Size(49, 28);
			this->btnSignal->TabIndex = 12;
			this->btnSignal->Text = L"+/-";
			this->btnSignal->UseVisualStyleBackColor = true;
			this->btnSignal->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSignal_Click);
			// 
			// btnPow
			// 
			this->btnPow->Location = System::Drawing::Point(234, 214);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Size = System::Drawing::Size(49, 28);
			this->btnPow->TabIndex = 19;
			this->btnPow->Text = L"x^y";
			this->btnPow->UseVisualStyleBackColor = true;
			this->btnPow->Click += gcnew System::EventHandler(this, &telaPrincipal::btnPow_Click);
			// 
			// btnSqrd
			// 
			this->btnSqrd->Location = System::Drawing::Point(234, 185);
			this->btnSqrd->Name = L"btnSqrd";
			this->btnSqrd->Size = System::Drawing::Size(49, 28);
			this->btnSqrd->TabIndex = 18;
			this->btnSqrd->Text = L"x^2";
			this->btnSqrd->UseVisualStyleBackColor = true;
			this->btnSqrd->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSqrd_Click);
			// 
			// btnNRoot
			// 
			this->btnNRoot->Location = System::Drawing::Point(234, 156);
			this->btnNRoot->Name = L"btnNRoot";
			this->btnNRoot->Size = System::Drawing::Size(49, 28);
			this->btnNRoot->TabIndex = 17;
			this->btnNRoot->Text = L"x^(1/n)";
			this->btnNRoot->UseVisualStyleBackColor = true;
			this->btnNRoot->Click += gcnew System::EventHandler(this, &telaPrincipal::btnNRoot_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->Location = System::Drawing::Point(234, 127);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(49, 28);
			this->btnSqrt->TabIndex = 16;
			this->btnSqrt->Text = L"sqrt(x)";
			this->btnSqrt->UseVisualStyleBackColor = true;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSqrt_Click);
			// 
			// btnCos
			// 
			this->btnCos->Location = System::Drawing::Point(234, 98);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(49, 28);
			this->btnCos->TabIndex = 15;
			this->btnCos->Text = L"cos";
			this->btnCos->UseVisualStyleBackColor = true;
			this->btnCos->Click += gcnew System::EventHandler(this, &telaPrincipal::btnCos_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(179, 214);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(49, 28);
			this->btnDiv->TabIndex = 24;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &telaPrincipal::btnDiv_Click);
			// 
			// btnMul
			// 
			this->btnMul->Location = System::Drawing::Point(179, 185);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(49, 28);
			this->btnMul->TabIndex = 23;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &telaPrincipal::btnMul_Click);
			// 
			// btnSub
			// 
			this->btnSub->Location = System::Drawing::Point(179, 156);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(49, 28);
			this->btnSub->TabIndex = 22;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSub_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(179, 127);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(49, 28);
			this->btnAdd->TabIndex = 21;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &telaPrincipal::btnAdd_Click);
			// 
			// btnSin
			// 
			this->btnSin->Location = System::Drawing::Point(179, 98);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(49, 28);
			this->btnSin->TabIndex = 20;
			this->btnSin->Text = L"sen";
			this->btnSin->UseVisualStyleBackColor = true;
			this->btnSin->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSin_Click);
			// 
			// btnFact
			// 
			this->btnFact->Location = System::Drawing::Point(289, 214);
			this->btnFact->Name = L"btnFact";
			this->btnFact->Size = System::Drawing::Size(49, 28);
			this->btnFact->TabIndex = 29;
			this->btnFact->Text = L"n!";
			this->btnFact->UseVisualStyleBackColor = true;
			this->btnFact->Click += gcnew System::EventHandler(this, &telaPrincipal::btnFact_Click);
			// 
			// btnLog
			// 
			this->btnLog->Location = System::Drawing::Point(289, 185);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(49, 28);
			this->btnLog->TabIndex = 28;
			this->btnLog->Text = L"log x";
			this->btnLog->UseVisualStyleBackColor = true;
			this->btnLog->Click += gcnew System::EventHandler(this, &telaPrincipal::btnLog_Click);
			// 
			// btnLn
			// 
			this->btnLn->Location = System::Drawing::Point(289, 156);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(49, 28);
			this->btnLn->TabIndex = 27;
			this->btnLn->Text = L"ln x";
			this->btnLn->UseVisualStyleBackColor = true;
			this->btnLn->Click += gcnew System::EventHandler(this, &telaPrincipal::btnLn_Click);
			// 
			// btnExp
			// 
			this->btnExp->Location = System::Drawing::Point(289, 127);
			this->btnExp->Name = L"btnExp";
			this->btnExp->Size = System::Drawing::Size(49, 28);
			this->btnExp->TabIndex = 26;
			this->btnExp->Text = L"e^x";
			this->btnExp->UseVisualStyleBackColor = true;
			this->btnExp->Click += gcnew System::EventHandler(this, &telaPrincipal::btnExp_Click);
			// 
			// btnTan
			// 
			this->btnTan->Location = System::Drawing::Point(289, 98);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Size = System::Drawing::Size(49, 28);
			this->btnTan->TabIndex = 25;
			this->btnTan->Text = L"tan";
			this->btnTan->UseVisualStyleBackColor = true;
			this->btnTan->Click += gcnew System::EventHandler(this, &telaPrincipal::btnTan_Click);
			// 
			// btnCloseP
			// 
			this->btnCloseP->Location = System::Drawing::Point(289, 69);
			this->btnCloseP->Name = L"btnCloseP";
			this->btnCloseP->Size = System::Drawing::Size(49, 28);
			this->btnCloseP->TabIndex = 30;
			this->btnCloseP->Text = L")";
			this->btnCloseP->UseVisualStyleBackColor = true;
			this->btnCloseP->Click += gcnew System::EventHandler(this, &telaPrincipal::btnCloseP_Click);
			// 
			// btnOpenP
			// 
			this->btnOpenP->Location = System::Drawing::Point(234, 69);
			this->btnOpenP->Name = L"btnOpenP";
			this->btnOpenP->Size = System::Drawing::Size(49, 28);
			this->btnOpenP->TabIndex = 31;
			this->btnOpenP->Text = L"(";
			this->btnOpenP->UseVisualStyleBackColor = true;
			this->btnOpenP->Click += gcnew System::EventHandler(this, &telaPrincipal::btnOpenP_Click);
			// 
			// checkInversa
			// 
			this->checkInversa->AutoSize = true;
			this->checkInversa->Location = System::Drawing::Point(179, 48);
			this->checkInversa->Name = L"checkInversa";
			this->checkInversa->Size = System::Drawing::Size(60, 17);
			this->checkInversa->TabIndex = 32;
			this->checkInversa->Text = L"inversa";
			this->checkInversa->UseVisualStyleBackColor = true;
			// 
			// radioGraus
			// 
			this->radioGraus->AutoSize = true;
			this->radioGraus->Location = System::Drawing::Point(77, 19);
			this->radioGraus->Name = L"radioGraus";
			this->radioGraus->Size = System::Drawing::Size(53, 17);
			this->radioGraus->TabIndex = 33;
			this->radioGraus->Text = L"Graus";
			this->radioGraus->UseVisualStyleBackColor = true;
			// 
			// radioRadiano
			// 
			this->radioRadiano->AutoSize = true;
			this->radioRadiano->Checked = true;
			this->radioRadiano->Location = System::Drawing::Point(6, 19);
			this->radioRadiano->Name = L"radioRadiano";
			this->radioRadiano->Size = System::Drawing::Size(65, 17);
			this->radioRadiano->TabIndex = 34;
			this->radioRadiano->TabStop = true;
			this->radioRadiano->Text = L"Radiano";
			this->radioRadiano->UseVisualStyleBackColor = true;
			// 
			// caixaTexto
			// 
			this->caixaTexto->Location = System::Drawing::Point(20, 22);
			this->caixaTexto->Name = L"caixaTexto";
			this->caixaTexto->ReadOnly = true;
			this->caixaTexto->Size = System::Drawing::Size(318, 20);
			this->caixaTexto->TabIndex = 35;
			this->caixaTexto->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnPi
			// 
			this->btnPi->Location = System::Drawing::Point(179, 68);
			this->btnPi->Name = L"btnPi";
			this->btnPi->Size = System::Drawing::Size(49, 28);
			this->btnPi->TabIndex = 36;
			this->btnPi->Text = L"pi";
			this->btnPi->UseVisualStyleBackColor = true;
			this->btnPi->Click += gcnew System::EventHandler(this, &telaPrincipal::btnPi_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioRadiano);
			this->groupBox1->Controls->Add(this->radioGraus);
			this->groupBox1->Location = System::Drawing::Point(20, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(153, 47);
			this->groupBox1->TabIndex = 37;
			this->groupBox1->TabStop = false;
			// 
			// telaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 258);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnPi);
			this->Controls->Add(this->caixaTexto);
			this->Controls->Add(this->checkInversa);
			this->Controls->Add(this->btnOpenP);
			this->Controls->Add(this->btnCloseP);
			this->Controls->Add(this->btnFact);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnLn);
			this->Controls->Add(this->btnExp);
			this->Controls->Add(this->btnTan);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnPow);
			this->Controls->Add(this->btnSqrd);
			this->Controls->Add(this->btnNRoot);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnSignal);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnExecute);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnBackspace);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(360, 297);
			this->MinimumSize = System::Drawing::Size(360, 297);
			this->Name = L"telaPrincipal";
			this->Text = L"Calculadora";
			this->TopMost = true;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnNRoot_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text += "2";
}
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text += "1";
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text += "3";
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text += "4";
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text += "5";
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text += "6";
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text += "7";
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text += "8";
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text += "9";
	
}
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text = "0";
}
private: System::Void btnBackspace_Click(System::Object^  sender, System::EventArgs^  e) {
	if(caixaTexto->Text->Length > 0){
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	else {
		caixaTexto->Text = "0";
	}
}
private: System::Void btnExecute_Click(System::Object^  sender, System::EventArgs^  e) {
	//reste;
}
private: System::Void btnSignal_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnDecimal_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnMul_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnSub_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnSin_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnPi_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnOpenP_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnCloseP_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnTan_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnCos_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnSqrt_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnExp_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnLn_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnSqrd_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnLog_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnPow_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnFact_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
