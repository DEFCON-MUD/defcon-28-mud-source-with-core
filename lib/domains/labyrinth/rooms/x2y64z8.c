inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 64, 8 }));
  set_short( "Corridor - x2y64z8" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x3y64z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
