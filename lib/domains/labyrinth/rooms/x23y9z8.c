inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 9, 8 }));
  set_short( "Corridor - x23y9z8" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y10z8.c",
  "south" : DIR+"/rooms/x23y8z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
