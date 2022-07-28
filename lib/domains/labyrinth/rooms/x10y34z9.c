inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 34, 9 }));
  set_short( "Passage - x10y34z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y34z9.c",
  "east" : DIR+"/rooms/x11y34z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
