inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 64, 2 }));
  set_short( "Corridor - x13y64z2" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y64z2.c",
  "east" : DIR+"/rooms/x14y64z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
