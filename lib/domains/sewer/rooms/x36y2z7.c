inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 2, 7 }));
  set_short( "Corridor - x36y2z7" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y2z7.c",
  "east" : DIR+"/rooms/x37y2z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
