inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 21, 9 }));
  set_short( "Hallway - x13y21z9" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y22z9.c",
  "south" : DIR+"/rooms/x13y20z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
