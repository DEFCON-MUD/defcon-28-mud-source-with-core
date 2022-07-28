inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 18, 7 }));
  set_short( "Hallway - x41y18z7" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y19z7.c",
  "south" : DIR+"/rooms/x41y17z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
