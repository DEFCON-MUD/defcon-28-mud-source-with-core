inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 0, 2 }));
  set_short( "Corridor - x7y0z2" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y0z2.c",
  "east" : DIR+"/rooms/x8y0z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
