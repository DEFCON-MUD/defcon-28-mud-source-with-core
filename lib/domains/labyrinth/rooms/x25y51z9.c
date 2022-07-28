inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 51, 9 }));
  set_short( "Hallway - x25y51z9" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y52z9.c",
  "south" : DIR+"/rooms/x25y50z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
