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
import javafx.stage.Stage;
public class gui extends Application {
	double investAmount;
	int year;
	double yearInterest;
	public void investmentCompute(){};
	public void InvestmentCompute(double investAmount,int year,double yearInterest){
		this.investAmount = investAmount;
		this.year = year ;
		this.yearInterest = yearInterest;
	}
	double getTotalAmount(){
		double amount = investAmount * Math.pow(1 +( yearInterest*1.0)/100, year);
		return amount;
	}
	public void start(Stage pr){
		GridPane pane = new GridPane();
		pr.setTitle("投资计算器");
		pane.setAlignment(Pos.CENTER);
		pane.setPadding(new Insets(12,12,12,12));
		pane.setHgap(5.5);
		pane.setVgap(5.5);
		
		final TextField Touzi = new TextField();
		final TextField Nian = new TextField();
		final TextField Nianlilv = new TextField();
		final TextField Weilaizhi = new TextField();
		
		pane.add(new Label("投资总额"), 0, 0);
		pane.add(Touzi, 1, 0);
		pane.add(new Label("投资年数"), 0, 1);
		pane.add(Nian, 1, 1);
		pane.add(new Label("年利率"), 0, 2);
		pane.add(Nianlilv, 1, 2);
		pane.add(new Label("未来之"), 0, 3);
		pane.add(Weilaizhi, 1, 3);
		Button bt = new Button("计算");
		pane.add(bt, 1, 4);
		GridPane.setHalignment(bt, HPos.RIGHT);
		bt.setOnAction(new EventHandler<ActionEvent>(){
			public void handle(ActionEvent e){
				 double touzi = Double.parseDouble(Touzi.getText());
				 int nian = Integer.parseInt(Nian.getText());
				 double nianlilv = Double.parseDouble(Nianlilv.getText());
				gui loan = new gui();
				loan.InvestmentCompute(touzi, nian, nianlilv);
				String a = String.valueOf(loan.getTotalAmount());
				Weilaizhi.setText(String.valueOf(a));
			}
		});
		Scene scene = new Scene(pane,280,240);
		pr.setScene(scene);
		pr.show();
	}
	public static void main(String[] args){
		launch(args);
	}
}