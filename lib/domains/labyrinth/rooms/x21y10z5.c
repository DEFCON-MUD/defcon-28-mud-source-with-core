inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 10, 5 }));
  set_short( "Passage - x21y10z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y10z5.c",
  "south" : DIR+"/rooms/x21y9z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
