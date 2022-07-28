inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 26, 2 }));
  set_short( "Hallway - x45y26z2" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y26z2.c",
  "north" : DIR+"/rooms/x45y27z2.c",
  "south" : DIR+"/rooms/x45y25z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
