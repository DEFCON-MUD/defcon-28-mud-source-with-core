inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 58, 3 }));
  set_short( "Passage - x51y58z3" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y58z3.c",
  "north" : DIR+"/rooms/x51y59z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
