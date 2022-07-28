inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 12, 7 }));
  set_short( "Corridor - x20y12z7" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y12z7.c",
  "east" : DIR+"/rooms/x21y12z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
