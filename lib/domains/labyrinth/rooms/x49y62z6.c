inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 62, 6 }));
  set_short( "Passage - x49y62z6" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y62z6.c",
  "south" : DIR+"/rooms/x49y61z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
