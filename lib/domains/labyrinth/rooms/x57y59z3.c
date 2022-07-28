inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 59, 3 }));
  set_short( "Hallway - x57y59z3" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y60z3.c",
  "south" : DIR+"/rooms/x57y58z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
