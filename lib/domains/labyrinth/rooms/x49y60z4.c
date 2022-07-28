inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 4 }));
  set_short( "Hallway - x49y60z4" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y61z4.c",
  "south" : DIR+"/rooms/x49y59z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
