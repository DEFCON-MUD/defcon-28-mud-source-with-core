inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 14, 9 }));
  set_short( "Corridor - x16y14z9" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y14z9.c",
  "east" : DIR+"/rooms/x17y14z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
