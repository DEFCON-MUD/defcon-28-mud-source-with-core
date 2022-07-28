inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 16, 9 }));
  set_short( "Passage - x27y16z9" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y16z9.c",
  "north" : DIR+"/rooms/x27y17z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
