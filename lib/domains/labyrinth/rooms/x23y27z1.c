inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 27, 1 }));
  set_short( "Corridor - x23y27z1" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y28z1.c",
  "south" : DIR+"/rooms/x23y26z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
