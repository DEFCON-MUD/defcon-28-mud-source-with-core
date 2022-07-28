inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 46, 0 }));
  set_short( "Hallway - x13y46z0" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y46z0.c",
  "south" : DIR+"/rooms/x13y45z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
