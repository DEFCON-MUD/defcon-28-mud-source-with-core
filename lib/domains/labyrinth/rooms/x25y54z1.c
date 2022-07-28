inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 54, 1 }));
  set_short( "Corridor - x25y54z1" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y55z1.c",
  "south" : DIR+"/rooms/x25y53z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
