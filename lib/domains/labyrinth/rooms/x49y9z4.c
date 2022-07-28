inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 9, 4 }));
  set_short( "Hallway - x49y9z4" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y10z4.c",
  "south" : DIR+"/rooms/x49y8z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
