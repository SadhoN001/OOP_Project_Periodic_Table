#include "element_skd.h"
#include "ui_element_skd.h"
#include<QMessageBox>
#include<QPixmap>
Element_SKD::Element_SKD(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Element_SKD)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(129);

    db = QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("E:/qt problems/Periodic_table/new.db");
    db.open();
    qDebug()<< db.isOpen();
}

Element_SKD::~Element_SKD()
{
    db.close();
    delete ui;
}


void Element_SKD::on_first_page_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(84);
}


void Element_SKD::on_first_page_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);//first page
}


void Element_SKD::on_Periodic_table_butom_clicked()
{
 ui->stackedWidget->setCurrentIndex(85);//3rd page
}


void Element_SKD::on_periodic_to_2nd_page_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(84);//2nd page
}


void Element_SKD::on_Hydrogen_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void Element_SKD::on_He_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Element_SKD::on_Li_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void Element_SKD::on_Na_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(11);
}


void Element_SKD::on_K_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(19);
}


void Element_SKD::on_Rb_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(37);//--------->>
}


void Element_SKD::on_Cs_push_clicked()
{
     QMessageBox :: warning(this,"Blank","Not Including Here");

}


void Element_SKD::on_Fr_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(129);
}


void Element_SKD::on_Be_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}


void Element_SKD::on_Mg_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(12);
}


void Element_SKD::on_Ca_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(20);
}


void Element_SKD::on_Sr_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(38);
}


void Element_SKD::on_Ba_push_clicked()
{
       QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Ra_push_clicked()
{
       QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Sc_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);
}


void Element_SKD::on_Y_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(39);
}


void Element_SKD::on_Lu_push_clicked()
{
    QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Lr_push_clicked()
{
    QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_TI_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(22);
}


void Element_SKD::on_Zr_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(40);
}


void Element_SKD::on_Hf_push_clicked()
{
      QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Rf_push_clicked()
{
      QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_V_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(23);
}


void Element_SKD::on_Nb_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(41);
}


void Element_SKD::on_Ta_push_clicked()
{
      QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Db_push_clicked()
{
      QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Cr_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(24);
}


void Element_SKD::on_Mo_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(42);
}


void Element_SKD::on_W_push_clicked()
{
      QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Sg_push_clicked()
{
      QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Mn_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(25);
}


void Element_SKD::on_Tc_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(43);
}


void Element_SKD::on_Re_push_clicked()
{
     QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Bh_push_clicked()
{
      QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Fe_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(26);
}

void Element_SKD::on_Ru_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(44);
}


void Element_SKD::on_Os_push_clicked()
{
      QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Hs_push_clicked()
{
       QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Co_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(27);
}


void Element_SKD::on_Rh_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(45);
}


void Element_SKD::on_Ir_push_clicked()
{
    QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Mt_push_clicked()
{
      QMessageBox :: warning(this,"Blank","Not Including Here");
}


void Element_SKD::on_Ni_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(28);
}




void Element_SKD::on_h_back_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);//
}


void Element_SKD::on_h_back_push_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Li_back_push_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Be_back_push_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);//
}


void Element_SKD::on_B_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
}


void Element_SKD::on_Be_back_push_5_clicked()//boron to pd
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_C_pusj_clicked()
{
     ui->stackedWidget->setCurrentIndex(6);
}


void Element_SKD::on_Carbon_back_push_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_N_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}



void Element_SKD::on_O_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(8);
}


void Element_SKD::on_Nitrofen_back_push_7_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_O_back_push_8_clicked()
{
      ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_F_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(9);
}


void Element_SKD::on_Florin_back_push_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_neon_back_push_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Ne_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void Element_SKD::on_neon_back_push_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Mg_back_push_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Al_back_push_13_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Al_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(13);
}


void Element_SKD::on_Si_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(14);
}


void Element_SKD::on_Si_back_push_14_clicked()
{
      ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_P_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}


void Element_SKD::on_Phospho_back_push_15_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_S_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
}


void Element_SKD::on_Phospho_back_push_16_clicked()//sulfer
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Cl_push_clicked()
{
     ui->stackedWidget->setCurrentIndex(17);
}


void Element_SKD::on_Cl_back_push_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Ar_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);
}


void Element_SKD::on_Ar_back_push_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}



void Element_SKD::on_Others_button_clicked()
{
     ui->stackedWidget->setCurrentIndex(128);
}


