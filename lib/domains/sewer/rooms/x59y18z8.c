inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 18, 8 }));
  set_short( "Passage - x59y18z8" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y18z8.c",
  "north" : DIR+"/rooms/x59y19z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
