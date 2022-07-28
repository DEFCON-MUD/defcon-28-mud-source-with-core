inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 26, 2 }));
  set_short( "Passage - x15y26z2" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y26z2.c",
  "east" : DIR+"/rooms/x16y26z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
