inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 14, 6 }));
  set_short( "Corridor - x24y14z6" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y14z6.c",
  "east" : DIR+"/rooms/x25y14z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
