inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 24, 3 }));
  set_short( "Corridor - x40y24z3" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y24z3.c",
  "east" : DIR+"/rooms/x41y24z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
