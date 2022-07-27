inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 8, 9 }));
  set_short( "Corridor - x29y8z9" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y8z9.c",
  "north" : DIR+"/rooms/x29y9z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
