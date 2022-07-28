inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 52, 4 }));
  set_short( "Hallway - x38y52z4" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y52z4.c",
  "east" : DIR+"/rooms/x39y52z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
