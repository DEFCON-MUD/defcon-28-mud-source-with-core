inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 46, 5 }));
  set_short( "Corridor - x57y46z5" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y46z5.c",
  "south" : DIR+"/rooms/x57y45z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
