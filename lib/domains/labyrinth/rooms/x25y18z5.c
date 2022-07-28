inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 18, 5 }));
  set_short( "Passage - x25y18z5" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y18z5.c",
  "north" : DIR+"/rooms/x25y19z5.c",
  "south" : DIR+"/rooms/x25y17z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
