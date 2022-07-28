inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 14, 6 }));
  set_short( "Hallway - x21y14z6" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y14z6.c",
  "north" : DIR+"/rooms/x21y15z6.c",
  "south" : DIR+"/rooms/x21y13z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
