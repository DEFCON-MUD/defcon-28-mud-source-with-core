inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 17, 0 }));
  set_short( "Corridor - x27y17z0" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y18z0.c",
  "south" : DIR+"/rooms/x27y16z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
