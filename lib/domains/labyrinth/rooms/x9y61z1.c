inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 61, 1 }));
  set_short( "Hallway - x9y61z1" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y62z1.c",
  "south" : DIR+"/rooms/x9y60z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
