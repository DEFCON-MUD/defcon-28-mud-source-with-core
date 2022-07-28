inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 52, 8 }));
  set_short( "Corridor - x20y52z8" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y52z8.c",
  "east" : DIR+"/rooms/x21y52z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
