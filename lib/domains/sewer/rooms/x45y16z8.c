inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 8 }));
  set_short( "Passage - x45y16z8" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y17z8.c",
  "south" : DIR+"/rooms/x45y15z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
