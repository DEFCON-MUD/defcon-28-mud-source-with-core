inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 12, 6 }));
  set_short( "Hallway - x54y12z6" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y12z6.c",
  "east" : DIR+"/rooms/x55y12z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
