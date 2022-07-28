inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 20, 2 }));
  set_short( "Hallway - x39y20z2" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "south" : DIR+"/rooms/x39y19z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
