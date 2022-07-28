inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 48, 7 }));
  set_short( "Passage - x29y48z7" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y48z7.c",
  "north" : DIR+"/rooms/x29y49z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
