inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 45, 6 }));
  set_short( "Passage - x33y45z6" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y46z6.c",
  "south" : DIR+"/rooms/x33y44z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
