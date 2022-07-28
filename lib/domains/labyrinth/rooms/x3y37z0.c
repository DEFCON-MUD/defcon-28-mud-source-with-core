inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 37, 0 }));
  set_short( "Passage - x3y37z0" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y38z0.c",
  "south" : DIR+"/rooms/x3y36z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
