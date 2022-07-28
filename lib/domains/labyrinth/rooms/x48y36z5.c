inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 36, 5 }));
  set_short( "Passage - x48y36z5" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y36z5.c",
  "east" : DIR+"/rooms/x49y36z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
