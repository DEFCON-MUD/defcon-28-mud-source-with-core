inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 16, 5 }));
  set_short( "Passage - x57y16z5" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y16z5.c",
  "north" : DIR+"/rooms/x57y17z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
