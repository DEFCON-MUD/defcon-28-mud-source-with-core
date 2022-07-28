inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 62, 5 }));
  set_short( "Corridor - x50y62z5" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y62z5.c",
  "east" : DIR+"/rooms/x51y62z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
