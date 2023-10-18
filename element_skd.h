#ifndef ELEMENT_SKD_H
#define ELEMENT_SKD_H

#include <QMainWindow>
#include<QDebug>
#include<QMessageBox>
#include<QSqlDatabase>
#include<QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class Element_SKD; }
QT_END_NAMESPACE

class Element_SKD : public QMainWindow
{
    Q_OBJECT

public:
    Element_SKD(QWidget *parent = nullptr);
    ~Element_SKD();

private slots:
    void on_first_page_button_clicked();

    void on_first_page_button_2_clicked();

    void on_Periodic_table_butom_clicked();

    void on_first_page_button_3_clicked();

    void on_Periodi_to_2nd_button_clicked();

    void on_periodic_to_2nd_page_button_clicked();

    void on_pushButton_clicked();

    void on_Hydrogen_clicked();

    void on_He_push_clicked();

    void on_Li_push_clicked();

    void on_Na_push_clicked();

    void on_K_push_clicked();

    void on_Rb_push_clicked();

    void on_Cs_push_clicked();

    void on_Fr_push_clicked();

    void on_Be_push_clicked();

    void on_Mg_push_clicked();

    void on_Ca_push_clicked();

    void on_Sr_push_clicked();

    void on_Ba_push_clicked();

    void on_Ra_push_clicked();

    void on_Sc_push_clicked();

    void on_Y_push_clicked();

    void on_Lu_push_clicked();

    void on_Lr_push_clicked();

    void on_TI_push_clicked();

    void on_Zr_push_clicked();

    void on_Hf_push_clicked();

    void on_Rf_push_clicked();

    void on_V_push_clicked();

    void on_Nb_push_clicked();

    void on_Ta_push_clicked();

    void on_Db_push_clicked();

    void on_Cr_push_clicked();

    void on_Mo_push_clicked();

    void on_W_push_clicked();

    void on_Sg_push_clicked();

    void on_Mn_push_clicked();

    void on_Tc_push_clicked();

    void on_Re_push_clicked();

    void on_Bh_push_clicked();

    void on_Fe_push_clicked();

    void on_Ru_push_clicked();

    void on_Os_push_clicked();

    void on_Hs_push_clicked();

    void on_Co_push_clicked();

    void on_Rh_push_clicked();

    void on_Ir_push_clicked();

    void on_Mt_push_clicked();

    void on_Ni_push_clicked();

    void on_h_back_push_clicked();

    void on_h_back_push_2_clicked();

    void on_Li_back_push_3_clicked();

    void on_Be_back_push_4_clicked();

    void on_B_push_clicked();

    void on_Be_back_push_5_clicked();

    void on_C_pusj_clicked();

    void on_Carbon_back_push_6_clicked();

    void on_N_push_clicked();

    void on_O_push_clicked();

    void on_Nitrofen_back_push_7_clicked();

    void on_O_back_push_8_clicked();

    void on_F_push_clicked();

    void on_Florin_back_push_9_clicked();

    void on_neon_back_push_10_clicked();

    void on_Ne_push_clicked();

    void on_neon_back_push_11_clicked();

    void on_Mg_back_push_12_clicked();

    void on_Al_back_push_13_clicked();

    void on_Al_push_clicked();

    void on_Si_push_clicked();

    void on_Si_back_push_14_clicked();

    void on_P_push_clicked();

    void on_Phospho_back_push_15_clicked();

    void on_S_push_clicked();

    void on_Phospho_back_push_16_clicked();

    void on_Cl_push_clicked();

    void on_Cl_back_push_17_clicked();

    void on_Ar_push_clicked();

    void on_Ar_back_push_18_clicked();

    void on_Others_button_clicked();

    void on_other1_butt_clicked();

    void on_Next_oth_butt_clicked();

    void on_oth2_to_other1_butt_2_clicked();

    void on_Oth2_to_main_butt_clicked();

    void on_oth2_to_nextbutm_clicked();

    void on_oth2_to_oth1_clicked();

    void on_Oth2_to_main_butt_2_clicked();

    void on_EXIT_btm_clicked();

    void on_K_backbutt_clicked();

    void on_K_backbutt_2_clicked();

    void on_Sc_backbutt_clicked();

    void on_Sc_backbutt_2_clicked();

   // void on_V_backbutt_3_clicked();

    void on_V_to_back_clicked();

    void on_cr_to_back_2_clicked();

    void on_Mn_to_back_clicked();

    void on_Fe_to_back_2_clicked();

    void on_Co_to_back_3_clicked();

    void on_Co_to_back_4_clicked();

    void on_Cu_push_clicked();

    void on_Zn_push_clicked();

    void on_Ga_push_clicked();

    void on_Ge_push_clicked();

    void on_As_push_clicked();

    void on_Se_push_clicked();

    void on_Br_push_clicked();

    void on_Kr_push_clicked();

    void on_Cu_to_back_clicked();

    void on_zn_to_back_clicked();

    void on_Ga_to_back_2_clicked();

    void on_Ge_to_back_clicked();

    void on_Ar_to_back_2_clicked();

    void on_Se_to_back_3_clicked();

    void on_Br_to_back_clicked();

    void on_Kr_to_back_2_clicked();

    void on_Pd_push_clicked();

    void on_Ag_push_clicked();

    void on_Cd_push_clicked();

    void on_In_push_clicked();

    void on_Sn_push_clicked();

    void on_Sb_push_clicked();

    void on_Te_push_clicked();

    void on_I_push_clicked();

    void on_Xe_push_clicked();

    void on_Rb_back_clicked();

    void on_Sr_back_2_clicked();

    void on_Y_back_2_clicked();

    void on_Zr_back_3_clicked();

    void on_Nb_back_4_clicked();

    void on_Mo_back_4_clicked();

    void on_Tc_back_4_clicked();

    void on_Ru_back_4_clicked();

    void on_Rh_back_4_clicked();

    void on_pd_back_4_clicked();

    void on_Ag_back_4_clicked();

    void on_Cd_back_4_clicked();

    void on_In_back_4_clicked();

    void on_Sn_back_4_clicked();

    void on_Sb_back_4_clicked();

    void on_Te_back_4_clicked();

    void on_i_back_4_clicked();

    void on_Xe_back_4_clicked();

    void on_login_clicked();

    void on_signup_button_clicked();

    void on_pushButton_2_clicked();

    void on_Creat_new_account_clicked();

    void on_Register_back_clicked();

    void on_logout_button_clicked();

    void on_Exitt_button_clicked();

    void on_Admin_clicked();

    void on_AD_back_clicked();

private:
    Ui::Element_SKD *ui;
    QString login_email,login_password,signup_name,signup_email,signup_contact,signup_password;
    QSqlDatabase db;
};
#endif // ELEMENT_SKD_H