void Element_SKD::on_other1_butt_clicked()
{
     ui->stackedWidget->setCurrentIndex(84);
}


void Element_SKD::on_Next_oth_butt_clicked()
{
      ui->stackedWidget->setCurrentIndex(127);
}


void Element_SKD::on_oth2_to_other1_butt_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(128);
}


void Element_SKD::on_Oth2_to_main_butt_clicked()
{
      ui->stackedWidget->setCurrentIndex(84);
}


void Element_SKD::on_oth2_to_nextbutm_clicked()
{
     ui->stackedWidget->setCurrentIndex(126);
}


void Element_SKD::on_oth2_to_oth1_clicked()
{
      ui->stackedWidget->setCurrentIndex(127);
}


void Element_SKD::on_Oth2_to_main_butt_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(84);
}


void Element_SKD::on_EXIT_btm_clicked()
{
     this->close();
}


void Element_SKD::on_K_backbutt_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_K_backbutt_2_clicked()//ca
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Sc_backbutt_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Sc_backbutt_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_V_to_back_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_cr_to_back_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Mn_to_back_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Fe_to_back_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Co_to_back_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Co_to_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Cu_push_clicked()//----------->
{
    ui->stackedWidget->setCurrentIndex(29);
}


void Element_SKD::on_Zn_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(30);
}


void Element_SKD::on_Ga_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(31);
}


void Element_SKD::on_Ge_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(32);
}


void Element_SKD::on_As_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(33);
}


void Element_SKD::on_Se_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(34);
}


void Element_SKD::on_Br_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(35);
}


void Element_SKD::on_Kr_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(36);
}


void Element_SKD::on_Cu_to_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_zn_to_back_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Ga_to_back_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Ge_to_back_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Ar_to_back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Se_to_back_3_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Br_to_back_clicked()
{
      ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Kr_to_back_2_clicked()
{
      ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Pd_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(46);
}


void Element_SKD::on_Ag_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(47);
}


void Element_SKD::on_Cd_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(48);
}


void Element_SKD::on_In_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(49);
}


void Element_SKD::on_Sn_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(50);
}


void Element_SKD::on_Sb_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(51);
}


void Element_SKD::on_Te_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(52);
}


void Element_SKD::on_I_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(53);
}


void Element_SKD::on_Xe_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(54);
}


void Element_SKD::on_Rb_back_clicked()
{
     ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Sr_back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Y_back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Zr_back_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Nb_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Mo_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Tc_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Ru_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Rh_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_pd_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Ag_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Cd_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_In_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Sn_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Sb_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Te_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_i_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}


void Element_SKD::on_Xe_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(85);
}

//logg



void Element_SKD::on_login_clicked()
{
    login_email=ui->login_email_input->text();
    login_password=ui->login_password_input->text();
    QSqlQuery query;
    query.exec("SELECT * FROM user WHERE email='"+login_email+"' AND password='"+login_password+"'");

    if(query.next())
    {
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        QMessageBox :: warning(this,"Login","Wrong Email and Password");

    }
    ui->login_email_input->clear();
    ui->login_password_input->clear();
}


void Element_SKD::on_signup_button_clicked()
{
    signup_name = ui->signup_name_input->text();
    signup_email = ui->signup_email_input->text();
    signup_contact = ui->signup_contact_input->text();
    signup_password = ui->Signup_password_input->text();

    QSqlQuery query;
    query.exec("INSERT INTO user(name,email,password,contact) VALUES('"+signup_name+"','"+signup_email+"','"+signup_password+"','"+signup_contact+"')");
    QMessageBox :: information(this,"Signup","Signup is succesfull,please login");
    ui->signup_name_input->clear();
    ui->signup_email_input->clear();
    ui->signup_contact_input->clear();
    ui->Signup_password_input->clear();

}



void Element_SKD::on_Creat_new_account_clicked()
{
     ui->stackedWidget->setCurrentIndex(125);
}


void Element_SKD::on_Register_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(129);
}


void Element_SKD::on_logout_button_clicked()
{
     ui->stackedWidget->setCurrentIndex(129);
}


void Element_SKD::on_Exitt_button_clicked()
{
    this->close();
}


void Element_SKD::on_Admin_clicked()
{
     ui->stackedWidget->setCurrentIndex(124);
}


void Element_SKD::on_AD_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(129);
}

