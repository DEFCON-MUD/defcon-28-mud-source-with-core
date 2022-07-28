inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 8, 8 }));
  set_short( "Corridor - x50y8z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y8z8.c",
  "east" : DIR+"/rooms/x51y8z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
