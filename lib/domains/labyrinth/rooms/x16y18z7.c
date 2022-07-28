inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 18, 7 }));
  set_short( "Corridor - x16y18z7" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y18z7.c",
  "east" : DIR+"/rooms/x17y18z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
