inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 21, 5 }));
  set_short( "Corridor - x51y21z5" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y22z5.c",
  "south" : DIR+"/rooms/x51y20z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
