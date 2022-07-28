inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 0 }));
  set_short( "Passage - x1y62z0" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z0.c",
  "south" : DIR+"/rooms/x1y61z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
