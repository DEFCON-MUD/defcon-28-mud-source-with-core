inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 36, 2 }));
  set_short( "Hallway - x33y36z2" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y36z2.c",
  "south" : DIR+"/rooms/x33y35z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
