inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 6 }));
  set_short( "Hallway - x49y16z6" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y16z6.c",
  "north" : DIR+"/rooms/x49y17z6.c",
  "south" : DIR+"/rooms/x49y15z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
