inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 58, 2 }));
  set_short( "Corridor - x56y58z2" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y58z2.c",
  "east" : DIR+"/rooms/x57y58z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
