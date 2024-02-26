inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 5 }));
  set_short( "Passage - x45y40z5" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y40z5.c",
  "north" : DIR+"/rooms/x45y41z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
