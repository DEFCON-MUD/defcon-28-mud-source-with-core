inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 47, 9 }));
  set_short( "Corridor - x5y47z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y48z9.c",
  "south" : DIR+"/rooms/x5y46z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
