inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 9, 4 }));
  set_short( "Corridor - x61y9z4" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y10z4.c",
  "south" : DIR+"/rooms/x61y8z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
