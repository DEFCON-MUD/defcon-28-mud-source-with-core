inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 15, 9 }));
  set_short( "Hallway - x55y15z9" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y16z9.c",
  "south" : DIR+"/rooms/x55y14z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
