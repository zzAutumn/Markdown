html代码：
    <!DOCTYPE html>
<html>
<head>
	<title>caculator</title>
</head>
<body>
	<div>
		<form action="01.php" method="post">
			<p>input numA: <input type="text" name="numA"></p>
			<p>input numB: <input type="text" name="numB"></p>
			<p><select name="operator">
				<option value="+">+</option>
				<option value="-">-</option>
				<option value="*">*</option>
				<option value="/">/</option>
				</select>
			</p>
			<p><input type="submit" name="stn" value="submit"></p>
		</form>
	</div>
</body>
</html>

php代码部分（有两个文件）：
    1.
    <?php 
        class Caculator
        {
            private $numA;
            private $numB;
            private $operator;

            public function __construct($a,$b,$select)
            {
                $this->numA = $a;
                $this->numB = $b;
                $this->operator = $select;
                $this->caculate();
            }

            public static function isValid($numA,$numB)
            {
                if ($numA && $numB && ($numB !== 0) ) {
                    return true;
                }elseif ($numA == null && $numB) {
                    echo "input a";
                }elseif ($numB == null && $numA) {
                    echo "input b";
                }elseif ($numB && $numB == 0) {
                    echo "can not divide by 0";
                }elseif ($numA==null && $numB==null){
                    echo "input a and b";
                }
            }

            public function caculate()
            {

                switch ($this->operator) {
                    case '+':
                        echo ($this->numA + $this->numB);
                        break;

                    case '-':		
                        echo ($this->numA - $this->numB);
                        break;
                    case '*':
                        echo ($this->numA * $this->numB);
                        break;
                    case '/':
                        echo  ($this->numA / $this->numB);
                        break;
                    default:
                        echo "something wrong";
                        break;
                }
            }
        }
  ?>
    
    2
<?php 

$numA = $_POST['numA'];
$numB = $_POST['numB'];
$operator = $_POST['operator'];

function __autoload($class)
{
	require_once("./classes/$class.class.php");
}

if (Caculator::isValid($numA,$numB)) {
	new Caculator($numA,$numB,$operator);
}

?>

  
