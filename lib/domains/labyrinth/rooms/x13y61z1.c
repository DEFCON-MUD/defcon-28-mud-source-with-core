inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 61, 1 }));
  set_short( "Passage - x13y61z1" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y62z1.c",
  "south" : DIR+"/rooms/x13y60z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
