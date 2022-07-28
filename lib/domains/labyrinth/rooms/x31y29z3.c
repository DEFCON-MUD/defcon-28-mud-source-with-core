inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 29, 3 }));
  set_short( "Hallway - x31y29z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y30z3.c",
  "south" : DIR+"/rooms/x31y28z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
