inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 52, 4 }));
  set_short( "Passage - x6y52z4" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y52z4.c",
  "east" : DIR+"/rooms/x7y52z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
