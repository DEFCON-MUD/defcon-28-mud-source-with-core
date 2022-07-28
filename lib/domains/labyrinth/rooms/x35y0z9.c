inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 0, 9 }));
  set_short( "Passage - x35y0z9" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y0z9.c",
  "east" : DIR+"/rooms/x36y0z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
