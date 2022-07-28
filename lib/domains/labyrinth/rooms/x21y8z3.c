inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 8, 3 }));
  set_short( "Hallway - x21y8z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y9z3.c",
  "south" : DIR+"/rooms/x21y7z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
