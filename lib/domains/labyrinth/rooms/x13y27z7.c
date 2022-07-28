inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 27, 7 }));
  set_short( "Passage - x13y27z7" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y28z7.c",
  "south" : DIR+"/rooms/x13y26z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
