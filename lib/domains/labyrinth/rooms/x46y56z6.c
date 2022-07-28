inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 56, 6 }));
  set_short( "Hallway - x46y56z6" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y56z6.c",
  "east" : DIR+"/rooms/x47y56z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
