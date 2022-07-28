inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 24, 1 }));
  set_short( "Passage - x23y24z1" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y24z1.c",
  "south" : DIR+"/rooms/x23y23z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
