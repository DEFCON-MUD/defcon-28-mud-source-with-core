inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 3, 9 }));
  set_short( "Corridor - x49y3z9" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y4z9.c",
  "south" : DIR+"/rooms/x49y2z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
