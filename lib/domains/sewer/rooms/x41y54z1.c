inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 54, 1 }));
  set_short( "Passage - x41y54z1" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y55z1.c",
  "south" : DIR+"/rooms/x41y53z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
