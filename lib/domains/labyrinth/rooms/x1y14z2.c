inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 2 }));
  set_short( "Corridor - x1y14z2" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "south" : DIR+"/rooms/x1y13z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
