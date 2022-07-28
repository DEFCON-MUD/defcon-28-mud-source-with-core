inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 45, 2 }));
  set_short( "Passage - x19y45z2" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y46z2.c",
  "south" : DIR+"/rooms/x19y44z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
