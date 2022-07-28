inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 6, 3 }));
  set_short( "Corridor - x27y6z3" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y7z3.c",
  "south" : DIR+"/rooms/x27y5z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
