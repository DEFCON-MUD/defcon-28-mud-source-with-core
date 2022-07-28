inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 60, 2 }));
  set_short( "Corridor - x55y60z2" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y60z2.c",
  "east" : DIR+"/rooms/x56y60z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
