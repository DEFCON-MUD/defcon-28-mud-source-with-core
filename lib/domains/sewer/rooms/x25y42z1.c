inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 1 }));
  set_short( "Corridor - x25y42z1" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y42z1.c",
  "south" : DIR+"/rooms/x25y41z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
