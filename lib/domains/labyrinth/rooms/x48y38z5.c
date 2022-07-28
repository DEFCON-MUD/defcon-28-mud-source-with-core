inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 38, 5 }));
  set_short( "Passage - x48y38z5" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y38z5.c",
  "east" : DIR+"/rooms/x49y38z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
