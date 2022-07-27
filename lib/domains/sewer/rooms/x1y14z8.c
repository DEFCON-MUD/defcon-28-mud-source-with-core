inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 8 }));
  set_short( "Passage - x1y14z8" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y14z8.c",
  "north" : DIR+"/rooms/x1y15z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
