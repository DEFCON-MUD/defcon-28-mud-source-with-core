inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 3 }));
  set_short( "Hallway - x45y8z3" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y9z3.c",
  "south" : DIR+"/rooms/x45y7z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
