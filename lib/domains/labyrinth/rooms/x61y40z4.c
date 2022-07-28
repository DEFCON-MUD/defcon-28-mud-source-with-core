inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 40, 4 }));
  set_short( "Hallway - x61y40z4" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y40z4.c",
  "north" : DIR+"/rooms/x61y41z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
