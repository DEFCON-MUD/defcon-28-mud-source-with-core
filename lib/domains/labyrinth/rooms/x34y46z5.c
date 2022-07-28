inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 46, 5 }));
  set_short( "Passage - x34y46z5" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y46z5.c",
  "east" : DIR+"/rooms/x35y46z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
