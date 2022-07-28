inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 58, 0 }));
  set_short( "Passage - x57y58z0" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y58z0.c",
  "east" : DIR+"/rooms/x58y58z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
