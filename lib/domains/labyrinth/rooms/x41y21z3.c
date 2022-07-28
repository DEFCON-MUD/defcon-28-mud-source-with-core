inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 21, 3 }));
  set_short( "Corridor - x41y21z3" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y22z3.c",
  "south" : DIR+"/rooms/x41y20z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
