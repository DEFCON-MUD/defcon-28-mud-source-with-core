inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 30, 7 }));
  set_short( "Hallway - x31y30z7" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y30z7.c",
  "north" : DIR+"/rooms/x31y31z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
