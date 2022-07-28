inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 41, 0 }));
  set_short( "Hallway - x21y41z0" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y42z0.c",
  "south" : DIR+"/rooms/x21y40z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
