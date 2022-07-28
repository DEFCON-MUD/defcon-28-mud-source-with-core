inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 8, 5 }));
  set_short( "Passage - x37y8z5" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y8z5.c",
  "north" : DIR+"/rooms/x37y9z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
