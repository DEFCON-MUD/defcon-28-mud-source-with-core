inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 30, 1 }));
  set_short( "Corridor - x15y30z1" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y30z1.c",
  "north" : DIR+"/rooms/x15y31z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
