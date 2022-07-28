inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 23, 9 }));
  set_short( "Passage - x29y23z9" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y24z9.c",
  "south" : DIR+"/rooms/x29y22z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
