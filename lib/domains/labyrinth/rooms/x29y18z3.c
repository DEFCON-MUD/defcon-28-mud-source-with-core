inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 18, 3 }));
  set_short( "Hallway - x29y18z3" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y18z3.c",
  "south" : DIR+"/rooms/x29y17z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
