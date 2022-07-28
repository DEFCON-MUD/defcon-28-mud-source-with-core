inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 12, 4 }));
  set_short( "Hallway - x36y12z4" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y12z4.c",
  "east" : DIR+"/rooms/x37y12z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
