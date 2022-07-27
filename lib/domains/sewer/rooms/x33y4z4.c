inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 4, 4 }));
  set_short( "Corridor - x33y4z4" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y4z4.c",
  "south" : DIR+"/rooms/x33y3z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
