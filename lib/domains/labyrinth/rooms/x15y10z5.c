inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 10, 5 }));
  set_short( "Hallway - x15y10z5" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y10z5.c",
  "north" : DIR+"/rooms/x15y11z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
