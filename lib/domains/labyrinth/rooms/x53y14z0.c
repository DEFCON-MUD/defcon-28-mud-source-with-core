inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 14, 0 }));
  set_short( "Corridor - x53y14z0" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y14z0.c",
  "south" : DIR+"/rooms/x53y13z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
