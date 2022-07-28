inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 3 }));
  set_short( "Hallway - x23y12z3" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y12z3.c",
  "south" : DIR+"/rooms/x23y11z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
