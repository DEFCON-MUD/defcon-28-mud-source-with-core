inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 22, 5 }));
  set_short( "Hallway - x61y22z5" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y23z5.c",
  "south" : DIR+"/rooms/x61y21z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
