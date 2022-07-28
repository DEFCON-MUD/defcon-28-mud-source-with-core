inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 4, 2 }));
  set_short( "Passage - x34y4z2" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y4z2.c",
  "east" : DIR+"/rooms/x35y4z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
