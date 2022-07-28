inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 31, 1 }));
  set_short( "Corridor - x53y31z1" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y32z1.c",
  "south" : DIR+"/rooms/x53y30z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
