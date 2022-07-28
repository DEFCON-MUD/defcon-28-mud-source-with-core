inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 34, 6 }));
  set_short( "Passage - x11y34z6" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y34z6.c",
  "north" : DIR+"/rooms/x11y35z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
