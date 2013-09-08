<?php

class UserController extends Controller
{	

	public function filters()
	{
		return array(
			'accessControl', // perform access control for CRUD operations
			'postOnly + delete', // we only allow deletion via POST request
		);
	}
	
	public function accessRules()
	{
		return array(
			array('allow',  // allow all users to perform 'index' and 'view' actions
				'actions'=>array('login','logout'),
				'users'=>array('*'),
			),
			array('allow',  // allow all users to perform 'index' and 'view' actions
				'actions'=>array(),
				'users'=>array('@'),
			),
			array('deny',
				'users'=>array('*'),
			),
		);
	}
	
	public function actionLogin()
	{
		$this->layout = 'without_header';
		
		if (isset($_POST['user']))
		{
			$user_name = $_POST['user']['user_name'];
			$password = $_POST['user']['password'];
			$user = User::model()->findByAttributes(array(
				'user_name'=>$user_name
			));
			
			if ($user)
			{
				$identity = new UserIdentity($user_name, $password);
				if ($identity->authenticate())
				{
					$duration = 3600*24*30;
					Yii::app()->user->login($identity, $duration);
					$this->redirect('/');
				}
			}
		}
		
		
		$this->render('login', array(
			'showHeader'=>true,
		));
	}
	
	public function actionLogout()
	{
		Yii::app()->user->logout();
		$this->redirect('user/login');
	}
}
	
?>