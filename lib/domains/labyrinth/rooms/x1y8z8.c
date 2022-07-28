inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 8, 8 }));
  set_short( "Corridor - x1y8z8" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y8z8.c",
  "north" : DIR+"/rooms/x1y9z8.c",
  "south" : DIR+"/rooms/x1y7z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
