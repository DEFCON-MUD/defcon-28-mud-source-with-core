inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 8 }));
  set_short( "Corridor - x35y54z8" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y54z8.c",
  "east" : DIR+"/rooms/x36y54z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
