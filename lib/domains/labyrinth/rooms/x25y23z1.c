inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 23, 1 }));
  set_short( "Hallway - x25y23z1" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y24z1.c",
  "south" : DIR+"/rooms/x25y22z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
