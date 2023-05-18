<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/clht9z811005408jkx0gbsl4a/project/3016749" alt="sallorca's 42 minitalk Score" /></a>
<h2>Instrucciones específicas</h2> <ul> <li>Los ejecutables deben llamarse <code>client</code> y <code>server</code>.</li> <li>Deberás proporcionar un archivo Makefile, que compilará los archivos fuente de tu programa. No deberá hacer relink.</li> <li>Puedes usar tu libft.</li> <li>Debes gestionar los errores con cuidado. Bajo ninguna circunstancia tu programa puede terminar inesperadamente (segfault, bus error, double free, etc).</li> <li>Tu programa no puede tener leaks de memoria.</li> <li>Puedes utilizar una variable global por programa (una para el cliente y otra para el servidor), pero tendrás que justificar su uso.</li> <li>En la parte obligatoria se te permite utilizar las siguientes funciones:</li> <ul> <li><code>write</code></li> <li><code>ft_printf</code> y cualquier equivalente que TÚ hayas programado</li> <li><code>signal</code></li> <li><code>sigemptyset</code></li> <li><code>sigaddset</code></li> <li><code>sigaction</code></li> <li><code>kill</code></li> <li><code>getpid</code></li> <li><code>malloc</code></li> <li><code>free</code></li> <li><code>pause</code></li> <li><code>sleep</code></li> <li><code>usleep</code></li> <li><code>exit</code></li> </ul> </ul>
<h2>Parte obligatoria</h2>
<ul>
  <li>Debes crear un programa de comunicación en la forma de un cliente y un servidor.</li>
  <li>El servidor debe lanzarse primero, tras lanzarse debe mostrar su PID.</li>
  <li>El cliente tomará como parámetros:</li>
  <ul>
    <li>El PID del servidor.</li>
    <li>La string que debería mandarse.</li>
  </ul>
  <li>El cliente debe comunicar la string pasada como parámetro al servidor. Una vez la string se haya recibido, el servidor debe mostrarla.</li>
  <li>El servidor debe ser capaz de mostrar la string suficientemente rápido. Por rápido queremos decir que si piensas que está tardando mucho, probablemente es que está tardando demasiado. 1 segundo para mostrar 100 caracteres es ¡muchíiiiisimo!</li>
  <li>Tu servidor debe poder recibir strings de distintos clientes consecutivamente, sin necesidad de reiniciar.</li>
  <li>La comunicación entre tu cliente y tu servidor debe hacerse SOLO utilizando señales UNIX.</li>
  <li>Solo puedes utilizar estas dos señales: SIGUSR1 y SIGUSR2.</li>
  <p>Linux no pone en cola señales cuando ya tienes señales pendientes de este tipo. ¿Hora de hacer bonus?</p>
</ul>
