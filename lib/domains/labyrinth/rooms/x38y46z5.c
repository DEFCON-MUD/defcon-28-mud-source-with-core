inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 46, 5 }));
  set_short( "Corridor - x38y46z5" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y46z5.c",
  "east" : DIR+"/rooms/x39y46z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
