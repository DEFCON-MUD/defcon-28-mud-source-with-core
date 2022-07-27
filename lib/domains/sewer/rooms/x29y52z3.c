inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 52, 3 }));
  set_short( "Hallway - x29y52z3" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y52z3.c",
  "east" : DIR+"/rooms/x30y52z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
