
#pragma once

// Las siguientes macros definen la plataforma mínima requerida. Esta plataforma es la primera
// versión de Windows, Internet Explorer, etc. que tiene las características necesarias para ejecutar 
// la aplicación. Las macros funcionan habilitando todas las características disponibles 
// en las versiones de la plataforma hasta la versión especificada, incluida esta.

// Modificar las siguientes secciones define si su objetivo es una plataforma distinta a las especificadas a continuación.
// Consulte la referencia MSDN para obtener la información más reciente sobre los valores correspondientes a las diferentes plataformas.
#ifndef WINVER                          // Especifica que la plataforma mínima requerida es Windows Vista.
#define WINVER 0x0600           // Cambiar al valor apropiado correspondiente a otras versiones de Windows.
#endif

#ifndef _WIN32_WINNT            // Especifica que la plataforma mínima requerida es Windows Vista.
#define _WIN32_WINNT 0x0600     // Cambiar al valor apropiado correspondiente a otras versiones de Windows.
#endif

#ifndef _WIN32_WINDOWS          // Especifica que la plataforma mínima requerida es Windows 98.
#define _WIN32_WINDOWS 0x0410 // Cambiar al valor apropiado correspondiente a Windows Me o posterior.
#endif

#ifndef _WIN32_IE                       // Especifica que la plataforma mínima requerida es Internet Explorer 7.0.
#define _WIN32_IE 0x0700        // Cambiar al valor apropiado correspondiente a otras versiones de IE.
#endif

