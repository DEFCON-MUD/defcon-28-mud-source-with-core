inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 0, 5 }));
  set_short( "Corridor - x56y0z5" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y0z5.c",
  "east" : DIR+"/rooms/x57y0z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
