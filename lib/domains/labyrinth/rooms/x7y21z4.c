inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 21, 4 }));
  set_short( "Corridor - x7y21z4" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y22z4.c",
  "south" : DIR+"/rooms/x7y20z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
