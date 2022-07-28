inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 8, 7 }));
  set_short( "Passage - x10y8z7" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y8z7.c",
  "east" : DIR+"/rooms/x11y8z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
