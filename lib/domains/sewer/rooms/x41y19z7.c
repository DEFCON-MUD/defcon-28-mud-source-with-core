inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 19, 7 }));
  set_short( "Corridor - x41y19z7" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y20z7.c",
  "south" : DIR+"/rooms/x41y18z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
