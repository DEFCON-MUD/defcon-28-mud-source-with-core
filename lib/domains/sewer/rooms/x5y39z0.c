inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 39, 0 }));
  set_short( "Passage - x5y39z0" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y40z0.c",
  "south" : DIR+"/rooms/x5y38z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
