inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 12, 5 }));
  set_short( "Hallway - x12y12z5" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y12z5.c",
  "east" : DIR+"/rooms/x13y12z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
