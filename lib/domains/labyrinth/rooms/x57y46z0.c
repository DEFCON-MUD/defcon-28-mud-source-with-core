inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 46, 0 }));
  set_short( "Hallway - x57y46z0" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y46z0.c",
  "south" : DIR+"/rooms/x57y45z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
