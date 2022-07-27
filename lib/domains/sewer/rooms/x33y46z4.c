inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 4 }));
  set_short( "Passage - x33y46z4" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y46z4.c",
  "north" : DIR+"/rooms/x33y47z4.c",
  "south" : DIR+"/rooms/x33y45z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
