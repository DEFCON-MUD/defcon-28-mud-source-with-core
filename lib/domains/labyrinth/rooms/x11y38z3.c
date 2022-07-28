inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 3 }));
  set_short( "Passage - x11y38z3" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y39z3.c",
  "south" : DIR+"/rooms/x11y37z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
