inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 6, 2 }));
  set_short( "Hallway - x49y6z2" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y6z2.c",
  "south" : DIR+"/rooms/x49y5z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
