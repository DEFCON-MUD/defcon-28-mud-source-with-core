inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 14, 7 }));
  set_short( "Hallway - x15y14z7" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y14z7.c",
  "south" : DIR+"/rooms/x15y13z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
