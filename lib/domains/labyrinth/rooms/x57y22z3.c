inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 22, 3 }));
  set_short( "Hallway - x57y22z3" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y22z3.c",
  "south" : DIR+"/rooms/x57y21z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
