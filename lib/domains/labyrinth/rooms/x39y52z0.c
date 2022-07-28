inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 52, 0 }));
  set_short( "Corridor - x39y52z0" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y52z0.c",
  "east" : DIR+"/rooms/x40y52z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
