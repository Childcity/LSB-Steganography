#pragma once
#include <vcclr.h>
#include "WorkWithBinary.h"
typedef unsigned char BYTE;

namespace CppTutorial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			this->DataImage = ( gcnew WorkWithBinary() );
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
     private: System::Windows::Forms::Button^  button1;
     private: System::Windows::Forms::Button^  button2;
     private: System::Windows::Forms::Button^  button3;
     private: System::Windows::Forms::Button^  button5;
     private: System::Windows::Forms::Label^  label1;
     private: System::Windows::Forms::Panel^  panel1;
     private: System::Windows::Forms::PictureBox^  pictureBox1;
     private: System::Windows::Forms::Label^  label2;
     private: System::Windows::Forms::TextBox^  textBox1;
     private: System::Windows::Forms::Label^  label3;
     private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
     private: System::Windows::Forms::GroupBox^  groupBox1;
     private: System::Windows::Forms::Button^  button4;
     private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
     private: System::Windows::Forms::Label^  label4;
	 private: WorkWithBinary^ DataImage;
     private: System::Windows::Forms::GroupBox^  groupBox2;
    private: System::Windows::Forms::Label^  label5;





	 private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AccessibleDescription = L"";
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(3, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Завантажити  зображення";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
								  static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Формат пікселя:";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 16);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(629, 548);
			this->panel1->TabIndex = 4;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->AccessibleDescription = L"";
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(459, 380);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
								  static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 38);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ширина:\r\nВисота:\r\n";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(650, 13);
			this->textBox1->MaxLength = 65500;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(236, 128);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Location = System::Drawing::Point(8, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Закодувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Location = System::Drawing::Point(123, 123);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 40);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Витягти повідомлення";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
								  static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Макс. довж.:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->groupBox1->Location = System::Drawing::Point(113, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(118, 92);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MainForm::groupBox1_Enter_1);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Location = System::Drawing::Point(8, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 35);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Зберегти";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileName = L"Stego_Imege";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
								  static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(734, 529);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 38);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Childcity";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
								   static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(653, 147);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(230, 20);
			this->button5->TabIndex = 12;
			this->button5->Text = L"۩ Стерти ۩";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(653, 173);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(233, 199);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
								  static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(24, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(201, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Зображення не завантажене!";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MainForm::label5_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(898, 576);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Georgia", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						  static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Городецький - Стеганографія";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
     private: System::Void MainForm_Load( System::Object^  sender, System::EventArgs^  e )
     {}
              void button1_Click( System::Object^ /*sender*/, System::EventArgs^ /*e*/ )
              {
               try
               {
                openFileDialog1->InitialDirectory = "D:\\";
                openFileDialog1->Filter = "Image(*.jpg)|*.jpg|Image(*.png)|*.png|Image(*.bmp)|*.bmp";
                if( openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK )
                {
                  if(!DataImage->image1)
                    {
                      label5->Location = System::Drawing::Point( 24, 13 );
                      label5->Text = "Зображення не завантажене!";
                    }
                 MessageBox::Show( "Зображення не вибране" );
                 return;
                }
                // Шлях до зображення
                String ^imName = gcnew String(openFileDialog1->FileName);
                DataImage->image1 = gcnew Bitmap( imName, true ); 

                // Виводимо зображення
                pictureBox1->Image = DataImage->image1;
                panel1->Visible = true;
                //pictureBox1->Width += widthZoom;
                label1->Text = String::Format( "Формат пікселя:\r\n{0}", DataImage->image1->PixelFormat );
                label2->Text = String::Format( "Ширина: {0}\r\nВисота: {1}", DataImage->image1->Width, DataImage->image1->Height );
                label3->Text = String::Format( "Макс. довж.:\r\n{0} симв.", (DataImage->image1->Width*DataImage->image1->Height) / 8 );
                label5->Text = String::Format( "{0}", imName );
                label5->Location = System::Drawing::Point( 6, 13 );
               } catch( ArgumentException^ )
               {
                MessageBox::Show( "Помилка."
                                  "Не вірний шлях до зображення." );
                if(!DataImage->image1)
                  {
                    label5->Location = System::Drawing::Point( 24, 13 );
                    label5->Text = "Зображення не завантажене!";
                  }
               }

              }

   private: System::Void label1_Click( System::Object^  sender, System::EventArgs^  e )
   {}
   private: System::Void pictureBox1_Click( System::Object^  sender, System::EventArgs^  e )
   {}
   private: System::Void groupBox1_Enter( System::Object^  sender, System::EventArgs^  e )
   {}
   private: System::Void panel1_Paint( System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e )
   {}
   private: System::Void textBox1_TextChanged( System::Object^  sender, System::EventArgs^  e )
   {}
   private: System::Void button2_Click( System::Object^  sender, System::EventArgs^  e )
   {
    if( !pictureBox1->Image )
    {
     MessageBox::Show( "Помилка.\r\nДля початку завантажте зображення." );
     return;
    }
    if( !textBox1->Text->Length || textBox1->Text->Length > DataImage->image1->Height*DataImage->image1->Width )
    {
     MessageBox::Show( "Помилка.\r\nДовжина тексту замала або завелика." );
     return;
    }
    /* Переводимо з System::String^ у звичайний wchar_t* */
    pin_ptr<const wchar_t> wch = PtrToStringChars( textBox1->Text ); // vcclr.h
    unsigned short int lenth = textBox1->Text->Length; //Нам не потрібен /0, бо ми його не записуємо у рядок

    this->Cursor = Cursors::AppStarting;
    DataImage->image1 = gcnew Bitmap( pictureBox1->Image );

    int x, y;
    x = y = 0;
    for( int i = 1; i <= 16; i++ ) // Записуємо довжину повідомлення(число = 2 байти - 16 біти)
    {                              // перебір бітів origsize
     Color pixelColor = DataImage->image1->GetPixel( x, y ); //Отримуємо кооординати пікселя
     bool bit = DataImage->GetNBitFromUInt( lenth, i ); //Отримуємо і-тий біт символа *wch
     BYTE Blue = DataImage->WriteBitToByte( bit, (BYTE) pixelColor.B ); // Замінюємо ост. біт Синього кольору на і-тий біт символа *wc
     Color newColor = Color::FromArgb( pixelColor.R, pixelColor.G, Blue );
     DataImage->image1->SetPixel( x, y, newColor );

     y++;
     if( y >= DataImage->image1->Height )
     { //Якщо дійшли до низу стб,
      y = 0; x++;            //переходимо на верх наступного стб
     }

    }

    while( *wch ) //Проходимо поки не буде '\0' символ
    {
     for( int i = 1; i <= 8; i++ ) // перебір бітів символа *wch
     {
      Color pixelColor = DataImage->image1->GetPixel( x, y ); //Отримуємо кооординати пікселя
      bool bit = DataImage->GetNBitFromByte( (BYTE) *wch, i ); //Отримуємо і-тий біт символа *wch
      BYTE Blue = DataImage->WriteBitToByte( bit, (BYTE) pixelColor.B ); // Замінюємо ост. біт Синього кольору на і-тий біт символа *wc
      Color newColor = Color::FromArgb( pixelColor.R, pixelColor.G, Blue );
      DataImage->image1->SetPixel( x, y, newColor );

      y++;
      if( y >= DataImage->image1->Height )
      { //Якщо дійшли до низу стб,
       y = 0; x++;            //переходимо на верх наступного стб
      }

     }

     wch++;
    }

    /* В останньому пікселі повідомлення міняємо рівень червоного кольору на 1 */
    /* Color pixelColor = DataImage->image1->GetPixel( x, y );
    Color newColor = Color::FromArgb( '`', pixelColor.G, pixelColor.B );
    DataImage->image1->SetPixel( x, y, newColor );*/

    /* Завантажуємо оброблене зображення */
    pictureBox1->Image = DataImage->image1;
    this->Cursor = Cursors::Default;

   }

   private: System::Void groupBox1_Enter_1( System::Object^  sender, System::EventArgs^  e )
   {}
   private: System::Void button4_Click( System::Object^  sender, System::EventArgs^  e )
   {
    if( !pictureBox1->Image )
    {
     MessageBox::Show( "Помилка.\r\nДля початку завантажте зображення." );
     return;
    }

    saveFileDialog1->InitialDirectory = "D:\\";
    saveFileDialog1->Filter = "Image(*.jpg)|*.jpg|Image(*.png)|*.png|Image(*.bmp)|*.bmp";
    if( saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK )
    {
     MessageBox::Show( "Не вибрано куди зберегти" );
     return;
    }

    //DataImage->image1->Clone( Rectangle( 0, 0, DataImage->image1->Width, DataImage->image1->Height ), DataImage->image1->PixelFormat /*Imaging::PixelFormat::Format24bppRgb*/ );
    DataImage->image1->Save( saveFileDialog1->FileName );

    /*System::IO::Stream^ myStream;
    SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
    saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
    saveFileDialog1->FilterIndex = 2;
    saveFileDialog1->RestoreDirectory = true;
    if( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
    {
    if( (myStream = saveFileDialog1->OpenFile()) != nullptr )
    {

    StreamWriter^ swriter = gcnew StreamWriter("filename.txt", true, Encoding::Unicode);
    pictureBox1->Image->Save;
    myStream->Close();
    }
    }*/


   }

   private: System::Void button3_Click( System::Object^  sender, System::EventArgs^  e )
   {
    if( !pictureBox1->Image )
    {
     MessageBox::Show( "Помилка.\r\nДля початку завантажте зображення." );
     return;
    }

    this->Cursor = Cursors::AppStarting;
    DataImage->image1 = gcnew Bitmap( pictureBox1->Image );
    Color pixelColor;

    int x, y;
    unsigned short int lenth;
    lenth = x = y = 0;


    bool *bit_arr = new bool[16];
    for( int i = 0; i < 16; i++ )
    {
     pixelColor = DataImage->image1->GetPixel( x, y ); //Отримуємо кооординати пікселя        
     bit_arr[i] = DataImage->GetNBitFromByte( pixelColor.B, 8 ); //Отримуємо 8 біт символа Синього кольору

     y++;
     if( y >= DataImage->image1->Height )
     { //Якщо дійшли до низу стб,
      y = 0; x++;            //переходимо на верх нового стб
     }
    }

    lenth = DataImage->BinaryToUSInt( bit_arr );
    delete[] bit_arr;
    if( lenth < 1 || lenth > 65535 ) //65535 - max value unsigned short int 
    {
     MessageBox::Show( "Помилка.\r\nФото не містить повідомлення." );
     return;
    }


    char *ch = new char[lenth];
    char *ch_fst_el = ch;

    while( lenth-- )
    {
     bool *bit_arr = new bool[8];
     for( int i = 0; i < 8; i++ )
     {
      pixelColor = DataImage->image1->GetPixel( x, y ); //Отримуємо кооординати пікселя        
      bit_arr[i] = DataImage->GetNBitFromByte( pixelColor.B, 8 ); //Отримуємо 8 біт символа Синього кольору

      y++;
      if( y >= DataImage->image1->Height )
      { //Якщо дійшли до низу стб,
       y = 0; x++;            //переходимо на верх нового стб
      }
     }

     *ch = DataImage->BinaryToByte( bit_arr );
     ch++;
     delete[8] bit_arr;
    }
    ch = ch_fst_el;

    this->Cursor = Cursors::Default;
    String ^s_str = gcnew String( ch );
    textBox1->Text = s_str; //Виводимо
    delete[] ch;
   }
   private: System::Void label4_Click( System::Object^  sender, System::EventArgs^  e )
   {
    Diagnostics::Process::Start( "explorer.exe", "https:\/\/www.facebook.com\/nikolay.gorodetskiy" );
   }
   private: System::Void button5_Click( System::Object^  sender, System::EventArgs^  e )
   {
    textBox1->Text = "";
   }
 private: System::Void label2_Click( System::Object^  sender, System::EventArgs^  e )
 {}
  private: System::Void label5_Click( System::Object^  sender, System::EventArgs^  e )
    {}
};
}
