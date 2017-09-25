import java.io.*
import java.util.*

fun getGrade(grade: Int): Int = when
{
    grade < 38 -> grade
    else -> {
         var ngrade = Math.ceil(grade.toDouble() / 5).toInt() * 5;
         when {
             ngrade - grade < 3 -> ngrade
             else -> grade
         }
    }
}

fun main(args: Array<String>)
 {
    var n = readLine()!!.toInt();
    for(i in 1..n)
    {
         var grade = readLine()!!.toInt();

        println(getGrade(grade));
    }
}