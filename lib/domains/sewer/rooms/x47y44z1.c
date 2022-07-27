inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 44, 1 }));
  set_short( "Hallway - x47y44z1" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y44z1.c",
  "north" : DIR+"/rooms/x47y45z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
