inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 4, 5 }));
  set_short( "Hallway - x45y4z5" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y4z5.c",
  "north" : DIR+"/rooms/x45y5z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
