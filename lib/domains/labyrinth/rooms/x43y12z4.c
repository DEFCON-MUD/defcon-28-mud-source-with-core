inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 12, 4 }));
  set_short( "Hallway - x43y12z4" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y13z4.c",
  "south" : DIR+"/rooms/x43y11z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
