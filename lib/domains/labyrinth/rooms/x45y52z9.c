inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 52, 9 }));
  set_short( "Passage - x45y52z9" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y52z9.c",
  "south" : DIR+"/rooms/x45y51z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
