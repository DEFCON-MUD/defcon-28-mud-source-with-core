inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 56, 6 }));
  set_short( "Passage - x5y56z6" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y56z6.c",
  "north" : DIR+"/rooms/x5y57z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
