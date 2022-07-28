inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 35, 4 }));
  set_short( "Hallway - x49y35z4" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y36z4.c",
  "south" : DIR+"/rooms/x49y34z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
