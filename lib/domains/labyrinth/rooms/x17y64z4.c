inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 64, 4 }));
  set_short( "Corridor - x17y64z4" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y64z4.c",
  "east" : DIR+"/rooms/x18y64z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
