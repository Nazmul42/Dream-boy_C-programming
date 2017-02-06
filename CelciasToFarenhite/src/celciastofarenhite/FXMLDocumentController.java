/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package celciastofarenhite;

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
    private TextField fahrenheitDisplayField;
    @FXML
    private TextField celciusDisplayField;
    
   
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    

    @FXML
    private void handleConvertButtonAction(ActionEvent event) {
     
        double temparetureInCelcius = Double.parseDouble(celciusDisplayField.getText());
      
        double  temparetureInFahrenheit = temparetureInCelcius*9/5+32;
        fahrenheitDisplayField.setText(""+ temparetureInFahrenheit);
        
        /*double temparetureToFahrenheit = Double.parseDouble(fahrenheitDisplayField.getText());
        double temparetureToCelcius = (temparetureToFahrenheit - 32)*5/9;
        celciusDisplayField.setText(""+ temparetureToCelcius);
        */
    }
    
}
