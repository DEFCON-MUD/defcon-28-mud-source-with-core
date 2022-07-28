inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 2, 0 }));
  set_short( "Hallway - x50y2z0" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y2z0.c",
  "east" : DIR+"/rooms/x51y2z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
