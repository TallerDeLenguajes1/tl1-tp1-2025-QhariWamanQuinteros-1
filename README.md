# tp1
### comando git clone_
Basicamente se usa para _clonar un repositorio_ remoto en un directorio nuevo
**Uso**:
 git clone <repository-url(url del repositorio)>
Por defecto git crea una nueva carpeta con el nombre del repositorio

### archivo .gitignore
Un archivo gititnore especifica archivos intencionalmente no rastreados que git debería ignorar. Los archivos ya rastreados por git no se ven afectados.
Permite mantener el repositorio limpio y seguro al no permitir que se suban archivos no deseados, los ejecutables, por ejemplo. Se lo debe usar siempre que se trabaje en un repositorio de git. El archivo .gitignore se crea en la carpeta principal del proyecto
 Cada linea es un patron. Se usa # para comentarios y / para directorios