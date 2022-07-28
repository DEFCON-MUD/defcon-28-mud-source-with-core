inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 58, 4 }));
  set_short( "Hallway - x34y58z4" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y58z4.c",
  "east" : DIR+"/rooms/x35y58z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
