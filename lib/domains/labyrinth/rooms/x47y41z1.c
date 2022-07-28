inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 41, 1 }));
  set_short( "Corridor - x47y41z1" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y42z1.c",
  "south" : DIR+"/rooms/x47y40z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
