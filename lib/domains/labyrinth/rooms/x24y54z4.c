inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 54, 4 }));
  set_short( "Hallway - x24y54z4" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y54z4.c",
  "east" : DIR+"/rooms/x25y54z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
