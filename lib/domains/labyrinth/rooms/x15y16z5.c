inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 16, 5 }));
  set_short( "Passage - x15y16z5" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y16z5.c",
  "south" : DIR+"/rooms/x15y15z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
