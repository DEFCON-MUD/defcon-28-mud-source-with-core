inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 10, 4 }));
  set_short( "Hallway - x21y10z4" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y10z4.c",
  "north" : DIR+"/rooms/x21y11z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
