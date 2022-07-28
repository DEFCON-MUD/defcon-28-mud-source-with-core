inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 42, 0 }));
  set_short( "Hallway - x18y42z0" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y42z0.c",
  "east" : DIR+"/rooms/x19y42z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
