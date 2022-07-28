inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 2, 7 }));
  set_short( "Passage - x25y2z7" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y2z7.c",
  "north" : DIR+"/rooms/x25y3z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
