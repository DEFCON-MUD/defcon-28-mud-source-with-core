inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 0, 2 }));
  set_short( "Hallway - x24y0z2" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y0z2.c",
  "east" : DIR+"/rooms/x25y0z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
