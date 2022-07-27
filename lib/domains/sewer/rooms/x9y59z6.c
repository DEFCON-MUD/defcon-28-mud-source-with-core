inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 59, 6 }));
  set_short( "Passage - x9y59z6" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y60z6.c",
  "south" : DIR+"/rooms/x9y58z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
