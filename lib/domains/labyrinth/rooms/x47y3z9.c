inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 3, 9 }));
  set_short( "Corridor - x47y3z9" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y4z9.c",
  "south" : DIR+"/rooms/x47y2z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
