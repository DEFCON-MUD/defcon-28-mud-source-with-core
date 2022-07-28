inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 7 }));
  set_short( "Corridor - x17y22z7" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y22z7.c",
  "east" : DIR+"/rooms/x18y22z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
