inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 53, 5 }));
  set_short( "Hallway - x7y53z5" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y54z5.c",
  "south" : DIR+"/rooms/x7y52z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
