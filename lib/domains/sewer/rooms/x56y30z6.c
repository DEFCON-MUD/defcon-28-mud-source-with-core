inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 30, 6 }));
  set_short( "Hallway - x56y30z6" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y30z6.c",
  "east" : DIR+"/rooms/x57y30z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
