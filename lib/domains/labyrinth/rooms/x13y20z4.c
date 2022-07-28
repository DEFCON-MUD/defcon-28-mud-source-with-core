inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 20, 4 }));
  set_short( "Passage - x13y20z4" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y21z4.c",
  "south" : DIR+"/rooms/x13y19z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
