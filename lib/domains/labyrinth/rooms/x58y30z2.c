inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 30, 2 }));
  set_short( "Corridor - x58y30z2" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y30z2.c",
  "east" : DIR+"/rooms/x59y30z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
