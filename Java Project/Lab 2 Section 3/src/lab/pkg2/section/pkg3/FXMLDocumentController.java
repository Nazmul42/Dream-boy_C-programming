/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab.pkg2.section.pkg3;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 *
 * @author kmhasan
 */
public class FXMLDocumentController implements Initializable {

    @FXML
    private TextField idField;
    @FXML
    private TextField nameField;
    @FXML
    private TextField emailField;
    @FXML
    private TextField phoneField;

    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }
// 2012000000010

    boolean isValidId(String id) {
        if (id.length() != 13) {
            return false;
        }
        for (int i = 0; i < id.length(); i++) {
            if (id.charAt(i) < '0' || id.charAt(i) > '9') {
                return false;
            }
        }
        /*
        for (int i = 0; i < id.length(); i++)
            if (!Character.isDigit(id.charAt(i)))
                return false;
         */
        return true;
    }

    boolean isValidCellPhoneNumber(String phone) {
        if (phone.length() != 11) {
            return false;
        }

        if (phone.startsWith("011")
                || phone.startsWith("015")
                || phone.startsWith("016")
                || phone.startsWith("017")
                || phone.startsWith("018")
                || phone.startsWith("019"))
            ; else {
            return false;
        }
        for (int i = 0; i < phone.length(); i++) {
            if (!Character.isDigit(phone.charAt(i))) {
                return false;
            }
        }
        return true;
    }

    boolean isValidName(String name) {
        for (int i = 0; i < name.length(); i++) {
            if (Character.isDigit(name.charAt(i))) {
                return true;
            }
        }

        return false;
        
    }

   
    boolean isValidEmail(String email) {

        for (int i = 0; i < email.length(); i++) {
            if (!Character.isDigit(email.charAt(i))) {
                
                return true;
            
            }
        }

        return false;
    }

    @FXML
    private void handleSubmitAction(ActionEvent event) {
        // StudenId
        String studentId = idField.getText().trim();
        if (isValidId(studentId)) {
            System.out.println("Student ID is valid");
        } else {
            System.out.println("Student ID is invalid");
        }
        // Phone
        String phone = phoneField.getText().trim();
        if (isValidCellPhoneNumber(phone)) {
            System.out.println("Phone number is valid");
        } else {
            System.out.println("Phone number is not valid");
        }
        // Name
        String name = nameField.getText().trim();
        
        if (isValidName(name)) {
 
            System.out.println("Name is correct");
            
        } 
        
        else {
             System.out.println("Name is incorrect");
        }
        
       
        String email = emailField.getText().trim();
        if (isValidEmail(email)) {
            System.out.println("Email is correct");
        } else {
            System.out.println("Email is incorrect");
        }

    }

}
