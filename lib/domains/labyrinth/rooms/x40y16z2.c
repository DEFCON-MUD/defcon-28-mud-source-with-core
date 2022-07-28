inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 16, 2 }));
  set_short( "Corridor - x40y16z2" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y16z2.c",
  "east" : DIR+"/rooms/x41y16z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
