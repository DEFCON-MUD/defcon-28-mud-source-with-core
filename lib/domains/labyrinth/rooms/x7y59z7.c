inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 59, 7 }));
  set_short( "Hallway - x7y59z7" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y60z7.c",
  "south" : DIR+"/rooms/x7y58z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
