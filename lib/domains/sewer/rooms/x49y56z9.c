inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 56, 9 }));
  set_short( "Hallway - x49y56z9" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y56z9.c",
  "north" : DIR+"/rooms/x49y57z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
