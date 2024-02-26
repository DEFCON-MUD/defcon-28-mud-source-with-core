inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 57, 4 }));
  set_short( "Hallway - x41y57z4" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y58z4.c",
  "south" : DIR+"/rooms/x41y56z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
