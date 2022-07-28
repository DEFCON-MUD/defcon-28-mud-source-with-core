inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 36, 3 }));
  set_short( "Hallway - x41y36z3" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y36z3.c",
  "east" : DIR+"/rooms/x42y36z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
