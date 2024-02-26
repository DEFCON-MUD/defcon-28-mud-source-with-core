inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 6 }));
  set_short( "Hallway - x1y36z6" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y36z6.c",
  "south" : DIR+"/rooms/x1y35z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
