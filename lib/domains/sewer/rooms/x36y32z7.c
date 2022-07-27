inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 32, 7 }));
  set_short( "Corridor - x36y32z7" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y32z7.c",
  "east" : DIR+"/rooms/x37y32z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
