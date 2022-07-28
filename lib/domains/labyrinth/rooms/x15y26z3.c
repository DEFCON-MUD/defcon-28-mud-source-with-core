inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 26, 3 }));
  set_short( "Hallway - x15y26z3" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y26z3.c",
  "south" : DIR+"/rooms/x15y25z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
