inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 26, 5 }));
  set_short( "Hallway - x44y26z5" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y26z5.c",
  "east" : DIR+"/rooms/x45y26z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
