inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 2, 1 }));
  set_short( "Passage - x49y2z1" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y2z1.c",
  "east" : DIR+"/rooms/x50y2z1.c",
  "north" : DIR+"/rooms/x49y3z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
