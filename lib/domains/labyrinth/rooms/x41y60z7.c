inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 60, 7 }));
  set_short( "Passage - x41y60z7" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y60z7.c",
  "north" : DIR+"/rooms/x41y61z7.c",
  "south" : DIR+"/rooms/x41y59z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
