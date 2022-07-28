inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 42, 3 }));
  set_short( "Hallway - x49y42z3" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y42z3.c",
  "south" : DIR+"/rooms/x49y41z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
