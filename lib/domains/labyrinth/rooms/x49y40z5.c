inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 40, 5 }));
  set_short( "Passage - x49y40z5" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "south" : DIR+"/rooms/x49y39z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
