inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 40, 0 }));
  set_short( "Corridor - x5y40z0" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y40z0.c",
  "south" : DIR+"/rooms/x5y39z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
