inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 9, 1 }));
  set_short( "Hallway - x17y9z1" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y10z1.c",
  "south" : DIR+"/rooms/x17y8z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
