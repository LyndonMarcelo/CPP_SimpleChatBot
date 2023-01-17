#pragma once
#include "ChatbotHowTo.h"
#include <string>
#include <msclr\marshal_cppstd.h>

namespace Chatbot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CETChatbot
	/// </summary>
	public ref class CETChatbot : public System::Windows::Forms::Form
	{
	public:
		CETChatbot(void)
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
		~CETChatbot()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ sendButton;
	protected:

	private: System::Windows::Forms::TextBox^ inputBox;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ chatBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CETChatbot::typeid));
			this->sendButton = (gcnew System::Windows::Forms::Button());
			this->inputBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chatBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// sendButton
			// 
			this->sendButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->sendButton->BackColor = System::Drawing::Color::Firebrick;
			this->sendButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sendButton->ForeColor = System::Drawing::SystemColors::Control;
			this->sendButton->Location = System::Drawing::Point(785, 689);
			this->sendButton->Name = L"sendButton";
			this->sendButton->Size = System::Drawing::Size(175, 37);
			this->sendButton->TabIndex = 1;
			this->sendButton->Text = L"Send";
			this->sendButton->UseVisualStyleBackColor = false;
			this->sendButton->Click += gcnew System::EventHandler(this, &CETChatbot::sendbtn_Click);
			// 
			// inputBox
			// 
			this->inputBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputBox->BackColor = System::Drawing::Color::Firebrick;
			this->inputBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputBox->ForeColor = System::Drawing::SystemColors::Window;
			this->inputBox->Location = System::Drawing::Point(37, 689);
			this->inputBox->Margin = System::Windows::Forms::Padding(5);
			this->inputBox->Name = L"inputBox";
			this->inputBox->Size = System::Drawing::Size(731, 35);
			this->inputBox->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Firebrick;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(874, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 68);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CETChatbot::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(37, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(208, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(370, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Welcome to the Chatbot!";
			// 
			// chatBox
			// 
			this->chatBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chatBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chatBox->Location = System::Drawing::Point(37, 195);
			this->chatBox->Multiline = true;
			this->chatBox->Name = L"chatBox";
			this->chatBox->ReadOnly = true;
			this->chatBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->chatBox->Size = System::Drawing::Size(923, 486);
			this->chatBox->TabIndex = 6;
			this->chatBox->TextChanged += gcnew System::EventHandler(this, &CETChatbot::chatBox_TextChanged);
			// 
			// CETChatbot
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1005, 776);
			this->Controls->Add(this->chatBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->inputBox);
			this->Controls->Add(this->sendButton);
			this->DoubleBuffered = true;
			this->Name = L"CETChatbot";
			this->Text = L"CETChatbot";
			this->Load += gcnew System::EventHandler(this, &CETChatbot::CETChatbot_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ programNum = "0";
	bool nameTaken = false;
	String^ name;
	int continueConvo = 1;
	int closeButton = 0;

	

	
	private: System::Void sendbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		

		//==========================================================================================

		if (nameTaken == false) {

			if (inputBox->Text == "") {

				this->pictureBox1->Load("Awkward.png");

				String^ totalChat = chatBox->Text;
				String^ message = "IskoBot: I would like to know your name first so I know what to call you.\r\n";
				chatBox->Text = totalChat + "\r\n" + message;
				chatBox->SelectionStart = chatBox->TextLength;
				chatBox->ScrollToCaret();
				inputBox->Text = "";

			}
			
			else {

				this->pictureBox1->Load("Neutral-2.png");

				name = inputBox->Text;
				nameTaken = true;
				inputBox->Text = "";

				String^ totalChat = chatBox->Text;
				String^ message = name + ": My name is " + name + ".\r\n\r\n"
					"IskoBot: Great to have you here, " + name + "! May I know if you are here for Undergraduate or Graduate program concerns?\r\n"
					"	[a] Assistance for Undergraduate Programs\r\n"
					"	[b] Assistance for Graduate Programs\r\n";
				chatBox->Text = totalChat + "\r\n" + message;
				chatBox->SelectionStart = chatBox->TextLength;
				chatBox->ScrollToCaret();
				inputBox->Text = "";
			}

		}


		else if (programNum == "0" && nameTaken==true) {

			
			if (inputBox->Text == "a" || inputBox->Text == "A" || inputBox->Text == "undergraduate" || inputBox->Text == "Undergraduate"){

				this->pictureBox1->Load("Gotcha.png");

				chatBox->Text = "IskoBot: Welcome to the College of Engineering and Technology (CET) Undergraduate Program, "+ name +". Is there anything in particular you'd like to know? Please do not hesitate to ask me,  your chatbot assistant, if you have any questions. \r\n \r\n"
					"IskoBot: What would you like to know about first?\r\n"
					"	[a] What are the courses available in the CET undergraduate program?\r\n"
					"	[b] Is there a tuition fee for the college's undergraduate program?\r\n"
					"	[c] Is your college accepting transfer students from other engineering universities?\r\n"
					"	[d] What is the procedure for shifting courses in an undergraduate program?\r\n"
					"	[e] What is the procedure for enrolling in an undergraduate program in your college?\r\n";
	
				programNum = "1";
				inputBox->Text = "";
			}

			else if (inputBox->Text == "b" || inputBox->Text == "B" || inputBox->Text == "graduate" || inputBox->Text == "Graduate") {

				this->pictureBox1->Load("Gotcha.png");

				chatBox->Text = "IskoBot: Welcome to the College of Engineering and Technology (CET) Graduate Program, "+name+". Is there anything in particular you'd like to know? Please do not hesitate to ask me, your chatbot assistant, if you have any questions. \r\n \r\n"
					"IskoBot: What would you like to know about first?\r\n"
					"	[a] What are the courses available in the CET graduate program?\r\n"
					"	[b] Is there a tuition fee for the college's graduate program?\r\n"
					"	[c] What is the procedure for enrolling in a graduate program in your college?\r\n";

				programNum = "2";
				inputBox->Text = "";
			}

			else {

				this->pictureBox1->Load("Questionable.png");

				String^ totalChat = chatBox->Text;
				String^ message = name + ": " + inputBox->Text + "\r\n\r\n"
					"IskoBot: I'm sorry I didn't understand, " + name + ". What is your program again?\r\n";

				chatBox->Text = totalChat + "\r\n" + message;
				chatBox->SelectionStart = chatBox->TextLength;
				chatBox->ScrollToCaret();
				inputBox->Text = "";
			}

		}

		
		else if (programNum == "1" && nameTaken==true) {

			if (continueConvo == 1) {

				if (inputBox->Text == "a" || inputBox->Text == "A" || inputBox->Text == "courses" || inputBox->Text == "Courses" || inputBox->Text == "courses available" || inputBox->Text == "Courses available") {

					this->pictureBox1->Load("Thinking.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": What are the courses available in the CET undergraduate program?\r\n\r\n"
						"IskoBot: The following available courses for CET undergraduate students are: \r\n"
						"	•Bachelor of Science in Chemical Engineering – BSCHE\r\n"
						"	•Bachelor of Science in Civil Engineering – BSCE\r\n"
						"	•Bachelor of Science in Computer Engineering - BSCpE\r\n"
						"	•Bachelor of Science in Computer Science – BSCS\r\n"
						"	•Bachelor of Science in Electrical Engineering – BSEE\r\n"
						"	•Bachelor of Science in Electronics Engineering - BSECE\r\n"
						"	•Bachelor of Science in Information Technology – BSIT\r\n"
						"	•Bachelor of Science in Manufacturing Engineering – BSMFGE\r\n"
						"	•Bachelor of Science in Mechanical Engineering - BSME\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					continueConvo = 0;
					totalChat = chatBox->Text;
					message = "IskoBot: Would you like to know anything else?\r\n"
						"	[y] Yes\r\n"
						"	[n] No\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
				}

				else if (inputBox->Text == "b" || inputBox->Text == "B" || inputBox->Text == "tuition" || inputBox->Text == "Tuition" || inputBox->Text == "tuition fee" || inputBox->Text == "Tuition fee") {

					this->pictureBox1->Load("Thinking.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": Is there a tuition fee for your college's undergraduate program?\r\n\r\n"
						"IskoBot: The College of Engineering and Technology Undergraduate Program is under the RA 10931, or Universal "
						"Access to Quality Tertiary Education, ensures government full subsidy to students who intend to earn "
						"tertiary or technical-vocational education. The college offers free education to those under the RA 10931 "
						"and have passed the examination.\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					continueConvo = 0;
					totalChat = chatBox->Text;
					message = "IskoBot: Would you like to know anything else?\r\n"
						"	[y] Yes\r\n"
						"	[n] No\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";

				}

				else if (inputBox->Text == "c" || inputBox->Text == "C" || inputBox->Text == "transfer" || inputBox->Text == "Transfer" || inputBox->Text == "transfer student" || inputBox->Text == "Transfer student") {

					this->pictureBox1->Load("Thinking.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": Is your college accepting transfer students from other engineering universities?\r\n\r\n"
						"IskoBot: Unfortunately, the College of Engineering and Technology (CET) is no longer accepting transferees.\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					continueConvo = 0;
					totalChat = chatBox->Text;
					message = "IskoBot: Would you like to know anything else?\r\n"
						"	[y] Yes\r\n"
						"	[n] No\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";

				}

				else if (inputBox->Text == "d" || inputBox->Text == "D" || inputBox->Text == "shifting" || inputBox->Text == "Shifting" || inputBox->Text == "shifting course" || inputBox->Text == "Shifting course") {

					this->pictureBox1->Load("Thinking.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": What is the procedure for shifting courses in an undergraduate program?\r\n\r\n"
						"IskoBot: You may raise your shifting concerns directly to the respective academic organization "
						"of your chosen CET Undergraduate Program, as each department has its own procedure.To know the"
						"availability of slots, requirements, and guidelines for shifting, you may send an email to the "
						"academic organization or reach out through their Facebook pages.\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					continueConvo = 0;
					totalChat = chatBox->Text;
					message = "IskoBot: Would you like to know anything else?\r\n"
						"	[y] Yes\r\n"
						"	[n] No\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";

				}

				else if (inputBox->Text == "e" || inputBox->Text == "E" || inputBox->Text == "enrolling" || inputBox->Text == "Enrolling" || inputBox->Text == "enrollment" || inputBox->Text == "Enrollment") {

					this->pictureBox1->Load("Thinking.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": What is the procedure for enrolling in an undergraduate program in your college?\r\n\r\n"
						"IskoBot: For regular students:\r\n"
						"	1. Log in to your CET account\r\n"
						"	2. View Schedule\r\n"
						"	3. View Assessment\r\n"
						"	4. Register\r\n"
						"	5. Save / Print Registration Form\r\n\r\n"

						"IskoBot: For irregular students:\r\n"
						"	1. Log in to CET account\r\n"
						"	2. Select subjects to be enrolled\r\n"
						"	3. Adviser to evaluate the enlisted subjects\r\n"
						"	4. View Schedule\r\n"
						"	5. View Assessment\r\n"
						"	6. Register\r\n"
						"	7. Save / Print Registration Form\r\n";

					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					continueConvo = 0;
					totalChat = chatBox->Text;
					message = "IskoBot: Would you like to know anything else?\r\n"
						"	[y] Yes\r\n"
						"	[n] No\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";

				}

				else {

					this->pictureBox1->Load("Questionable.png");

					String^ totalChat = chatBox->Text;
					String^ message = name + ": " + inputBox->Text+"\r\n\r\n"
						"IskoBot: I'm sorry I didn't get that, "+name+". What did you want to know about again?\r\n";

					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
				}

			}

			else if (continueConvo == 0) {

				if (closeButton == 1) {
					this->Hide();
				}

				if (inputBox->Text == "y" || inputBox->Text == "Y" || inputBox->Text == "yes" || inputBox->Text == "Yes") {

					this->pictureBox1->Load("Gotcha.png");


					int randResponse = rand() % 3;

					if (randResponse == 0) {
						chatBox->Text = "IskoBot: Cool! What else did you want to know about, "+name+"?\r\n"
							"	[a] What are the courses available in the CET undergraduate program?\r\n"
							"	[b] Is there a tuition fee for the college's undergraduate program?\r\n"
							"	[c] Is your college accepting transfer students from other engineering universities?\r\n"
							"	[d] What is the procedure for shifting courses in an undergraduate program?\r\n"
							"	[e] What is the procedure for enrolling in an undergraduate program in your college?\r\n";
					}

					if (randResponse == 1) {
						chatBox->Text = "IskoBot: Sure, "+name+"! Is there anything else you need help with?\r\n"
							"	[a] What are the courses available in the CET undergraduate program?\r\n"
							"	[b] Is there a tuition fee for the college's undergraduate program?\r\n"
							"	[c] Is your college accepting transfer students from other engineering universities?\r\n"
							"	[d] What is the procedure for shifting courses in an undergraduate program?\r\n"
							"	[e] What is the procedure for enrolling in an undergraduate program in your college?\r\n";
					}

					if (randResponse == 2) {
						chatBox->Text = "IskoBot: Alright! What do you want to ask about, "+name+"?\r\n"
							"	[a] What are the courses available in the CET undergraduate program?\r\n"
							"	[b] Is there a tuition fee for the college's undergraduate program?\r\n"
							"	[c] Is your college accepting transfer students from other engineering universities?\r\n"
							"	[d] What is the procedure for shifting courses in an undergraduate program?\r\n"
							"	[e] What is the procedure for enrolling in an undergraduate program in your college?\r\n";
					}

					inputBox->Text = "";
					continueConvo = 1;
				}

				else if (inputBox->Text == "n" || inputBox->Text == "N" || inputBox->Text == "no" || inputBox->Text == "No") {

					this->pictureBox1->Load("Neutral-1.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": No\r\n\r\n"
						"IskoBot: Great! I'm glad to have been of help. Should you have any questions "
						"or concerns, please do not hesitate to talk to me again. Thank you and stay safe!\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					closeButton = 1;
					sendButton->Text = "Close";
					inputBox->ReadOnly = true;
				}

				else {

					this->pictureBox1->Load("Questionable.png");

					String^ totalChat = chatBox->Text;
					String^ message = name + ": " + inputBox->Text + "\r\n\r\n"
						"IskoBot: I'm sorry I didn't get that, " + name + ". Was that a yes or a no?\r\n";

					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
				}

			}

		}

		else {

			if (continueConvo == 1) {

				if (inputBox->Text == "a" || inputBox->Text == "A" || inputBox->Text == "courses" || inputBox->Text == "Courses" || inputBox->Text == "courses available" || inputBox->Text == "Courses available") {

					this->pictureBox1->Load("Thinking.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": What are the courses available in the CET graduate program?\r\n\r\n"
						"IskoBot: The following available courses for CET graduate students are: \r\n"
						"	•Master of Engineering with Specialization in Computer Engineering (MEng-CoE)\r\n"
						"	•Master of Engineering with Specialization in Structural Engineering(Meng - SE)\r\n"
						"	•Master of Information Technology(MIT)\r\n"
						"	•Master of Engineering Management with Specialization in Construction Management(MEM - CM)\r\n"
						"	•Master of Science in Management Engineering(MS - ManEng)\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					continueConvo = 0;
					totalChat = chatBox->Text;
					message = "IskoBot: Would you like to know anything else?\r\n"
						"	[y] Yes\r\n"
						"	[n] No\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
				}

				else if (inputBox->Text == "b" || inputBox->Text == "B" || inputBox->Text == "tuition" || inputBox->Text == "Tuition" || inputBox->Text == "tuition fee" || inputBox->Text == "Tuition fee") {

					this->pictureBox1->Load("Thinking.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": Is there a tuition fee for your college's graduate program?\r\n\r\n"
						"IskoBot: Graduate engineering students who wish to apply to the College of Engineering and Technology "
						"Graduate Program must pay a tuition fee based on the course chosen, which must be discussed with the"
						"chairperson of the respective course.\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					continueConvo = 0;
					totalChat = chatBox->Text;
					message = "IskoBot: Would you like to know anything else?\r\n"
						"	[y] Yes\r\n"
						"	[n] No\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";

				}

				else if (inputBox->Text == "c" || inputBox->Text == "C" || inputBox->Text == "enrolling" || inputBox->Text == "Enrolling" || inputBox->Text == "enrollment" || inputBox->Text == "Enrollment") {

					this->pictureBox1->Load("Thinking.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": What is the procedure for enrolling in an graduate program in your college?\r\n\r\n"
						"IskoBot: The procedure for enrolling in our graduate programs is:\r\n"
						"	1.Transcript of Records (Original and Photocopy)\r\n"
						"	2.Recommendation to be filled up by Former Professor / School Head\r\n"
						"	3.2x2 Colored ID Picture(2pcs)\r\n"
						"	4.Computer General Weighted Average(GWA)\r\n"
						"	5.At least 1 year work experience\r\n";

					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					continueConvo = 0;
					totalChat = chatBox->Text;
					message = "IskoBot: Would you like to know anything else?\r\n"
						"	[y] Yes\r\n"
						"	[n] No\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";

				}

				else {

					this->pictureBox1->Load("Questionable.png");

					String^ totalChat = chatBox->Text;
					String^ message = name + ": " + inputBox->Text + "\r\n\r\n"
						"IskoBot: I'm sorry I didn't get that, " + name + ". What did you want to know about again?\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
				}

			}

			else if (continueConvo == 0) {

				if (closeButton == 1) {
					this->Hide();
				}

				if (inputBox->Text == "y" || inputBox->Text == "Y" || inputBox->Text == "yes" || inputBox->Text == "Yes") {

					this->pictureBox1->Load("Gotcha.png");

					int randResponse = rand() % 3;

					if (randResponse == 0) {
						chatBox->Text = "IskoBot: Cool! What else did you want to know about, "+name+"?\r\n"
							"	[a] What are the courses available in the CET graduate program?\r\n"
							"	[b] Is there a tuition fee for the college's graduate program?\r\n"
							"	[c] What is the procedure for enrolling in a graduate program in your college?\r\n";
					}

					if (randResponse == 1) {
						chatBox->Text = "IskoBot: Sure, "+name+"! Is there anything else you need help with?\r\n"
							"	[a] What are the courses available in the CET graduate program?\r\n"
							"	[b] Is there a tuition fee for the college's graduate program?\r\n"
							"	[c] What is the procedure for enrolling in a graduate program in your college?\r\n";
					}

					if (randResponse == 2) {
						chatBox->Text = "IskoBot: Alright! What do you want to ask about, "+name+"?\r\n"
							"	[a] What are the courses available in the CET graduate program?\r\n"
							"	[b] Is there a tuition fee for the college's graduate program?\r\n"
							"	[c] What is the procedure for enrolling in a graduate program in your college?\r\n";
					}

					inputBox->Text = "";
					continueConvo = 1;
				}

				else if (inputBox->Text == "n" || inputBox->Text == "N" || inputBox->Text == "no" || inputBox->Text == "No") {

					this->pictureBox1->Load("Neutral-1.png");

					String^ totalChat = chatBox->Text;
					String^ message = name+": No\r\n\r\n"
						"IskoBot: Great! I'm glad to have been of help, "+name+". Should you have any questions "
						"or concerns, please do not hesitate to talk to me again. Thank you and stay safe!\r\n";
					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
					closeButton = 1;
					sendButton->Text = "Close";
					inputBox->ReadOnly = true;
				}

				else {

					this->pictureBox1->Load("Questionable.png");

					String^ totalChat = chatBox->Text;
					String^ message = name + ": " + inputBox->Text + "\r\n\r\n"
						"IskoBot: I'm sorry I didn't get that, " + name + ". Was that a yes or a no?\r\n";

					chatBox->Text = totalChat + "\r\n" + message;
					chatBox->SelectionStart = chatBox->TextLength;
					chatBox->ScrollToCaret();
					inputBox->Text = "";
				}

			}

		}
		

		//==========================================================================================

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		
	}
	private: System::Void chatBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void CETChatbot_Load(System::Object^ sender, System::EventArgs^ e) {

		this->pictureBox1->Load("Neutral-2.png");

		chatBox->Text = "IskoBot: Welcome to the College of Engineering and Technology (CET)! If you have any inquires, "
			"the CET chatbot is one-click away to serve with its vision to be the premier college in technological education, research, and extension services.\r\n\r\n"
			"IskoBot: I hope you are doing well for as aspiring Engineers our health is essential for our ability to "
			"think rapidly and make well-informed decisions. If you don’t mind, may I ask what is your name or nickname first?\r\n";
			
	}
	};
}
