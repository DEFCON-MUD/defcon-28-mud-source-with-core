inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 2 }));
  set_short( "Hallway - x33y50z2" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y50z2.c",
  "east" : DIR+"/rooms/x34y50z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
