inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 52, 4 }));
  set_short( "Corridor - x42y52z4" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y52z4.c",
  "east" : DIR+"/rooms/x43y52z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
