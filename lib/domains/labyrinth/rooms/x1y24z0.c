inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 24, 0 }));
  set_short( "Passage - x1y24z0" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y25z0.c",
  "south" : DIR+"/rooms/x1y23z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
