inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 30, 3 }));
  set_short( "Passage - x11y30z3" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y30z3.c",
  "north" : DIR+"/rooms/x11y31z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
