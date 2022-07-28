inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 21, 1 }));
  set_short( "Passage - x31y21z1" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y22z1.c",
  "south" : DIR+"/rooms/x31y20z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
