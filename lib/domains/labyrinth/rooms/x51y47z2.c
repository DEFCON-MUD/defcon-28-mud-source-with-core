inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 47, 2 }));
  set_short( "Corridor - x51y47z2" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y48z2.c",
  "south" : DIR+"/rooms/x51y46z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
