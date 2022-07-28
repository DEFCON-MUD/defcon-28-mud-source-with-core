inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 14, 4 }));
  set_short( "Hallway - x53y14z4" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y14z4.c",
  "east" : DIR+"/rooms/x54y14z4.c",
  "south" : DIR+"/rooms/x53y13z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
