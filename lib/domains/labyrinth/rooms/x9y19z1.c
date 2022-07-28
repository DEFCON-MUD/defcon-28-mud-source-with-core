inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 19, 1 }));
  set_short( "Passage - x9y19z1" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y20z1.c",
  "south" : DIR+"/rooms/x9y18z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
