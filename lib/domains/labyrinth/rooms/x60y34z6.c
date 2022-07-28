inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 34, 6 }));
  set_short( "Passage - x60y34z6" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y34z6.c",
  "east" : DIR+"/rooms/x61y34z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
