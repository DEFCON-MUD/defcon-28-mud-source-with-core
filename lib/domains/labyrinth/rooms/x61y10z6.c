inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 10, 6 }));
  set_short( "Hallway - x61y10z6" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y10z6.c",
  "north" : DIR+"/rooms/x61y11z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
