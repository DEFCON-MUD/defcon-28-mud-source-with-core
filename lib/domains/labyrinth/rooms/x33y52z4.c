inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 52, 4 }));
  set_short( "Corridor - x33y52z4" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y52z4.c",
  "east" : DIR+"/rooms/x34y52z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
