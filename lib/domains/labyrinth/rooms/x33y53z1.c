inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 53, 1 }));
  set_short( "Corridor - x33y53z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y54z1.c",
  "south" : DIR+"/rooms/x33y52z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
