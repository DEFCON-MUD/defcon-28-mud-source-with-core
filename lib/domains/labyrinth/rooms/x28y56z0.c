inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 56, 0 }));
  set_short( "Hallway - x28y56z0" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y56z0.c",
  "east" : DIR+"/rooms/x29y56z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
