inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 11, 8 }));
  set_short( "Hallway - x21y11z8" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y12z8.c",
  "south" : DIR+"/rooms/x21y10z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
