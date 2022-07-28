inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 30, 3 }));
  set_short( "Corridor - x48y30z3" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y30z3.c",
  "east" : DIR+"/rooms/x49y30z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
