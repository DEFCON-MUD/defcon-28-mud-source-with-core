inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 30, 4 }));
  set_short( "Corridor - x33y30z4" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y30z4.c",
  "east" : DIR+"/rooms/x34y30z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
