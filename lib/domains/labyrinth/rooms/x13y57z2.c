inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 57, 2 }));
  set_short( "Corridor - x13y57z2" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y58z2.c",
  "south" : DIR+"/rooms/x13y56z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
