inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 60, 7 }));
  set_short( "Hallway - x27y60z7" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y60z7.c",
  "north" : DIR+"/rooms/x27y61z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
