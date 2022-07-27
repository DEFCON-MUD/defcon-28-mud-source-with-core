inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 10, 2 }));
  set_short( "Hallway - x61y10z2" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y11z2.c",
  "south" : DIR+"/rooms/x61y9z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
