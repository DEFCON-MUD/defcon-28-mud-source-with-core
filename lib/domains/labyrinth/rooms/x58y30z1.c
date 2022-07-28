inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 30, 1 }));
  set_short( "Corridor - x58y30z1" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y30z1.c",
  "east" : DIR+"/rooms/x59y30z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
