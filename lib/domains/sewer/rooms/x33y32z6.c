inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 32, 6 }));
  set_short( "Corridor - x33y32z6" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y32z6.c",
  "north" : DIR+"/rooms/x33y33z6.c",
  "south" : DIR+"/rooms/x33y31z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
