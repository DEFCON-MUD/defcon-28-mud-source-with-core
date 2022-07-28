inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 0, 1 }));
  set_short( "Hallway - x35y0z1" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y0z1.c",
  "east" : DIR+"/rooms/x36y0z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
