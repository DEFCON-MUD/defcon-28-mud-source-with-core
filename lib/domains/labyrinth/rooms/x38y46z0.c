inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 46, 0 }));
  set_short( "Passage - x38y46z0" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y46z0.c",
  "east" : DIR+"/rooms/x39y46z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
