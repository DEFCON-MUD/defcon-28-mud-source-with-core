inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 24, 7 }));
  set_short( "Passage - x57y24z7" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y24z7.c",
  "south" : DIR+"/rooms/x57y23z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
