inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 54, 2 }));
  set_short( "Passage - x10y54z2" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y54z2.c",
  "east" : DIR+"/rooms/x11y54z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
