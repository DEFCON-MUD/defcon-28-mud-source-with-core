inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 19, 7 }));
  set_short( "Corridor - x7y19z7" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y20z7.c",
  "south" : DIR+"/rooms/x7y18z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
