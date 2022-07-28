inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 44, 3 }));
  set_short( "Hallway - x37y44z3" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y44z3.c",
  "east" : DIR+"/rooms/x38y44z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
