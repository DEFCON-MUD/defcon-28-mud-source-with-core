inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 6 }));
  set_short( "Corridor - x23y12z6" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y12z6.c",
  "east" : DIR+"/rooms/x24y12z6.c",
  "south" : DIR+"/rooms/x23y11z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
