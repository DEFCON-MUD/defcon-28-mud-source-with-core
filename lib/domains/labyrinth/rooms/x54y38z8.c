inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 38, 8 }));
  set_short( "Corridor - x54y38z8" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y38z8.c",
  "east" : DIR+"/rooms/x55y38z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
