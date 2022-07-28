inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 45, 6 }));
  set_short( "Corridor - x9y45z6" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y46z6.c",
  "south" : DIR+"/rooms/x9y44z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
