inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 46, 5 }));
  set_short( "Hallway - x15y46z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y46z5.c",
  "south" : DIR+"/rooms/x15y45z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
