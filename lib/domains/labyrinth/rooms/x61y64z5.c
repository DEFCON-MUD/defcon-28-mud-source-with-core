inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 64, 5 }));
  set_short( "Passage - x61y64z5" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y64z5.c",
  "east" : DIR+"/rooms/x62y64z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
