inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 9, 8 }));
  set_short( "Corridor - x23y9z8" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y10z8.c",
  "south" : DIR+"/rooms/x23y8z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
