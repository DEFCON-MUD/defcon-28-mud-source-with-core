inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 40, 8 }));
  set_short( "Passage - x22y40z8" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y40z8.c",
  "east" : DIR+"/rooms/x23y40z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
