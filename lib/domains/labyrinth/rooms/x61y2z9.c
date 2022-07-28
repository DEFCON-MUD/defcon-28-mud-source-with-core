inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 9 }));
  set_short( "Hallway - x61y2z9" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z9.c",
  "north" : DIR+"/rooms/x61y3z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
