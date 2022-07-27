inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 58, 1 }));
  set_short( "Hallway - x57y58z1" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y58z1.c",
  "north" : DIR+"/rooms/x57y59z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
