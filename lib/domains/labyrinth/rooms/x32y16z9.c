inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 16, 9 }));
  set_short( "Corridor - x32y16z9" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y16z9.c",
  "east" : DIR+"/rooms/x33y16z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
