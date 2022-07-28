inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 33, 1 }));
  set_short( "Corridor - x21y33z1" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y34z1.c",
  "south" : DIR+"/rooms/x21y32z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
