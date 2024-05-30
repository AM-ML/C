#include "lib.h"

int get_days();
int get_subjects(int *n_subs, int *m_subs);
float get_daily_hours(int days_left, int normal_subjects, int mem_subjects);

int main(void)
{
	int days_left, normal_subjects, mem_subjects;
	float daily_hours;

	days_left =  get_days();
	(void) get_subjects(&normal_subjects, &mem_subjects);
	daily_hours = get_daily_hours(days_left, normal_subjects, mem_subjects);
	
	cyan();
	printf("\nYou need to study ");
	green();
	printf("%.1f %shrs each day.\n\n", daily_hours, CYAN);

	return 0;
}

int get_days()
{
	int days_left, c_month, c_day, t_day = 3, t_month = 6, result = 0;

	cyan();
	printf("Enter Date (dd/mm): ");
	green();
	result = scanf("%d / %d", &c_day, &c_month);

	if (t_month - c_month == 1)
		days_left = 31 - c_day + t_day;
	else if (c_month == t_month)
		days_left = 3 - c_day;

	cyan();
	result = printf("Days Left:%s %d\n\n", GREEN, days_left);
	reset();

	return days_left;
}

int get_subjects(int *n_subs, int *m_subs)
{
	int result;

	cyan();
	result = printf("Enter Normal Subjects: ");
	green();
	result = scanf("%d", n_subs);

	cyan();
	result = printf("Enter Memory Subjects: ");
	green();
	result = scanf("%d", m_subs);

	reset();
	return result;
}

float get_daily_hours(int days_left, int normal_subjects, int mem_subjects)
{
	float days_per_mem  = 1.5;
	float days_per_norm = 1.5f;
	float study_hrs_per_day = 6;

	float mem_days = (float) mem_subjects * days_per_mem;
	float norm_days = (float) normal_subjects * days_per_norm; 
	float total_study_days = mem_days + norm_days;

	float daily_study_hours = total_study_days / (float) days_left * study_hrs_per_day;

	return daily_study_hours;
}