inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 18, 6 }));
  set_short( "Hallway - x34y18z6" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y18z6.c",
  "east" : DIR+"/rooms/x35y18z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
