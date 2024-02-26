inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 58, 4 }));
  set_short( "Hallway - x35y58z4" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y58z4.c",
  "south" : DIR+"/rooms/x35y57z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
