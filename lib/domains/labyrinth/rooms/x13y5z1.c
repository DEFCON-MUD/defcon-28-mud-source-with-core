inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 1 }));
  set_short( "Hallway - x13y5z1" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z1.c",
  "south" : DIR+"/rooms/x13y4z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
