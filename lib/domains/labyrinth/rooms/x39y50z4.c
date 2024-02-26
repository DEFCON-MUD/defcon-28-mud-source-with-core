inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 50, 4 }));
  set_short( "Corridor - x39y50z4" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y51z4.c",
  "south" : DIR+"/rooms/x39y49z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
