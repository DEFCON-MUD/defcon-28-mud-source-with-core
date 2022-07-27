inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 61, 6 }));
  set_short( "Passage - x25y61z6" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y62z6.c",
  "south" : DIR+"/rooms/x25y60z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
