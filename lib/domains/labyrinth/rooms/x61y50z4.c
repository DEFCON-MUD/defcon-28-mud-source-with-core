inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 50, 4 }));
  set_short( "Corridor - x61y50z4" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y50z4.c",
  "south" : DIR+"/rooms/x61y49z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
