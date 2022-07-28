inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 8, 0 }));
  set_short( "Hallway - x58y8z0" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y8z0.c",
  "east" : DIR+"/rooms/x59y8z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
