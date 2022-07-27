inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 56, 9 }));
  set_short( "Passage - x21y56z9" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y56z9.c",
  "north" : DIR+"/rooms/x21y57z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
