inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 4 }));
  set_short( "Hallway - x41y6z4" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y7z4.c",
  "south" : DIR+"/rooms/x41y5z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
