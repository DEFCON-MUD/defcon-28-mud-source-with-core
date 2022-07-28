inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 6, 5 }));
  set_short( "Hallway - x54y6z5" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y6z5.c",
  "east" : DIR+"/rooms/x55y6z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
