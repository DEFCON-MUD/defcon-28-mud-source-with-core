inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 13, 6 }));
  set_short( "Corridor - x7y13z6" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y14z6.c",
  "south" : DIR+"/rooms/x7y12z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
