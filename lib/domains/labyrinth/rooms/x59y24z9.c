inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 9 }));
  set_short( "Hallway - x59y24z9" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y24z9.c",
  "east" : DIR+"/rooms/x60y24z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
