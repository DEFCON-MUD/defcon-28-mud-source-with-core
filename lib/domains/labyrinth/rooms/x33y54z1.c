inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 54, 1 }));
  set_short( "Passage - x33y54z1" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y55z1.c",
  "south" : DIR+"/rooms/x33y53z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
