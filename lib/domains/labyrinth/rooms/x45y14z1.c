inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 1 }));
  set_short( "Hallway - x45y14z1" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y15z1.c",
  "south" : DIR+"/rooms/x45y13z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
