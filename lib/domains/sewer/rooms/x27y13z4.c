inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 13, 4 }));
  set_short( "Passage - x27y13z4" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y14z4.c",
  "south" : DIR+"/rooms/x27y12z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
