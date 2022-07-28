inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 10, 9 }));
  set_short( "Hallway - x34y10z9" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y10z9.c",
  "east" : DIR+"/rooms/x35y10z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
