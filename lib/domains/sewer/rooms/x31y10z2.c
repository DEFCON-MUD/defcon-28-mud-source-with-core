inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 10, 2 }));
  set_short( "Passage - x31y10z2" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y10z2.c",
  "south" : DIR+"/rooms/x31y9z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
