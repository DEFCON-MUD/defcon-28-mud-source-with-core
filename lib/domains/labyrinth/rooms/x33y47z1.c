inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 47, 1 }));
  set_short( "Corridor - x33y47z1" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y48z1.c",
  "south" : DIR+"/rooms/x33y46z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
