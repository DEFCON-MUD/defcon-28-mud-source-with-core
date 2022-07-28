inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 6, 4 }));
  set_short( "Passage - x21y6z4" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y6z4.c",
  "east" : DIR+"/rooms/x22y6z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
