inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 19, 6 }));
  set_short( "Hallway - x31y19z6" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y20z6.c",
  "south" : DIR+"/rooms/x31y18z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
