inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 7, 3 }));
  set_short( "Corridor - x59y7z3" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y8z3.c",
  "south" : DIR+"/rooms/x59y6z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
