inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 21, 4 }));
  set_short( "Hallway - x13y21z4" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y22z4.c",
  "south" : DIR+"/rooms/x13y20z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
