inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 9 }));
  set_short( "Hallway - x61y52z9" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z9.c",
  "north" : DIR+"/rooms/x61y53z9.c",
  "south" : DIR+"/rooms/x61y51z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
