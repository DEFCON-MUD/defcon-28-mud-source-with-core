inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 14, 1 }));
  set_short( "Hallway - x39y14z1" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y14z1.c",
  "south" : DIR+"/rooms/x39y13z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
