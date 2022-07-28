inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 8, 4 }));
  set_short( "Hallway - x51y8z4" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y8z4.c",
  "north" : DIR+"/rooms/x51y9z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
