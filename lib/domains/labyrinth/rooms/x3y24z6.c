inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 24, 6 }));
  set_short( "Passage - x3y24z6" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y25z6.c",
  "south" : DIR+"/rooms/x3y23z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
