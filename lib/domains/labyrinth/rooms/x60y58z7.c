inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 58, 7 }));
  set_short( "Passage - x60y58z7" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y58z7.c",
  "east" : DIR+"/rooms/x61y58z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
