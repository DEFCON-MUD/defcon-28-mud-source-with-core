inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 52, 8 }));
  set_short( "Corridor - x41y52z8" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y52z8.c",
  "east" : DIR+"/rooms/x42y52z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
