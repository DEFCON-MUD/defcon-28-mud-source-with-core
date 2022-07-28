inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 64, 0 }));
  set_short( "Corridor - x57y64z0" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y64z0.c",
  "east" : DIR+"/rooms/x58y64z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
