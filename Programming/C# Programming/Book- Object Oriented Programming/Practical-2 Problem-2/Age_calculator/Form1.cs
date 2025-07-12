using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Age_calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            dateTimePicker1.Format = DateTimePickerFormat.Custom;
            dateTimePicker1.CustomFormat = "dd-MM-yyyy";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int current_day = DateTime.Today.Day;
            int current_month = DateTime.Today.Month;
            int current_year = DateTime.Today.Year;
            int birth_day = dateTimePicker1.Value.Day;
            int birth_month = dateTimePicker1.Value.Month;
            int birth_year = dateTimePicker1.Value.Year;
            int days_in_month = DateTime.DaysInMonth(current_year, current_month);
                
                if (birth_day > current_day)
            {
                current_month = current_month-1;
                current_day = current_day + days_in_month;
            }
            if (birth_month > current_month);
            {
                current_year = current_year - 1;
                current_month = current_month + 12;
            }

            int calculated_day = current_day - birth_day;
            int calculated_month = current_month - birth_month;
            int calculated_year = current_year - birth_year;
            MessageBox.Show("Your age is" + calculated_year + " years" + calculated_month + " months" + calculated_day + " days");

        }

    }
}
