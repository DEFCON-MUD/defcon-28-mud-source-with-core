inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 61, 8 }));
  set_short( "Passage - x55y61z8" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y62z8.c",
  "south" : DIR+"/rooms/x55y60z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
