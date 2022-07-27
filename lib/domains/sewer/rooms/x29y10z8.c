inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 10, 8 }));
  set_short( "Passage - x29y10z8" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y10z8.c",
  "north" : DIR+"/rooms/x29y11z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
