#pragma once
#include <regex>
#include "tosstring.h"
#include <cctype>

#using <System.dll>
#using <System.data.dll>

using namespace std;
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;

namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Add_Room1
	/// </summary>
	public ref class UserControl_Add_Room1 : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
		Panel ^pn5;

		UserControl_Add_Room1(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
		{
			InitializeComponent();
			pnl = testpanel1;
			pn2 = testpanel2;
			pn3 = testpanel3;
			pn4 = testpanel4;
			pn5 = testpanel5;
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Add_Room1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Btn_Ind;
	protected: 
	private: System::Windows::Forms::Button^  Btn_Range;


	internal: System::Windows::Forms::Label^  Lbl_username;
	internal: System::Windows::Forms::TextBox^  Txt_Floor;
	internal: System::Windows::Forms::Label^  Lbl_Room_Starting;

	internal: System::Windows::Forms::TextBox^  Txt_Room_Start;

	internal: System::Windows::Forms::ComboBox^  Txt_Category;
	internal: System::Windows::Forms::Label^  Lbl_Category;


	private: System::Windows::Forms::Button^  Btn_Add_Room;
	internal: System::Windows::Forms::Label^  Lbl_Room_Ending;
	private: 

	private: 
	internal: System::Windows::Forms::TextBox^  Txt_Room_End;
	internal: 

	private: 

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
			this->Btn_Ind = (gcnew System::Windows::Forms::Button());
			this->Btn_Range = (gcnew System::Windows::Forms::Button());
			this->Lbl_username = (gcnew System::Windows::Forms::Label());
			this->Txt_Floor = (gcnew System::Windows::Forms::TextBox());
			this->Lbl_Room_Starting = (gcnew System::Windows::Forms::Label());
			this->Txt_Room_Start = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Category = (gcnew System::Windows::Forms::ComboBox());
			this->Lbl_Category = (gcnew System::Windows::Forms::Label());
			this->Btn_Add_Room = (gcnew System::Windows::Forms::Button());
			this->Lbl_Room_Ending = (gcnew System::Windows::Forms::Label());
			this->Txt_Room_End = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Btn_Ind
			// 
			this->Btn_Ind->Location = System::Drawing::Point(78, 76);
			this->Btn_Ind->Name = L"Btn_Ind";
			this->Btn_Ind->Size = System::Drawing::Size(159, 43);
			this->Btn_Ind->TabIndex = 0;
			this->Btn_Ind->Text = L"Individual";
			this->Btn_Ind->UseVisualStyleBackColor = true;
			this->Btn_Ind->Click += gcnew System::EventHandler(this, &UserControl_Add_Room1::Btn_Ind_Click);
			// 
			// Btn_Range
			// 
			this->Btn_Range->Location = System::Drawing::Point(335, 76);
			this->Btn_Range->Name = L"Btn_Range";
			this->Btn_Range->Size = System::Drawing::Size(159, 43);
			this->Btn_Range->TabIndex = 1;
			this->Btn_Range->Text = L"Range";
			this->Btn_Range->UseVisualStyleBackColor = true;
			this->Btn_Range->Click += gcnew System::EventHandler(this, &UserControl_Add_Room1::Btn_Range_Click);
			// 
			// Lbl_username
			// 
			this->Lbl_username->AutoSize = true;
			this->Lbl_username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_username->Location = System::Drawing::Point(64, 164);
			this->Lbl_username->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_username->Name = L"Lbl_username";
			this->Lbl_username->Size = System::Drawing::Size(59, 24);
			this->Lbl_username->TabIndex = 37;
			this->Lbl_username->Text = L"Floor";
			// 
			// Txt_Floor
			// 
			this->Txt_Floor->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Floor->Location = System::Drawing::Point(300, 164);
			this->Txt_Floor->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Floor->Name = L"Txt_Floor";
			this->Txt_Floor->Size = System::Drawing::Size(170, 27);
			this->Txt_Floor->TabIndex = 38;
			// 
			// Lbl_Room_Starting
			// 
			this->Lbl_Room_Starting->AutoSize = true;
			this->Lbl_Room_Starting->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Room_Starting->Location = System::Drawing::Point(64, 241);
			this->Lbl_Room_Starting->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Room_Starting->Name = L"Lbl_Room_Starting";
			this->Lbl_Room_Starting->Size = System::Drawing::Size(193, 24);
			this->Lbl_Room_Starting->TabIndex = 39;
			this->Lbl_Room_Starting->Text = L"Room No. Starting";
			// 
			// Txt_Room_Start
			// 
			this->Txt_Room_Start->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Room_Start->Location = System::Drawing::Point(300, 241);
			this->Txt_Room_Start->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Room_Start->Name = L"Txt_Room_Start";
			this->Txt_Room_Start->Size = System::Drawing::Size(170, 27);
			this->Txt_Room_Start->TabIndex = 40;
			// 
			// Txt_Category
			// 
			this->Txt_Category->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Txt_Category->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Category->FormattingEnabled = true;
			this->Txt_Category->Location = System::Drawing::Point(300, 381);
			this->Txt_Category->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Category->Name = L"Txt_Category";
			this->Txt_Category->Size = System::Drawing::Size(238, 25);
			this->Txt_Category->TabIndex = 59;
			// 
			// Lbl_Category
			// 
			this->Lbl_Category->AutoSize = true;
			this->Lbl_Category->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Category->Location = System::Drawing::Point(64, 381);
			this->Lbl_Category->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Category->Name = L"Lbl_Category";
			this->Lbl_Category->Size = System::Drawing::Size(107, 24);
			this->Lbl_Category->TabIndex = 60;
			this->Lbl_Category->Text = L"Category";
			// 
			// Btn_Add_Room
			// 
			this->Btn_Add_Room->Location = System::Drawing::Point(192, 464);
			this->Btn_Add_Room->Name = L"Btn_Add_Room";
			this->Btn_Add_Room->Size = System::Drawing::Size(159, 43);
			this->Btn_Add_Room->TabIndex = 61;
			this->Btn_Add_Room->Text = L"Add Room";
			this->Btn_Add_Room->UseVisualStyleBackColor = true;
			this->Btn_Add_Room->Click += gcnew System::EventHandler(this, &UserControl_Add_Room1::Btn_Add_Room_Click);
			// 
			// Lbl_Room_Ending
			// 
			this->Lbl_Room_Ending->AutoSize = true;
			this->Lbl_Room_Ending->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Lbl_Room_Ending->Location = System::Drawing::Point(64, 314);
			this->Lbl_Room_Ending->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Lbl_Room_Ending->Name = L"Lbl_Room_Ending";
			this->Lbl_Room_Ending->Size = System::Drawing::Size(187, 24);
			this->Lbl_Room_Ending->TabIndex = 62;
			this->Lbl_Room_Ending->Text = L"Room No. Ending";
			this->Lbl_Room_Ending->Visible = false;
			// 
			// Txt_Room_End
			// 
			this->Txt_Room_End->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Txt_Room_End->Location = System::Drawing::Point(300, 311);
			this->Txt_Room_End->Margin = System::Windows::Forms::Padding(2);
			this->Txt_Room_End->Name = L"Txt_Room_End";
			this->Txt_Room_End->Size = System::Drawing::Size(170, 27);
			this->Txt_Room_End->TabIndex = 63;
			this->Txt_Room_End->Visible = false;
			// 
			// UserControl_Add_Room1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->Controls->Add(this->Txt_Room_End);
			this->Controls->Add(this->Lbl_Room_Ending);
			this->Controls->Add(this->Btn_Add_Room);
			this->Controls->Add(this->Lbl_Category);
			this->Controls->Add(this->Txt_Category);
			this->Controls->Add(this->Txt_Room_Start);
			this->Controls->Add(this->Lbl_Room_Starting);
			this->Controls->Add(this->Txt_Floor);
			this->Controls->Add(this->Lbl_username);
			this->Controls->Add(this->Btn_Range);
			this->Controls->Add(this->Btn_Ind);
			this->Name = L"UserControl_Add_Room1";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Add_Room1::UserControl_Add_Room1_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Add_Room1::mymouseenter);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserControl_Add_Room1_Load(System::Object^  sender, System::EventArgs^  e) {
				
				//this->Dock = System::Windows::Forms::DockStyle::Fill;
				this->Lbl_Room_Starting->Text = "Room No.";
				this->Txt_Room_End->Visible = false;
				this->Lbl_Room_Ending->Visible = false;

				this->Lbl_Category->Location = System::Drawing::Point(64, 314);
				this->Txt_Category->Location = System::Drawing::Point(300, 311);

				OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				DB_Connection->Open();
				String ^ getRoomData = "Select * from Room_Types";

				OleDbCommand ^ cmd = gcnew OleDbCommand(getRoomData, DB_Connection);
				OleDbDataReader ^ room_data = cmd->ExecuteReader();
			
				while(room_data->Read() == true)
					Txt_Category->Items->Add(room_data->GetString(1));

				DB_Connection->Close();

			 }
private: System::Void Btn_Add_Room_Click(System::Object^  sender, System::EventArgs^  e) {

			 string sfloor = tosstring(Txt_Floor->Text);
			 remove_if(sfloor.begin(), sfloor.end(), isspace);
			 string froom = tosstring(Txt_Room_End->Text);
			 remove_if(froom.begin(), froom.end(), isspace);
			 string sroom = tosstring(Txt_Room_Start->Text);
			 remove_if(sroom.begin(), sroom.end(), isspace);
			 string scategory = tosstring(Txt_Category->Text);

			 string prefix;//
			 string suffix;
			 string nroom_start = sroom;
			 /*
			 string sfloor = msclr::interop::marshal_as<std::string>(Txt_Floor->Text);
			 remove_if(sfloor.begin(), sfloor.end(), isspace);
			 string sroom = msclr::interop::marshal_as<std::string>(Txt_Room_Start->Text);
			 remove_if(froom.begin(), froom.end(), isspace);
			 string froom = msclr::interop::marshal_as<std::string>(Txt_Room_End->Text);
			 remove_if(sroom.begin(), sroom.end(), isspace);
			 string scategory = msclr::interop::marshal_as<std::string>(Txt_Category->Text);
			 */

			 regex rx("^[0-9]+$");
			 if(!regex_match(sfloor.cbegin(), sfloor.cend(), rx)){
			 MessageBox::Show("Enter Floor in digits[0-9]");
			 goto ErrExit;
			 }
			 
			 rx = "^[A-Z|a-z]{0,1}[0-9]+[A-Z|a-z]{0,1}$";
			 if(!regex_match(sroom.cbegin(), sroom.cend(), rx)){
				 MessageBox::Show("Enter Room in format: A(number using digits[0-9])A");
				 goto ErrExit;
			 }

			 if(scategory.compare("") == 0){
			 MessageBox::Show("No Item is Selected");
			 goto ErrExit;
			 }
			 
			 
			 size_t p = 0;
			 int issuffix = 0;
			 size_t len = nroom_start.length();
			 while(p < len){
				 if (isalpha(nroom_start[p])){
					 if(issuffix)
						 suffix = nroom_start[p];
					 else
						 prefix = nroom_start[p];
					 issuffix = 1;
					 nroom_start.erase(p,1);
					 len--;
				 }else
					 p++;
			 }
			 

			 //For the Individual Room booking case
			 if(this->Txt_Room_End->Visible == false)
			 {
				OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

				String ^ floor = Txt_Floor->Text;
				String ^ room = Txt_Room_Start->Text;
				String ^ category = Txt_Category->Text;
				String ^ status = "Available";

				String ^ insertString = "insert into Room_No([Floor],[Room_No],[Category],[Status]) VALUES('" +floor+ "', '" +room+ "', '" +category+ "', '" +status+ "');";
				String ^ check_isnewroom = "Select [Room_No] from [Room_No] where [Room_No] = '" +room+ "';";
				//string sisnewroom = tosstring(isnewroom);
				//Console.WriteLine(String.IsNullOrWhiteSpace(isnewroom));

				DB_Connection->Open();

				OleDbCommand ^ cmd2 = gcnew OleDbCommand(check_isnewroom, DB_Connection);//
				OleDbDataReader ^ isnewroom = cmd2->ExecuteReader();
				
				if(isnewroom->Read()==true){
					MessageBox::Show("Room already exists. Choose another.");
					goto ErrExit;
				}

				OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
				cmd->Parameters->Add(gcnew OleDbParameter("@Floor",Convert::ToString(floor)));
				cmd->Parameters->Add(gcnew OleDbParameter("@Room_No",Convert::ToString(room)));
				cmd->Parameters->Add(gcnew OleDbParameter("@Category",Convert::ToString(category)));
				cmd->Parameters->Add(gcnew OleDbParameter("@Status",Convert::ToString(status))); 
			
				cmd->ExecuteNonQuery();
				DB_Connection->Close();
				MessageBox::Show("Room Added Successfully");

			 }

			 //For the Range Room booking case
			 else
			 {

				 p = 0;//
				 string alpha_sroom = sroom;
				 len = alpha_sroom.length();
				 while(p < len){
					 if (!isalpha(alpha_sroom[p])){
						 alpha_sroom.erase(p,1);
						 len--;
					 }else
						 p++;
				 }
				 p=0;
				 string alpha_froom = froom;
				 len = alpha_froom.length();
				 while(p < len){
					 if (!isalpha(alpha_froom[p])){
						 alpha_froom.erase(p,1);
						 len--;
					 }else
						 p++;
				 }

				 if(alpha_sroom.compare(alpha_froom)!=0){
					MessageBox::Show("Rooms must have same strings");
					goto ErrExit;
				 }


				rx = "^[A-Z|a-z]{0,1}[0-9]+[A-Z|a-z]{0,1}$";
				 if(!regex_match(froom.cbegin(), froom.cend(), rx)){
					 MessageBox::Show("Enter Room in format: A(number using digits[0-9])A");
					 goto ErrExit;
				 }

				OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

				String ^ floor = Txt_Floor->Text;
				String ^ room_start = Txt_Room_Start->Text;
				String ^ room_end = Txt_Room_End->Text;
				String ^ category = Txt_Category->Text;
				String ^ status = "Available";

				p = 0;//
				string nroom_end = froom;
				len = nroom_end.length();
				while(p < len){
					if (isalpha(nroom_end[p])){

						nroom_end.erase(p,1);
						len--;
					}else{
						p++;
					}
				}

				String^ Prefix = gcnew String(prefix.c_str());//
				String^ Suffix = gcnew String(suffix.c_str());
				String^ nstart = gcnew String(nroom_start.c_str());
				String^ nend = gcnew String(nroom_end.c_str());

				int start = System::Convert::ToInt32(nstart);
				int end = System::Convert::ToInt32(nend);
				for(int i=start;i<=end;i++){//
					String ^room =  Convert::ToString(i);
					room = Prefix + room + Suffix;
					String ^ check_isnewroom = "Select * from [Room_No] where [Room_No] = '" +room+ "';";
					//string sisnewroom = tosstring(isnewroom);
					DB_Connection->Open();
					OleDbCommand ^ cmd = gcnew OleDbCommand(check_isnewroom, DB_Connection);
					OleDbDataReader ^ isnewroom = cmd->ExecuteReader();

					if(isnewroom->Read()==true){
						MessageBox::Show("Room " + room + " already exists. Choose another Range.");
						goto ErrExit;
					}
					DB_Connection->Close();
				}
				int i = start;
				for(int i=start;i<=end;i++)
				{
					String ^room =  Convert::ToString(i);
					room = Prefix + room + Suffix;//
					MessageBox::Show(room);
					String ^ insertString = "insert into Room_No([Floor],[Room_No],[Category],[Status]) VALUES('" +floor+ "', '" +room+ "', '" +category+ "', '" +status+ "');";
					DB_Connection->Open();
					OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection); 
					cmd->Parameters->Add(gcnew OleDbParameter("@Floor",Convert::ToString(floor))); 
					cmd->Parameters->Add(gcnew OleDbParameter("@Room_No",Convert::ToString(room)));
					cmd->Parameters->Add(gcnew OleDbParameter("@Category",Convert::ToString(category))); 
					cmd->Parameters->Add(gcnew OleDbParameter("@Status",Convert::ToString(status))); 
					
					cmd->ExecuteNonQuery();
					DB_Connection->Close();
				}

				
				MessageBox::Show("Rooms Added Successfully");
			 }

			//To Refresh User Conrtol
			//this->Controls->Clear();
			//this->InitializeComponent();
ErrExit:
			 ;
		 }
private: System::Void Btn_Range_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Txt_Room_End->Visible = true;
			 this->Lbl_Room_Ending->Visible = true;
			 this->Lbl_Room_Starting->Text = "Room No. Starting";

			 this->Lbl_Category->Location = System::Drawing::Point(64, 381);
			 this->Txt_Category->Location = System::Drawing::Point(300, 381);
		 }
private: System::Void Btn_Ind_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Lbl_Room_Starting->Text = "Room No.";
			 this->Txt_Room_End->Visible = false;
			 this->Lbl_Room_Ending->Visible = false;

			 this->Lbl_Category->Location = System::Drawing::Point(64, 314);
			 this->Txt_Category->Location = System::Drawing::Point(300, 311);
		 }
private: System::Void mymouseenter(System::Object^  sender, System::EventArgs^  e) {
			 pnl->Size = System::Drawing::Size(173, 44);
			 pn2->Size = System::Drawing::Size(173, 44);
			 pn3->Size = System::Drawing::Size(173, 44);
			 pn4->Size = System::Drawing::Size(173, 44);
			 pn5->Size = System::Drawing::Size(173, 44);
		 }
};
}
