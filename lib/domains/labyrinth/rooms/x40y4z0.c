inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 4, 0 }));
  set_short( "Passage - x40y4z0" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y4z0.c",
  "east" : DIR+"/rooms/x41y4z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
