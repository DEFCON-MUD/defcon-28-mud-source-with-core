inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 64, 6 }));
  set_short( "Passage - x24y64z6" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y64z6.c",
  "east" : DIR+"/rooms/x25y64z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
