inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 44, 3 }));
  set_short( "Hallway - x24y44z3" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y44z3.c",
  "east" : DIR+"/rooms/x25y44z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
