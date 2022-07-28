inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 16, 5 }));
  set_short( "Hallway - x32y16z5" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y16z5.c",
  "east" : DIR+"/rooms/x33y16z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
