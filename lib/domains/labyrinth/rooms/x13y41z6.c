inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 41, 6 }));
  set_short( "Corridor - x13y41z6" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y42z6.c",
  "south" : DIR+"/rooms/x13y40z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
