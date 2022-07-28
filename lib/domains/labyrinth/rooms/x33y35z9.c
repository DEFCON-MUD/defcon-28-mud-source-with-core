inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 35, 9 }));
  set_short( "Hallway - x33y35z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y36z9.c",
  "south" : DIR+"/rooms/x33y34z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
