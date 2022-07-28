inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 32, 4 }));
  set_short( "Passage - x30y32z4" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y32z4.c",
  "east" : DIR+"/rooms/x31y32z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
