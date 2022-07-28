inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 38, 6 }));
  set_short( "Hallway - x54y38z6" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y38z6.c",
  "east" : DIR+"/rooms/x55y38z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
