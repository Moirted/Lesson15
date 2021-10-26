#ifndef DATETIME_H
#define DATETIME_H

// Проверяет, високосный ли год
bool IsLeapYear(int);

// Проверяет, какое число ближе к 31, если первое, то true
bool LaterInYear(int, int);

//
int DaysInYear(int);

//
int DaysInYearRange(int, int);

//
int SeconsInHours(int);

#endif DATETIME_H