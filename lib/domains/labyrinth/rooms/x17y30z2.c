inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 30, 2 }));
  set_short( "Hallway - x17y30z2" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y30z2.c",
  "east" : DIR+"/rooms/x18y30z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
