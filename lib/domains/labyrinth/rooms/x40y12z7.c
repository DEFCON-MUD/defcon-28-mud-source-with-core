inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 12, 7 }));
  set_short( "Passage - x40y12z7" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y12z7.c",
  "east" : DIR+"/rooms/x41y12z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
