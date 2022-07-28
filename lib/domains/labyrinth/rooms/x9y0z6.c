inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 0, 6 }));
  set_short( "Corridor - x9y0z6" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y0z6.c",
  "east" : DIR+"/rooms/x10y0z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
