inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 56, 9 }));
  set_short( "Passage - x21y56z9" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y56z9.c",
  "north" : DIR+"/rooms/x21y57z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
