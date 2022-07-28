inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 52, 8 }));
  set_short( "Hallway - x53y52z8" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y52z8.c",
  "north" : DIR+"/rooms/x53y53z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
