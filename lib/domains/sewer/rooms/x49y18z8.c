inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 8 }));
  set_short( "Hallway - x49y18z8" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y18z8.c",
  "south" : DIR+"/rooms/x49y17z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
