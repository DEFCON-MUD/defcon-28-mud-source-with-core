inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 42, 2 }));
  set_short( "Hallway - x61y42z2" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y42z2.c",
  "south" : DIR+"/rooms/x61y41z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
