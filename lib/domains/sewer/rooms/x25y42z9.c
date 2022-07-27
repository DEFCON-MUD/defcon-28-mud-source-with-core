inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 42, 9 }));
  set_short( "Corridor - x25y42z9" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y42z9.c",
  "north" : DIR+"/rooms/x25y43z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
