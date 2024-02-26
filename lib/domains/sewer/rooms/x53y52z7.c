inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 52, 7 }));
  set_short( "Hallway - x53y52z7" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y52z7.c",
  "east" : DIR+"/rooms/x54y52z7.c",
  "north" : DIR+"/rooms/x53y53z7.c",
  "south" : DIR+"/rooms/x53y51z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
