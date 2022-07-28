inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 22, 7 }));
  set_short( "Corridor - x58y22z7" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y22z7.c",
  "east" : DIR+"/rooms/x59y22z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
