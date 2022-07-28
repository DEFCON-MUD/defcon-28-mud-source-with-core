inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 0, 0 }));
  set_short( "Hallway - x9y0z0" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y0z0.c",
  "east" : DIR+"/rooms/x10y0z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
