inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 56, 0 }));
  set_short( "Hallway - x45y56z0" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y56z0.c",
  "north" : DIR+"/rooms/x45y57z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
