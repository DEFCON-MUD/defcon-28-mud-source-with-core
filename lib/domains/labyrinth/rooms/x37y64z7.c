inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 64, 7 }));
  set_short( "Corridor - x37y64z7" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y64z7.c",
  "east" : DIR+"/rooms/x38y64z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
