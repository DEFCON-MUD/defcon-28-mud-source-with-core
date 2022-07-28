inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 11, 5 }));
  set_short( "Passage - x61y11z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y12z5.c",
  "south" : DIR+"/rooms/x61y10z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
