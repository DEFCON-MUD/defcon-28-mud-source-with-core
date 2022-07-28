inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 4 }));
  set_short( "Corridor - x59y54z4" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y55z4.c",
  "south" : DIR+"/rooms/x59y53z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
