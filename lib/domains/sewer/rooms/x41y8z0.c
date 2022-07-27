inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 0 }));
  set_short( "Passage - x41y8z0" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y8z0.c",
  "south" : DIR+"/rooms/x41y7z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
