inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 9 }));
  set_short( "Passage - x15y20z9" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y21z9.c",
  "south" : DIR+"/rooms/x15y19z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
