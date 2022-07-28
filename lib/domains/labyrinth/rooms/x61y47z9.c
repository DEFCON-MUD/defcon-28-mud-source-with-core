inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 47, 9 }));
  set_short( "Corridor - x61y47z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y48z9.c",
  "south" : DIR+"/rooms/x61y46z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
