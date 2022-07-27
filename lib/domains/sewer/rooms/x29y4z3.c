inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 4, 3 }));
  set_short( "Hallway - x29y4z3" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y4z3.c",
  "north" : DIR+"/rooms/x29y5z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
