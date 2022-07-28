inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 30, 5 }));
  set_short( "Corridor - x17y30z5" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y30z5.c",
  "north" : DIR+"/rooms/x17y31z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
