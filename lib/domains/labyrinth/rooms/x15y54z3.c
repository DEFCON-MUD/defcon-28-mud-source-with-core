inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 54, 3 }));
  set_short( "Passage - x15y54z3" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y54z3.c",
  "north" : DIR+"/rooms/x15y55z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
