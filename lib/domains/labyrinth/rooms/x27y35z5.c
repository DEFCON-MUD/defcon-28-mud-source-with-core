inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 35, 5 }));
  set_short( "Hallway - x27y35z5" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y36z5.c",
  "south" : DIR+"/rooms/x27y34z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
