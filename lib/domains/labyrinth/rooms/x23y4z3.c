inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 3 }));
  set_short( "Hallway - x23y4z3" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y5z3.c",
  "south" : DIR+"/rooms/x23y3z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
