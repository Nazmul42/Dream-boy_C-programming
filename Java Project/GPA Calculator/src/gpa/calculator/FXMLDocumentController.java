/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gpa.calculator;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author User
 */
public class FXMLDocumentController implements Initializable {

    @FXML
    private Label label;
    @FXML
    private TextField course1Grade;
    @FXML
    private TextField course1Credit;
    @FXML
    private TextField course2Grade;
    @FXML
    private TextField course3Grade;
    @FXML
    private TextField course4Grade;
    @FXML
    private TextField course5Grade;
    @FXML
    private TextField course6Grade;
    @FXML
    private TextField course7Grade;
    @FXML
    private TextField course8Grade;
    @FXML
    private TextField course2Credit;
    @FXML
    private TextField course3Credit;
    @FXML
    private TextField course4Credit;
    @FXML
    private TextField course5Credit;
    @FXML
    private TextField course6Credit;
    @FXML
    private TextField course7Credit;
    @FXML
    private TextField course8Credit;
    @FXML
    private TextField gpaField;

    private String grade;
    private double credit;
    private double gradePoint = 0.0;
    private double credits = 0.0;
    private double cumulativeGradePoint = 0.0;
    private double totalCredits = 0.0;
    private int length = 0;

    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }

    double getGradePoint(String grade) {
        if (grade.equals("A+") || grade.equals("a+")) {
            return 4.0;
        } else if (grade.equals("A") || grade.equals("a")) {
            return 3.75;
        } else if (grade.equals("A-") || grade.equals("a-")) {
            return 3.50;
        } else if (grade.equals("B+") || grade.equals("b+")) {
            return 3.25;
        } else if (grade.equals("B") || grade.equals("b")) {
            return 3.00;
        } else if (grade.equals("B-") || grade.equals("b-")) {
            return 2.75;
        } else if (grade.equals("C+") || grade.equals("c+")) {
            return 2.50;
        } else if (grade.equals("c-") || grade.equals("c-")) {
            return 2.25;
        } else if (grade.equals("D") || grade.equals("d")) {
            return 2.00;
        } else {
            return 0.0;
        }
    }

    double getTotalCreditResult(double credit) {
        cumulativeGradePoint = cumulativeGradePoint + gradePoint * credits;
        return totalCredits = totalCredits + credits;
    }

    @FXML
    private void handleCalculationButtonAction(ActionEvent event) {
        
        //Course 1       
        length = course1Grade.getText().length();
        length = course1Credit.getText().length();
        
        if (length > 0) {

            grade = course1Grade.getText();
            credits = Double.parseDouble(course1Credit.getText());
            gradePoint = getGradePoint(grade);
            credit = getTotalCreditResult(credit);
        }
        //Course 2

        length = course2Grade.getText().length();
        length = course2Credit.getText().length();
        if (length > 0) {
            grade = course2Grade.getText();
            credits = Double.parseDouble(course2Credit.getText());
            gradePoint = getGradePoint(grade);
            credits = getTotalCreditResult(credit);
        }
        //Course 3 
        length = course3Grade.getText().length();
        length = course3Credit.getText().length();
        if (length > 0) {
            grade = course3Grade.getText();
            credits = Double.parseDouble(course3Credit.getText());
            gradePoint = getGradePoint(grade);
            credits = getTotalCreditResult(credit);
        }
        //Course 4 
        length = course4Grade.getText().length();
        length = course4Credit.getText().length();
        if (length > 0) {
            grade = course4Grade.getText();
            credits = Double.parseDouble(course4Credit.getText());
            gradePoint = getGradePoint(grade);
            credit = getTotalCreditResult(credit);
        }
        //Course 5 
        length = course5Grade.getText().length();
        length = course5Credit.getText().length();
        if (length > 0) {
            grade = course5Grade.getText();
            credits = Double.parseDouble(course5Credit.getText());
            gradePoint = getGradePoint(grade);
            credit = getTotalCreditResult(credit);
        }
        //Course 6 
        length = course6Grade.getText().length();
        length = course6Credit.getText().length();
        if (length > 0) {
            grade = course6Grade.getText();
            credits = Double.parseDouble(course6Credit.getText());
            gradePoint = getGradePoint(grade);
            credit = getTotalCreditResult(credit);
        }
        //Course 7 
        length = course7Grade.getText().length();
        length = course7Credit.getText().length();
        if (length > 0) {
            grade = course7Grade.getText();
            credits = Double.parseDouble(course7Credit.getText());
            gradePoint = getGradePoint(grade);
            credit = getTotalCreditResult(credit);
        }

        double gpa = cumulativeGradePoint / totalCredits;
        gpaField.setText("" + gpa);

    }

}
