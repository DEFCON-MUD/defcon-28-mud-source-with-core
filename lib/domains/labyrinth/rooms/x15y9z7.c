inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 9, 7 }));
  set_short( "Passage - x15y9z7" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y10z7.c",
  "south" : DIR+"/rooms/x15y8z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
