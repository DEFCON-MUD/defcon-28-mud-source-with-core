inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 42, 0 }));
  set_short( "Passage - x13y42z0" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y42z0.c",
  "north" : DIR+"/rooms/x13y43z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
