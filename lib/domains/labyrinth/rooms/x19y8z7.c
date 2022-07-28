inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 8, 7 }));
  set_short( "Passage - x19y8z7" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y8z7.c",
  "north" : DIR+"/rooms/x19y9z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
