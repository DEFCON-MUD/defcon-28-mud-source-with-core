inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 25, 9 }));
  set_short( "Corridor - x21y25z9" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y26z9.c",
  "south" : DIR+"/rooms/x21y24z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
