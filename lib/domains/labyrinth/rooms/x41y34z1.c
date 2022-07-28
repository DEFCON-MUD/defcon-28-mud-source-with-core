inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 34, 1 }));
  set_short( "Corridor - x41y34z1" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y34z1.c",
  "north" : DIR+"/rooms/x41y35z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
