inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 31, 5 }));
  set_short( "Hallway - x1y31z5" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y32z5.c",
  "south" : DIR+"/rooms/x1y30z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
