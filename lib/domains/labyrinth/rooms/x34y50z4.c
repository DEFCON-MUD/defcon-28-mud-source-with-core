inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 50, 4 }));
  set_short( "Hallway - x34y50z4" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y50z4.c",
  "east" : DIR+"/rooms/x35y50z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
