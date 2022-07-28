inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 35, 2 }));
  set_short( "Corridor - x41y35z2" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y36z2.c",
  "south" : DIR+"/rooms/x41y34z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
