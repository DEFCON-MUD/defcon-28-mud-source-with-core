inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 48, 2 }));
  set_short( "Passage - x45y48z2" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y48z2.c",
  "north" : DIR+"/rooms/x45y49z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
