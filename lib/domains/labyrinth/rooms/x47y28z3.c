inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 28, 3 }));
  set_short( "Hallway - x47y28z3" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y28z3.c",
  "south" : DIR+"/rooms/x47y27z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
