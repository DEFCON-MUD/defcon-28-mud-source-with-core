inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 9, 0 }));
  set_short( "Corridor - x25y9z0" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y10z0.c",
  "south" : DIR+"/rooms/x25y8z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
