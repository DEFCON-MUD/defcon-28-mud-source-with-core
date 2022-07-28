inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 62, 0 }));
  set_short( "Passage - x15y62z0" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y62z0.c",
  "south" : DIR+"/rooms/x15y61z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
