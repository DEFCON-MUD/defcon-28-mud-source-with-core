inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 46, 6 }));
  set_short( "Corridor - x15y46z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y46z6.c",
  "north" : DIR+"/rooms/x15y47z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
