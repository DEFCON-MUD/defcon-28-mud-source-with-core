inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 12, 5 }));
  set_short( "Corridor - x57y12z5" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y12z5.c",
  "east" : DIR+"/rooms/x58y12z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
