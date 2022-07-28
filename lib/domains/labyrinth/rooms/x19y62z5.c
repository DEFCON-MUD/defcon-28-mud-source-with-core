inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 62, 5 }));
  set_short( "Hallway - x19y62z5" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y62z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
