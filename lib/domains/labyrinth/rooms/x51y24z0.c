inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 0 }));
  set_short( "Corridor - x51y24z0" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y24z0.c",
  "east" : DIR+"/rooms/x52y24z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
