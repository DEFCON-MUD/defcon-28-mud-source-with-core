inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 61, 2 }));
  set_short( "Corridor - x29y61z2" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y62z2.c",
  "south" : DIR+"/rooms/x29y60z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
