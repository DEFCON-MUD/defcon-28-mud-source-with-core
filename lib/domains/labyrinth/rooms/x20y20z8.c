inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 20, 8 }));
  set_short( "Corridor - x20y20z8" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y20z8.c",
  "east" : DIR+"/rooms/x21y20z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
