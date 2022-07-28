inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 2 }));
  set_short( "Hallway - x23y38z2" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y38z2.c",
  "east" : DIR+"/rooms/x24y38z2.c",
  "south" : DIR+"/rooms/x23y37z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
