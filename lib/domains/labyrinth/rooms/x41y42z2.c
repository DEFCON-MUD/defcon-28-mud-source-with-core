inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 42, 2 }));
  set_short( "Hallway - x41y42z2" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y42z2.c",
  "east" : DIR+"/rooms/x42y42z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
