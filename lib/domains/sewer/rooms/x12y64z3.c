inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 64, 3 }));
  set_short( "Corridor - x12y64z3" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y64z3.c",
  "east" : DIR+"/rooms/x13y64z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
