inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 22, 9 }));
  set_short( "Corridor - x58y22z9" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y22z9.c",
  "east" : DIR+"/rooms/x59y22z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
