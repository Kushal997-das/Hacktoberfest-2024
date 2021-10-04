/**
  * BMI.java
  * Jill Oestreicher
  * CMPT 220
  * Lab 7
  * April 27, 2017
  * 1.8
  * This file contains problem 10.2 of Lab 7
*/

/**
  * BMI.java
  * Added constructor to BMI class
*/
public class BMI {
  //initiate variables
  private String name;
  private int age;
  private double weight; //in pounds
  private double height; //in inches
  private double feet;
  private double inches;
  public static final double KILOGRAMS_PER_POUND = 0.45359237; //constant
  public static final double METERS_PER_INCH = 0.0254; //constant

  //BMI constructor with variables name, age, weight, height
  public BMI(String name, int age, double weight, double height) {
    this.name = name; 
    this.age = age;
    this.weight = weight;
    this.height = height; 
  }
  //constructor ******(age?? 20??)******
  public BMI(String name, double weight, double height) {
    this(name, 20, weight, height);
  }
  /**
    * BMI 
    * Construct a BMI with the specified name, age, weight, feet, and inches
  */
  public BMI(String name, int age, double weight, double feet, double inches) {
    this(name, age, weight, feet * 12 + inches);
  }
  //calculates and returns BMI
  public double getBMI() {
    double bmi = weight * KILOGRAMS_PER_POUND / 
      ((height * METERS_PER_INCH) * (height * METERS_PER_INCH));
    return Math.round(bmi * 100) / 100.0;
  }
  //returns status(if underweight, normal, overweight, or obese)
  public String getStatus() {
    double bmi = getBMI();
    if(bmi < 18.5)
      return "Underweight";
    else if (bmi < 25)
      return "Normal";
    else if (bmi < 30)
      return "Overweight";
    else 
      return "Obese";
  }
  //gets name
  public String getName() {
    return name;
  }
  //gets age
  public int getAge() {
    return age;
  }
  //gets weight
  public double getWeight() {
    return weight;
  }
  //gets height
  public double getHeight() {
    return height;
  }
}