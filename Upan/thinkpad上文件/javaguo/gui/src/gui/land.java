package gui;


import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.HPos;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class land extends Application{
	public TextField tizhong = new TextField();
	public TextField shengao = new TextField();
	public TextField BMI = new TextField();
	public void start(Stage primaryStage){
		GridPane pane = new GridPane();
		pane.setAlignment(Pos.CENTER);
		pane.setPadding(new Insets(11.5, 12.5, 13.5, 14.5));
		pane.setHgap(5.5);
		pane.setVgap(5.5);
		
		pane.add(new Label("体重(公斤)"), 0, 0);
		pane.add(tizhong, 1, 0);
		pane.add(new Label("身高(米)"), 0, 1);
		pane.add(shengao, 1, 1);
		pane.add(new Label("BMI"), 0, 2);
		pane.add(BMI, 1, 2);
		Button btBMI = new Button("计算BMI"); 
		pane.add(btBMI, 1, 3);
		GridPane.setHalignment(btBMI, HPos.LEFT);
		btBMI.setOnAction(e -> calculate());
		Scene scene = new Scene(pane);
		primaryStage.setTitle("BMI计算");
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	public static void main(String[] args){
		Application.launch(args);
	}
	private void calculate(){
		double tizhongjieguo = Double.parseDouble(tizhong.getText());
		double shengaojieguo = Double.parseDouble(shengao.getText());
		double c=tizhongjieguo/(shengaojieguo*shengaojieguo);		
		BMI.setText(c+"");
	}
}

