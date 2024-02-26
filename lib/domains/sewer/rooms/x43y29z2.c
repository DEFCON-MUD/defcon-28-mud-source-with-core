inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 29, 2 }));
  set_short( "Hallway - x43y29z2" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y30z2.c",
  "south" : DIR+"/rooms/x43y28z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
