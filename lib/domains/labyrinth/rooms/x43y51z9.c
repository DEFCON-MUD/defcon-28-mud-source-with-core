inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 51, 9 }));
  set_short( "Passage - x43y51z9" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y52z9.c",
  "south" : DIR+"/rooms/x43y50z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
