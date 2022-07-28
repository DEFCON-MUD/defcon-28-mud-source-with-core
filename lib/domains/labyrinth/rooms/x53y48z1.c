inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 48, 1 }));
  set_short( "Corridor - x53y48z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y48z1.c",
  "north" : DIR+"/rooms/x53y49z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
