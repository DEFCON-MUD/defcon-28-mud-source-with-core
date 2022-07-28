inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 18, 8 }));
  set_short( "Passage - x35y18z8" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y18z8.c",
  "east" : DIR+"/rooms/x36y18z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
