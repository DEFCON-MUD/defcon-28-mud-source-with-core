inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 6 }));
  set_short( "Passage - x1y36z6" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y36z6.c",
  "south" : DIR+"/rooms/x1y35z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
