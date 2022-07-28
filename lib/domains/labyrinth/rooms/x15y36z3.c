inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 36, 3 }));
  set_short( "Hallway - x15y36z3" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y36z3.c",
  "north" : DIR+"/rooms/x15y37z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
