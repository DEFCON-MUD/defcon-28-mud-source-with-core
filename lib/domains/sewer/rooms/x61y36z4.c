inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 4 }));
  set_short( "Corridor - x61y36z4" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y37z4.c",
  "south" : DIR+"/rooms/x61y35z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
