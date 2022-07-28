inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 39, 7 }));
  set_short( "Hallway - x29y39z7" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y40z7.c",
  "south" : DIR+"/rooms/x29y38z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
