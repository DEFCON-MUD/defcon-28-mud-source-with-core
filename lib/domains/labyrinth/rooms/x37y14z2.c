inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 2 }));
  set_short( "Hallway - x37y14z2" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y14z2.c",
  "east" : DIR+"/rooms/x38y14z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
