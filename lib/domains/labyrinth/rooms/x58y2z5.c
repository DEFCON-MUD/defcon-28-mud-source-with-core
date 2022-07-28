inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 2, 5 }));
  set_short( "Hallway - x58y2z5" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y2z5.c",
  "east" : DIR+"/rooms/x59y2z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
