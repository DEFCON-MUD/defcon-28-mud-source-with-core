inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 60, 3 }));
  set_short( "Corridor - x8y60z3" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y60z3.c",
  "east" : DIR+"/rooms/x9y60z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
