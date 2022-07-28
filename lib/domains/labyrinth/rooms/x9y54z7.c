inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 7 }));
  set_short( "Corridor - x9y54z7" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y54z7.c",
  "south" : DIR+"/rooms/x9y53z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
