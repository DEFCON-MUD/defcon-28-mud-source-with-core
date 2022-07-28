inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 27, 1 }));
  set_short( "Passage - x17y27z1" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y28z1.c",
  "south" : DIR+"/rooms/x17y26z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
