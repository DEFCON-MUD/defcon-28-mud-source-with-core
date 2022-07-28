inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 2, 4 }));
  set_short( "Passage - x60y2z4" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y2z4.c",
  "east" : DIR+"/rooms/x61y2z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
