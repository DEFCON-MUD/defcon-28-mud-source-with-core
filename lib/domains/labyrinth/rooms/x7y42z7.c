inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 42, 7 }));
  set_short( "Corridor - x7y42z7" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y42z7.c",
  "north" : DIR+"/rooms/x7y43z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
