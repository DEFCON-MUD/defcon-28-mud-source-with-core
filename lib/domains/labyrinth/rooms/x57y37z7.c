inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 37, 7 }));
  set_short( "Corridor - x57y37z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y38z7.c",
  "south" : DIR+"/rooms/x57y36z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
