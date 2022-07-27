inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 20, 0 }));
  set_short( "Passage - x24y20z0" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y20z0.c",
  "east" : DIR+"/rooms/x25y20z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
