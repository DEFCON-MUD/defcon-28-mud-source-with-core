inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 62, 0 }));
  set_short( "Corridor - x11y62z0" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y62z0.c",
  "east" : DIR+"/rooms/x12y62z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
