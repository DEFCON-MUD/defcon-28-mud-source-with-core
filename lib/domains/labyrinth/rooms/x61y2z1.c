inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 1 }));
  set_short( "Passage - x61y2z1" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z1.c",
  "north" : DIR+"/rooms/x61y3z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
