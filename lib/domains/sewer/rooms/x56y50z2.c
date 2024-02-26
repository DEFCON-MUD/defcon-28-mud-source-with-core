inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 50, 2 }));
  set_short( "Corridor - x56y50z2" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y50z2.c",
  "east" : DIR+"/rooms/x57y50z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
