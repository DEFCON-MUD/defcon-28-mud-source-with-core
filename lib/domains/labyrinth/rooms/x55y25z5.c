inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 25, 5 }));
  set_short( "Passage - x55y25z5" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y26z5.c",
  "south" : DIR+"/rooms/x55y24z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
