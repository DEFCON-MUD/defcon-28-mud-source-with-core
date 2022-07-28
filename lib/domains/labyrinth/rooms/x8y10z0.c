inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 10, 0 }));
  set_short( "Passage - x8y10z0" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y10z0.c",
  "east" : DIR+"/rooms/x9y10z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
