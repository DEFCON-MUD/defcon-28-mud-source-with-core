inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 46, 7 }));
  set_short( "Hallway - x31y46z7" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y46z7.c",
  "south" : DIR+"/rooms/x31y45z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
