inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 5 }));
  set_short( "Corridor - x19y50z5" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y50z5.c",
  "south" : DIR+"/rooms/x19y49z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
