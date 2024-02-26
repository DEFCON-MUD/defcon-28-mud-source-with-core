inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 31, 1 }));
  set_short( "Passage - x61y31z1" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y32z1.c",
  "south" : DIR+"/rooms/x61y30z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
