inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 18, 7 }));
  set_short( "Corridor - x29y18z7" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y18z7.c",
  "north" : DIR+"/rooms/x29y19z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
