inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 48, 2 }));
  set_short( "Hallway - x7y48z2" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y48z2.c",
  "north" : DIR+"/rooms/x7y49z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
