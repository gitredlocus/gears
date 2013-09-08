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
				'actions'=>array('login'),
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
			$user_name = $_POST['user_name'];
			$password = $_POST['password'];
			$user = User::model()->findByAttributes(array(
				'user_name'=>$username
			));
			
			if ($user)
			{
				if ($user->validatePassword($password))
				{
					
					$this->redirect('/');
				}
			}
		}
		
		
		$this->render('login', array(
			'showHeader'=>true,
		));
	}
}
	
?>